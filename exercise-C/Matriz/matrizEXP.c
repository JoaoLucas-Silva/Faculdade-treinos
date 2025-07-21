#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Aprendendo matrizes 
*/

int main (void)
{
    int m[2][2], i, c;

    printf("\nLe os numeros de uma matriz 2x2 e os mostra na tela");

    for(i = 0; i < 2; i++)
    {
        for(c = 0; c < 2; c++)
        {
            printf("\nDigite o valor da posicao linha %d coluna %d da matriz: ", i, c);
            scanf("%d", &m[i][c]);
        }
    }

    printf("\nMatriz original: \n");
    for(i = 0; i < 2; i++)
    {
        for(c = 0; c < 2; c++)
        {
            printf(" %d", m[i][c]);
        }
        printf("\n");    
    }

return 0;
}