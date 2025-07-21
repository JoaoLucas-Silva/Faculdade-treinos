#include <stdio.h> // Inclusão das bibliotecas
#include <math.h>

int main(void) // Função principal
{
    int x; // Declaração da variável x

    printf("digite o valor de x\n\n"); // Solicita que o usuário digite um valor para x
    scanf("%d", &x); // Lê o valor digitado e armazena na variável x

    printf("O valor de x e %d\n", x); // Exibe o valor de x na tela
    printf("O endereco de x na memoria %p\n", &x); // Exibe o endereço de memória onde x está armazenado
}
