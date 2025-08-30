
#include <stdio.h>

int main(void) {
    float notas[6];
    float *p = notas;

    for (int i = 0; i < 6; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", p + i);
    }

    
    float *esq = p;
    float *dir = p + 5; 

    while (esq < dir) {
        float tmp = *esq;
        *esq = *dir;
        *dir = tmp;
        esq++;
        dir--;
    }

    printf("\nNotas invertidas:\n");
    for (int i = 0; i < 6; i++) printf("%.2f ", *(p + i));
    printf("\n");

    return 0;
}
