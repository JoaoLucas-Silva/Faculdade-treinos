#include <stdio.h> // Biblioteca para funções de entrada e saída
#include <math.h>   // Biblioteca para funções matemáticas (não está sendo utilizada no código)

int main(void) // Função principal
{
    double x; // Declaração de uma variável double x
    double *y = &x; // Ponteiro y é inicializado com o endereço de memória de x

    *y = 2.4; // O valor 2.4 é atribuído ao conteúdo de y, que também é o valor de x (porque y aponta para x)

    printf("O valor de x e %f\n", x); // Exibe o valor de x, que é 2.4
}
