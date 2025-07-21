#include <stdio.h>
#include <stdlib.h>

/*
    Desenvolver um programa que efetue a leitura de 9 elementos de uma matriz A do tipo vetor. 
    Construir uma matriz B de mesmo tipo, observando a seguinte lei de formação: Se o valor do índice for par, 
    o valor deverá ser multiplicado por 5, sendo ímpar deverá ser somado por 5. Ao final mostrar os conteúdos 
    das duas matrizes.
*/

// Função para ler a matriz A
void lermt(int m1[3][3])
{   
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("\nDigite o numero da linha %d e coluna %d da matriz: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
}

// Função para exibir a matriz A
void exibemA(int m1[3][3])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf(" %d", m1[i][j]);
            
        }
        printf("\n");
    }
}

// Função para criação da matriz B com as condições necessárias
void criamB(int m1[3][3], int m2[3][3])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(m1[i][j] % 2 == 0)
            {
                m2[i][j] = m1[i][j] * 5;
            }
            else
            {
                m2[i][j] = m1[i][j] + 5;
            }
        }
    }
}

// Função para exibir a matriz B
void exibemB(int m2[3][3])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf(" %d", m2[i][j]);
            
        }
        printf("\n");
    }
}

int main(void)
{
    int mA[3][3], mB[3][3];

    printf("\nEfetua a leitura dos valores de uma matriz 3x3, se o numero for par multiplica por 5, se for impar soma 5");

    // Função chamada para ler a matriz
    lermt(mA);

    printf("\nExibir a matriz A\n"); // Chamar função para exibir matriz A
    exibemA(mA); 

    //Função para criar a matriz B
    criamB(mA, mB);

    printf("\nExibir a matriz B\n"); // Chamar função para exibir matriz B
    exibemB(mB);

    system("pause"); // Para executar corretamente o outpot

    return 0;
}