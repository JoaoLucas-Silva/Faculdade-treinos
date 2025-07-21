#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Questão 04: Elabore um programa em linguagem C que receba um vetor A de dez elementos inteiros. Esse
programa deve calcular o fatorial de cada elemento de A e armazená-los em um vetor B. O programa deve
mostrar o vetor A e o vetor B ao seu final.
*/

int main(void)
{
    int v_a[10], v_b[10], i, j, fat; // Arrumar, perguntar pro professor sobre a funcao long long
    
    srand(time(NULL));

    for(i = 0; i < 10; i++)
    {
        v_a[i] = rand() / 10000;
    }

    
    
    return 0;
}