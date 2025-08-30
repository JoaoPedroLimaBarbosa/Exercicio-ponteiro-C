
#include <stdio.h>

int main(void) {
    float m[3][3];

  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Nota do aluno %d, prova %d: ", i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }
    }

   
    float *p = &m[0][0];

    printf("\nMatriz (usando apenas o ponteiro p):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           
            printf("%.2f ", *(p + i * 3 + j));
        }
        printf("\n");
    }

    
    float somaDiag = 0.0f;
    for (int i = 0; i < 3; i++) somaDiag += *(p + i * 3 + i);

    printf("\nSoma da diagonal principal: %.2f\n", somaDiag);

    return 0;
}

