#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <time.h>

/*
Questão 03: Obter somente valores inteiros, positivos e ímpares para um vetor com dimensão 20 e:
a) Mostrar o vetor original;
b) Mostrar quantos números múltiplos de 5 existem no vetor, e quais são;
c) Mostrar somente os números que estão nas posições pares do vetor;
d) Trocar cada um dos números que estão nas posições ímpares do vetor pela soma de todos os números
múltiplos de 3 do vetor;
e) Mostrar o vetor final.
*/

int main (void)
{
    int v[20], i, aux, qtd5, soma;

    srand(time(NULL));
    for(i = 0; i <20; i++)
    {
        do
        {
            aux = rand() / 1000;   
        }   
        while(aux % 2 == 0); //Atribui o valor a variavel aux ate que seja impar
        v[i] = aux;
    }

    printf("\nVetor original\n");
    for(i = 0; i <20; i++)
    {
        printf("%d ", v[i]);
    }

    for(i = 0, qtd5 = 0; i < 20; i++)
    {
        if(v[i] % 5 == 0)
            qtd5 = qtd5 + 1; //Recebe sempre 1 quando o valor for multiplo de 5

    }printf("\n\nHa %d numeros multiplos de 5 no vetor", qtd5);

    printf("\nEsses sao os numeros multiplos de 5 no vetor");
    for(i = 0; i < 20; i++)
    {
        if(v[i] % 5 == 0)
        printf(" %d", v[i]);
    }

    printf("\n\nNumeros nas posicoes pares do vetor");
    for(i = 0; i < 20; i = i + 2)
    {
        printf(" %d", v[i]);
    }

    soma = 0; //Inicia em 0 para receber o valor que for multiplo de 3
    for(i = 0; i < 20; i++)
    {
        if(v[i] % 3 == 0)
            soma = soma + v[i]; //Soma  dos numeros multiplos de 3 no vetor
    }

    for(i = 1;i < 20;i = i + 2) //Inicia o indice em 1 para adicionaor + 2 e percorrer as posicoes impares
        v[i] = soma; //Atribuindo valor da soma a cada posicao impar do vetor

    printf("\n\nVetor final\n");   
    for(i = 0; i < 20; i++)
        printf("%d ", v[i]);
     
     
    return 0;
}