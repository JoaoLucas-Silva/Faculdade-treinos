#include <stdio.h>
#include <math.h>

/*
    João Lucas Silva de Souza
    RA: 2649250
*/

/*
    Questão 01 - Faça um programa que dado o vetor {2,4,35,50,23,17,9,2,27,5} mostre:
    a. O maior valor;
    b. A média dos valores;
    c. Os valores dispostos em ordem crescente;
    d. O subconjunto de valores primos que está contido no vetor.

    
    entradas de dados:
        iniciar o vetor com 10 valores fixos: {2,4,35,50,23,17,9,2,27,5}

    saídas de dados:
        o maior valor;
        a média dos valores;
        os valores dispostos em ordem crescente;
        o subconjunto de valores primos que está contido no vetor.  

    processamento:
        declarar variáveis: 
        int i, j, cont, maior, soma, aux
        float media
  
    mostrar mensagem vetor original:
        para cada elemento no vetor (i de 0 a 9):
            mostrar mensagem do valor do elemento

    inicializar a variável maior com o primeiro elemento do vetor
        para cada elemento restante no vetor (i de 1 a 9):
            se o elemento atual for maior que a variável maior:
                atualizar o valor de maior
    mostrar mensagem do maior valor encontrado

    inicializar soma com 0
        para cada elemento no vetor (i de 0 a 9):
            somar o elemento à variável soma
    calcular a média dividindo soma por 10
    mostrar mensagem da média dos elementos do vetor

    ordenar o vetor em ordem crescente usando o método da bolha:
    para cada elemento até o penúltimo (i de 0 a 8):
        para cada elemento até o último menos as posições já ordenadas (j de 0 a 9-i-1):
            se o elemento atual for maior que o próximo:
                trocar os dois elementos
    mostrar mensagem do vetor ordenado em ordem crescente

    encontrar e mostrar mensagem dos números primos no vetor:
        para cada elemento no vetor (i de 0 a 9):
        inicializar cont com 0
            para cada número de 1 até o valor do elemento (j de 1 até v[i]):
                se o elemento for divisível pelo número atual:
                    incrementar cont
    se cont for igual a 2:
        mostrar mensagem dos elementos que sao primo
    fimalg
*/

int main(void)
{
    int v[10] = {2,4,35,50,23,17,9,2,27,5}, i, maior, soma, j, aux, cont;
    float media;

    printf("\nVetor"); // Exibe primeiramente o vetor
    for(i = 0; i < 10; i++)
        printf(" %d", v[i]);

    maior = v[0]; // Inicia no primeiro valor do vetor para comparar com o restante
    for(i = 1; i < 10; i++)
        if(v[i] > maior)
            maior = v[i];
    printf("\nO maior valor do vetor e %d ", maior);

    soma = 0;
    for(i = 0; i < 10; i++)
        soma += v[i];
    media = (float)soma / 10; // Soma todos os valores do vetor e divide pela quantidade de elementos do mesmo
    printf("\nA media dos elementos do vetor e de %0.2f ", media);

    // Organização do vetor em ordem crescete com o método da bolha
    for(i = 0; i < 10 - 1; i++) {
        for(j = 0; j < 10 - i - 1; j++) { 
            if(v[j] > v[j + 1]) {
                // Troca os elementos
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    printf("\nVetor ordenado em ordem crescente: ");
    for(i = 0; i < 10; i++)
        printf(" %d", v[i]);
    
    // Subconjunto de numeros primos
    printf("\nNumeros primos contido no vetor: ");
    for(i = 0; i < 10; i++)
    {
        cont = 0;
        for(j = 1; j <= v[i]; j++){
            if(v[i] % j == 0) // Divide de 1 até o valor armazenado no vetor
                cont++; // Conta a quantidade de divisores 
        }
        if(cont == 2) // Verifica se é igual a 2 (num primo só tem 2 divisores, 1 e ele mesmo)
        {
            printf(" %d", v[i]);
        }
    }

    return 0;
}