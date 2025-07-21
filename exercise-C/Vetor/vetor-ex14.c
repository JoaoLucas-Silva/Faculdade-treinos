#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
- Ler duas matrizes A e B do tipo vetor com 20 elementos. Construir uma matriz C, onde cada 
elemento de C é a subtração do elemento correspondente de A com B.

entrada de dados
    vetor A, vetor B e vetor C

saída de dados
    vetorC com os valores da subtração dos elementos correspondentes do vetor A e B

processamento
    para i = 0 e i menor que 10, i recebe i + 1 // VETOR A
        obter os valores das posições do vetor A 
    fimenquanto
    para j = 0 e j menor que 10 recebe j + 1 // VETOR B
        obter os valores das posições do vetor B 
    fimenquanto
    para i = 0  e i menor que 20, i recebe i + 1;
        vetorC = vetorA - vetorB
    mostrar vetorA
    mostrar vetorB
    mostrar vetorC     
*/

int main(void)
{
    int vetorA[20], vetorB[20], vetorC[20], i;

    for(i = 0; i < 20; i++)
    {
        printf("\nDigite o valor da posicao %d do vetor A: ", i);
            scanf("%d", &vetorA[i]);
    }

     for(i = 0; i < 20; i++)
    {
        printf("\nDigite o valor da posicao %d do vetor B: ", i);
            scanf("%d", &vetorB[i]);
    }

    for(i = 0; i < 20; i++)
    {       
        vetorC[i] = vetorA[i] - vetorB[i];
    }   

    printf("\nVetor A\n");
    for(i = 0; i < 20; i++)
    {   
        printf("%d ", vetorA[i]);
    }

    printf("\nVetor B\n");
    for(i = 0; i < 20; i++)
    {   
        printf("%d ", vetorB[i]);
    }

    printf("\nVetor C\n");
    for(i = 0; i < 20; i++)
    {   
        printf("%d ", vetorC[i]);
    }

return 0;
}      