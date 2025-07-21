#include <stdio.h>
#include <math.h> // Inclusao da biblioteca math.h

void troca(double v[2]) // Funcao que troca os valores de um vetor de doubles
{
    double tmp = v[0]; // Armazena o primeiro elemento do vetor em tmp
    v[0] = v[1]; // Atribui o segundo elemento do vetor ao primeiro
    v[1] = tmp; // Atribui o valor armazenado em tmp ao segundo elemento do vetor
}

void main(void) // Funcao principal
{
    double v[2] = {2, 3}; // Declara um vetor de doubles e inicializa com 2 e 3
    printf("a=%f, b=%f\n", v[0], v[1]); // Exibe os valores iniciais do vetor
    troca(v); // Chama a funcao troca passando o vetor
    printf("a=%f, b=%f\n", v[0], v[1]); // Exibe os novos valores do vetor apos a troca
}
