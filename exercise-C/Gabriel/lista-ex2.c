#include <stdio.h>
#include <stdlib.h>

/*
    João Lucas Silva de Souza
    RA: 2649250
*/

/*

    Questão 02 - Escreva um programa para:
    a. pedir 10 números ao usuário e armazenar esses valores em um vetor;
    b. pedir um outro número ao usuário e calcular e mostrar quantos números do vetor são inferiores a esse
    número.

    entradas de dados:
    10 números inteiros fornecidos pelo usuário para preencher um vetor
    1 número inteiro fornecido pelo usuário para comparação

    saídas de dados:
        a quantidade de números no vetor que são menores do que o número fornecido

    processamento:
        declarar variáveis: 
        int v[10], i, num, cont, quant_inf
    
        mostrar mensagem "Le 10 numeros inteiros para um vetor fornecidos pelo usuario."
        mostrar mensagem "Compara quantos sao menores que o valor fornecido depois pelo usuario."

        para cada posição do vetor (i de 0 a 9):
            mostrar mensagem "Digite um valor(inteiro) para a posicao i do vetor: "
            ler o valor fornecido pelo usuário e atribuir ao vetor na posição i

        mostrar mensagem "Digite um valor(inteiro) qualquer para efetuar a comparacao: "
        ler o valor fornecido pelo usuário e atribuir a variável num

        inicializar cont com 0
        para cada posição do vetor (i de 0 a 9):
            se o valor do vetor na posição i for menor que num:
                incrementar cont
        atribuir o valor de cont a quant_inf

        mostrar mensagem "A quantidade de numeros inferiores a num no vetor e: quant_inf"
    fimalg
*/

int main (void)
{
    int v[10], i, num, cont, quant_inf;

    printf("\nLe 10 numeros inteiros para um vetor fornecidos pelo usuario.");
    printf("\n\nCompara quantos sao menores que o valor fornecido depois pelo usuario.\n");

    for(i = 0; i < 10; i++)
    {
        printf("\nDigite um valor(inteiro) para a posicao %d do vetor: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nDigite um valor(inteiro) qualquer para efetuar a comparacao: ");
    scanf("%d", &num);

    cont = 0;
    for(i = 0; i < 10; i++)
    {
        if(v[i] < num) 
            cont++;   
    }
    quant_inf = cont;
    
    printf("\nA quantidade de numeros inferiores a %d no vetor e: %d", num, quant_inf);

    system("pause");

    return 0;
}