#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Desenvolver um programa que efetue a leitura de 5 elementos de uma matriz A do tipo vetor. 
Ao final, apresente o total da soma de todos os elementos que sejam ímpares.

entrada de dados
    vetor A de 5 elementos, soma

saída de dados
    soma total dos elementos ímpares do vetor

processamento
    para i = 0 e i menor que 5, i recebe i + 1 // VETOR A
        obter os valores das posições do vetor A 
    fimenquanto

    iniciar soma em 0

    para i = 0 e i menor que 5, i recebe i + 1 // VETOR A
        SE indice IMPAR faça
            soma = soma + vetor A
    mostrar mensagem - soma dos elementos impares do vetor A e de xx
fimalg
*/

int main(void)
{
    int vetorA[5], i, soma;

    for(i = 0; i < 5; i++)
    {
        printf("\nDigite o valor da posicao %d do vetor A: ", i);
            scanf("%d", &vetorA[i]);
    }
    
    soma = 0;
    for(i = 0; i < 5; i++)
    {
        if(vetorA[i] % 2 == 1)
            soma = soma + vetorA[i];
    }

    printf("\nA soma dos elementos impares do vetor A e de %d ", soma);

    return 0;
}