#include <stdio.h>
#include <stdlib.h>

/*
    Receber os valores de uma matriz A e B 3x2, fazer uma matriz C que seja a soma da matriz A e B
*/

int main (void)
{
    int m1[3][2], m2[3][2], m3soma[3][2], i, j;

    printf("\nRecebe os valores de uma matriz A e B e crie uma matriz C que seja a soma da matriz A e B");

    for(i = 0; i < 3; i++) // Ler  a matriz A e B
    {
        for(j = 0; j < 2; j++)
        {
            printf("\nDigite o  valor da linha %d e coluna %d da matriz  A: ", i, j);
            scanf("%d", &m1[i][j]);
            printf("\nDigite o  valor da linha %d e coluna %d da matriz  B: ", i, j);
            scanf("%d", &m2[i][j]);

            // Fazer a soma das matrizes
            m3soma[i][j] = m1[i][j] + m2[i][j];
        }    
    }

    // Exibe a matriz C
    printf("\nMatriz C\n");
    for(i = 0; i < 3; i++) // Ler  a matriz A e B
    {
        for(j = 0; j < 2; j++)
        {
            printf(" %d", m3soma[i][j]);
        }
        printf("\n");    
    }

    return 0;
}