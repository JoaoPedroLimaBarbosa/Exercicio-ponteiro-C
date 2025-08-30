
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Quantos funcionarios (n)? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Valor invalido.\n");
        return 1;
    }

   
    int *horas = malloc(n * sizeof *horas);
    if (horas == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

   
    for (int i = 0; i < n; i++) {
        printf("Horas do funcionario %d: ", i + 1);
        scanf("%d", horas + i); // endereco do elemento i
    }

    
    long total = 0;
    for (int i = 0; i < n; i++) {
        total += *(horas + i);
    }

    printf("\nTotal de horas no mes: %ld\n", total);

    free(horas); 
    return 0;
}

