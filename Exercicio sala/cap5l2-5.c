#include <stdio.h>
#include <math.h>

int main(void) // Funcao principal
{
    double x[3] = {2.3, 3.1, -1.2}; // Declaracao de um vetor de doubles com 3 elementos e inicializacao dos valores

    printf("O primeiro elemento e %f\n", x[0]); // Exibe o primeiro elemento do vetor
    printf("Esse e o endereco do primeiro elemento do vetor %p\n", &x[0]); // Exibe o endereco do primeiro elemento do vetor
    printf("Esse e o endereco do vetor %p\n", x); // Exibe o endereco inicial do vetor (mesmo do primeiro elemento)
    printf("Esse e o endereco do segundo elemento do vetor %p\n", &x[1]); // Exibe o endereco do segundo elemento do vetor
    printf("Esse e o endereco do terceiro elemento do vetor %p\n", &x[2]); // Exibe o endereco do terceiro elemento do vetor
}
