
#include <stdio.h>

int main(void) {
   
    int cofrinho;
    int *p = &cofrinho;

    printf("Digite o valor inteiro guardado no cofrinho: ");
    scanf("%d", &cofrinho); 
    
    // Mostrando valor por variavel e por ponteiro (*p)
    printf("\nValor (variavel): %d\n", cofrinho);
    printf("Valor (via ponteiro *p): %d\n", *p);

    // Mostrando enderecos - %p e conversao para (void*)
    printf("Endereco de cofrinho (&cofrinho): %p\n", (void*)&cofrinho);
    printf("Endereco armazenado em p:        %p\n", (void*)p);

    return 0;
}
