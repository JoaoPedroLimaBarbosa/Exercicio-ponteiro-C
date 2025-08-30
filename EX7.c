
#include <stdio.h>
#include <limits.h> 

int main(void) {
    
    int pontos[4][4] = {
        {5, 7, 8, 6},  
        {4, 6, 5, 7},  
        {3, 9, 6, 8}, 
        {2, 4, 7, 5}   
    };

    int *p = &pontos[0][0];

   
    int pares = 0, impares = 0;
    printf("Pontos (jogadores x sets):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int val = *(p + i * 4 + j);
            printf("%2d ", val);
            if (val % 2 == 0) pares++; else impares++;
        }
        printf("\n");
    }
    printf("\nPares: %d | Impares: %d\n", pares, impares);

   
    int melhorJogador = -1, maiorTotal = INT_MIN;
    printf("\nTotal por jogador:\n");
    for (int i = 0; i < 4; i++) {
        int somaLinha = 0;
        for (int j = 0; j < 4; j++) somaLinha += *(p + i * 4 + j);
        printf("Jogador %d: %d\n", i + 1, somaLinha);
        if (somaLinha > maiorTotal) {
            maiorTotal = somaLinha;
            melhorJogador = i + 1;
        }
    }
    printf("Jogador com maior pontuacao: %d (total %d)\n", melhorJogador, maiorTotal);

    
    int setMaisDisputado = -1, maiorSomaSet = INT_MIN;
    printf("\nTotal por set:\n");
    for (int j = 0; j < 4; j++) {
        int somaCol = 0;
        for (int i = 0; i < 4; i++) somaCol += *(p + i * 4 + j);
        printf("Set %d: %d\n", j + 1, somaCol);
        if (somaCol > maiorSomaSet) {
            maiorSomaSet = somaCol;
            setMaisDisputado = j + 1;
        }
    }
    printf("Set mais disputado: Set %d (total %d)\n", setMaisDisputado, maiorSomaSet);

   
    printf("\nMedia por jogador:\n");
    for (int i = 0; i < 4; i++) {
        int soma = 0;
        for (int j = 0; j < 4; j++) soma += *(p + i * 4 + j);
        double media = soma / 4.0;
        printf("Jogador %d: %.2f\n", i + 1, media);
    }

   
    int jogadorMaisRegular = -1, menorAmplitude = INT_MAX;
    for (int i = 0; i < 4; i++) {
        int minv = INT_MAX, maxv = INT_MIN;
        for (int j = 0; j < 4; j++) {
            int val = *(p + i * 4 + j);
            if (val < minv) minv = val;
            if (val > maxv) maxv = val;
        }
        int amplitude = maxv - minv;
        if (amplitude < menorAmplitude) {
            menorAmplitude = amplitude;
            jogadorMaisRegular = i + 1;
        }
    }
    printf("\nJogador mais regular: %d (amplitude = %d)\n", jogadorMaisRegular, menorAmplitude);

    return 0;
}
