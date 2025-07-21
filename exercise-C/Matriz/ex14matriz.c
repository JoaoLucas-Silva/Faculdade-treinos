#include <stdio.h>
#include <stdlib.h>

/*
    Questão 14 - Ler duas matrizes A e B do tipo vetor 4x4. Construir uma matriz C, onde cada 
    elemento de C é a subtração do elemento correspondente de A com B.     
*/

int main (void)
{
    int mA[4][4], mB[4][4], mC[4][4], i, j;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("\nDigite o valor da linha %d e coluna %d da matriz A: ", i, j);
            scanf("%d", &mA[i][j]);
        }
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("\nDigite o valor da linha %d e coluna %d da matriz B: ", i, j);
            scanf("%d", &mB[i][j]);
        }
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {   
            mC[i][j] = mA[i][j] - mB[i][j];
        }
    }

    printf("\nMatriz C\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf(" %d", mC[i][j]);
            
        }
        printf("\n");
    }

    system("pause");

    return 0;
}