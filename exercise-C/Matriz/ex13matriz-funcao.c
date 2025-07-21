#include <stdio.h>
#include <stdlib.h>

/*
    Questão 13 - Desenvolver um programa que efetue a leitura dos elementos de uma matriz A de 5x5 do tipo vetor. 
    Ao final, apresente o total da soma de todos os elementos que sejam ímpares.     
*/

//Função para ler a matriz A
void lermtA(int m1 [5][5])
{
    int i, j;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("\nDigite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
}

// Função para exibir a matriz original A
void exibemtA(int m1 [5][5])
{
    int i, j;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf(" %d", m1[i][j]);
        }
        printf("\n");
    }     
}

// Função da soma dos elementos que são ímpares e exibe-os
int somaimpar(int m1 [5][5])
{
    int i, j, somai;
    
    somai = 0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(m1[i][j] % 2 == 1)
                somai += m1[i][j];
        }
    }
    return somai;
}

int main (void)
{   
    int mA[5][5], soma;

    printf("\nLe os valores de uma matriz 5x5 e mostra a soma dos elementos impares");

    // Chamar função ler valores
    lermtA(mA);

    // Chamar função para exibir a matriz original
    exibemtA(mA);

    // Chamar função que soma os elementos ímpares da matriz
    soma = somaimpar(mA);

    // Exibe o valor da soma
    printf("\nO valor da soma dos elementos impares da matriz e de %d\n", soma);

    system("pause");

    return 0;
}