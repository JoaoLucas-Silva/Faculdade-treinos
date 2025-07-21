#include <stdio.h> // Inclusão das bibliotecas
#include <math.h>


int main(void) // Função principal
{
    int x; // Declaração da variável inteira x
    int *y = NULL; // Declaração de um ponteiro y inicializado com NULL

    printf("digite o valor de x\n\n"); // Solicita que o usuário digite um valor para x
    scanf("%d", &x); // Lê o valor digitado e armazena na variável x

    y = &x; // Atribui ao ponteiro y o endereço de memória da variável x

    printf("O valor de x e %d\n", x); // Exibe o valor de x
    printf("O endereco de x na memoria %p\n", y); // Exibe o endereço de memória de x, que está armazenado no ponteiro y
}
