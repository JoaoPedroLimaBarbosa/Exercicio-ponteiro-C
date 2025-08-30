
#include <stdio.h>

int main(void) {
    int idade;
    int *ptr = &idade; 

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("\nIdade (variavel): %d\n", idade);
    printf("Idade (via ponteiro *ptr): %d\n", *ptr);
    printf("Endereco (&idade): %p\n", (void*)&idade);
    printf("Endereco em ptr:   %p\n", (void*)ptr);

    return 0;
}
