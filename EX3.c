/* EX3.c */
#include <stdio.h>

int main(void) {
    float precos[5];
    float *p = precos; 

    
    for (int i = 0; i < 5; i++) {
        printf("Preco do produto %d: R$ ", i + 1);
        scanf("%f", (p + i)); // 
    }

    printf("\nPrecos originais:\n");
    for (int i = 0; i < 5; i++) {
        printf("Produto %d: R$ %.2f\n", i + 1, *(p + i));
    }

    printf("\nPrecos com 10%% de desconto:\n");
    for (int i = 0; i < 5; i++) {
        float comDesconto = *(p + i) * 0.90f;
        printf("Produto %d: R$ %.2f\n", i + 1, comDesconto);
    }

    return 0;
}
