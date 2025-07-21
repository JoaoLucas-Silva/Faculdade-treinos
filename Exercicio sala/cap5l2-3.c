#include <stdio.h> // Inclusão das bibliotecas
#include <math.h>


int main(void) // Função principal
{
    double x, *y, **z; // Declaração de uma variável double x, um ponteiro y e um ponteiro de ponteiro z
    x = 2.3; // Atribui o valor 2.3 à variável x
    y = &x; // O ponteiro y recebe o endereço de memória da variável x
    z = &y; // O ponteiro z recebe o endereço de memória do ponteiro y

    printf("O valor de x e %f\n", x); // Exibe o valor de x
    printf("O endereco de x e %p\n", &x); // Exibe o endereço de memória de x
    printf("O valor de y e %p\n", y); // Exibe o valor de y, que é o endereço de x
    printf("O endereco de y e %p\n", &y); // Exibe o endereço de memória de y
    printf("O valor apontado por y e %f\n", *y); // Exibe o valor apontado por y, que é o valor de x
    printf("O valor de z e %p\n", z); // Exibe o valor de z, que é o endereço de y
    printf("O endereco de z e %p\n", &z); // Exibe o endereço de memória de z
    printf("O valor apontado por z e %p\n", *z); // Exibe o valor apontado por z, que é o valor de y (endereço de x)
    printf("O valor apontado pela variavel que esta apontada por z e %f\n", **z); // Exibe o valor apontado por y através de z, que é o valor de x
}
