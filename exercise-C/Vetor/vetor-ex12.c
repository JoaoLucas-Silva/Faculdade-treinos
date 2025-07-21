#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Desenvolver um programa que efetue a leitura de 10 elementos de uma matriz A do tipo vetor. 
Construir uma matriz B de mesmo tipo, observando a seguinte lei de formação: Se o valor do índice for par, 
o valor deverá ser multiplicado por 5, sendo ímpar deverá ser somado por 5. Ao final mostrar os conteúdos 
das duas matrizes.

entrada de dados
    vetor A de 10 elementos, vetor B de 10 elementos

saída de dados
    vetor A e vetor B com os valores multpl e somado

processamento
    para i = 0 e i menor que 10, i recebe i + 1 // VETOR A
        obter os valores das posições do vetor A 
    fimenquanto
    para i = 0 e i menor que 10, i recebe i + 1 // VETOR A
        SE indice PAR faça
            valor da posicao do vetor * 5
        SENAO
            valor da posicao do vetor + 5
    para j = 0 e j menor que 10, j recebe j + 1 // VETOR B
        obter os valores das posições do vetor B 
    fimenquanto
    para j = 0 e j menor que 10, j recebe j + 1 // VETOR B
        SE indice PAR faça
            valor da posicao do vetor * 5
        SENAO
            valor da posicao do vetor + 5

    para i = 0 e i menor que 10, i recebe i + 1 // VETOR A
        mostrar mensagem - vetor A
    para j = 0 e j menor que 10, j recebe j + 1 // VETOR B
        mostrar mensagem - vetor B

*/

int main(void)
{
    int vetorA[10], vetorB[10], i, j;

    for(i = 0; i < 10; i++)
    {
        printf("\nDigite o valor da posicao %d do vetor A: ", i);
            scanf("%d", &vetorA[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
            vetorB[i] = vetorA[i] * 5;
        else
            vetorB[i] = vetorA[i] + 5;
    }
    printf("\nVetor A \n");
    for(i = 0; i < 10; i++)
        printf("%d ", vetorA[i]);
    
    printf("\nVetor B ja modificado\n");
    for(i = 0; i< 10; i++)
        printf("%d ", vetorB[i]);
        
return 0;
}