/*
Questão 01 - Faça um programa que dado o vetor {2,4,35,50,23,17,9,2,27,5} mostre:
    a. O maior valor;
    b. A média dos valores;
    c. Os valores dispostos em ordem crescente;
    d. O subconjunto de valores primos que está contido no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[] = {2,4,35,50,23,17,9,2,27,5}, maior, i, aux, j, troca, cont;
    float media, soma;

    printf("Vetor\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }

    maior = v[0];
    for(i = 0; i < 10; i++)
    {
        if(v[i] > maior)
        {
            maior = v[i];
        }
    }
    printf("\nO maior valor e %d", maior);

    soma = 0;
    for(i = 0; i < 10; i++)
    {
        soma = soma + v[i];
    } 
    media = soma / 10;
    printf("\nA media dos valores e %.2f", media);

    troca = 0;
    for(i = 0; i < 10 - 1; i++) 
    {
        for(j = 0; j < 10 - i - 1; j++) 
        { 
            if(v[j] > v[j + 1]) // Para ordem decrescente para trocar o maior por menor
            {
                // Troca os elementos
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                troca = 1;
            }
        }
        if(troca == 0)
        {
            printf("\nVetor ja ordenado!");
            break;
        }
    }

    if(troca == 1)
    {
        printf("\nVetor ordenado em ordem crescente: ");
        for(i = 0; i < 10; i++)
        {
            printf(" %d", v[i]);
        }
    }

    printf("\nNumeros primos contido no vetor: ");
    for(i = 0; i < 10; i++)
    {
        cont = 0;
        for(j = 1; j <= v[i]; j++)
        {
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