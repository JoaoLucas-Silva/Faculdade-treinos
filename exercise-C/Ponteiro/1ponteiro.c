#include <stdio.h>
#include <stdlib.h>

/*
    Programa inicial de ponteiros
*/

int main(void)
{
    int x = 0, *ptr; // Declarando variável X já com o valor 0 e variável ponteiro

    ptr = &x; // Recebendo o endereco de X

    printf("\nValor de x %d\n", x); // Exibindo valor de X
    printf("\nEndereco de memoria da variavel x %p\n", &x); // Exibindo o endereço de memoria da variavel X

    printf("\nEndereco qual a variavel ptr esta apontando %p\n", ptr); // Exibe o endereço de X, ja que ptr esta apontando para esse endereco
    printf("\nValor da variavel X que esta sendo apontada por ptr %d\n", *ptr); // Exibe o valor de X, ja que acessa diretamente o valor do endereco de X

    *ptr =+ 10; // Alterando valor da variavel X diretamente pelo ponteiro
    printf("\nNovo valor de x %d\n", x); // Exibindo o novo valor de X pela propria variavel X
    printf("\nNovo valor da variavel X que esta sendo apontada por ptr %d\n", *ptr); // Exibindo o novo valor de X pelo ponteiro *ptr
    return 0;
}