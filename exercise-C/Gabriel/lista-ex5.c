#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    João Lucas Silva de Souza
    RA: 2649250
*/

/*

    Questão 05 - Faça um programa que calcule o desvio padrão de um vetor contendo n = 100 números,
    onde m é a média do vetor.

    entradas de dados:
        vetor v[100] de números inteiros

    saídas de dados:
        soma de todos os números do vetor
        média dos números do vetor
        desvio padrão dos números do vetor

    processamento:
        declarar variáveis:
            int v[100], i, soma
            float m, desvio_p

    mostrar mensagem ("Calcula o desvio padrao de um vetor que contem 100 numeros")

    inicializar i com 0

    faça
        atribuir (rand() / 100 + 1) a v[i]
        incrementar i
    enquanto (i < 100)

    mostrar mensagem ("\n\nVetor original")
    
    para i de 0 até 99 faça
        mostrar mensagem ("v[i]")

    atribuir 0 a soma
    para i de 0 até 99 faça
        soma += v[i]

    mostrar mensagem ("\n\nSoma de todos os numeros do vetor: soma")

    atribuir (float)soma / 100 a m

    mostrar mensagem ("\n\nMedia do vetor: m")

    atribuir 0 a desvio_p
    para i de 0 até 99 faça
        desvio_p += (v[i] - m) ^ 2

    atribuir (desvio_p / (100 - 1)) ^ 0.5 a desvio_p

    mostrar mensagem ("\n\nDesvio padrao do vetor: desvio_p")
fimalgoritmo

*/

int main(void)
{
    int v[100], i, soma;
    float m, desvio_p;

    printf("\nCalcula o desvio padrao de um vetor que contem 100 numeros");

    srand(time(NULL));
    i = 0;
    while(i < 100)
    {
        v[i] = rand() / 100 + 1;  // Gera números aleatórios(centenas)
        i = i + 1;
    }

    printf("\n\nVetor original\n"); // Mostra o vetor original
    for(i = 0; i < 100; i++)
        printf(" %d", v[i]);

    // Soma dos numeros do vetor
    soma = 0;
    for(i = 0; i < 100; i++)
    {
        soma += v[i];
    }
    printf("\n\nSoma de todos os numeros do vetor: %d", soma);

    // Media do vetor
    m = (float)soma / 100;
    printf("\n\nMedia do vetor: %.2f", m);

    // Cálculo do desvio padrão
    desvio_p = 0;
    for(i = 0; i < 100; i++)
    {
        desvio_p += pow(v[i] - m, 2); // Soma dos quadrados das diferenças
    }
    desvio_p = pow(desvio_p / (100 - 1), 0.5); // Usa pow para calcular a raiz quadrada

    printf("\n\nDesvio padrao do vetor: %.2f\n", desvio_p);

    return 0;
}