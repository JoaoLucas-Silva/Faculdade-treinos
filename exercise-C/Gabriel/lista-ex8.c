#include <stdio.h>

/*
    João Lucas Silva de Souza
    RA: 2649250
*/

/*

    Questão 08 - Faça um programa que receba uma matriz 5x5 valores do tipo int do usuário, um valor de
    cada vez, e imprima a sua matriz transposta (Obs.: a matriz transposta é obtida permutando-se as linhas e
    as colunas de uma matriz)

    
    entradas de dados:
        matriz 5x5 de inteiros: m

    saídas de dados:
        matriz original
        matriz transposta

    processamento:
        declarar variáveis:
            int i, j, m[5][5]
  
        mostrar mensagem "Le valores inteiros para uma matriz 5x5 e exibe ela de forma transposta"

        mostrar mensagem "Digite o valor da linha i coluna j:" para preencher a matriz m
        para i de 0 até 4:
            para j de 0 até 4:
                ler m[i][j]
    
        mostrar mensagem "Matriz de forma original"
        para i de 0 até 4:
            para j de 0 até 4:
                mostrar mensagem m[i][j]
            mostrar mensagem "\n"
    
        mostrar mensagem "Matriz transposta"
        para j de 0 até 4:
            para i de 0 até 4:
                mostrar mensagem m[i][j]
            mostrar mensagem "\n"
    fimalg
*/

int main(void) 
{
    int m[5][5], i, j;

    printf("\nLe valores inteiros para uma matriz 5x5 e exibe ela de forma transposta");

    // Leitura da matriz
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("\nDigite o valor da linha %d coluna %d: ", i, j); 
            scanf("%d", &m[i][j]);
        }
    }

    // Exibindo a matriz original
    printf("\nMatriz de forma original\n"); // Linha x coluna
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    // Exibindo a matriz transposta
    printf("\nMatriz transposta\n"); // Coluna x linha
    for(j = 0; j < 5; j++) {
        for(i = 0; i < 5; i++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}