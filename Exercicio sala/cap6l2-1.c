#include <stdio.h>
#include <math.h>
#define N 4 // Define N como 4

// Funcao que calcula minimo, maximo e norma de um vetor
void teste(double x[N], double saida[3]) 
{
    double max = x[0], norma = 0, min = x[0]; // Inicializa max e min com o primeiro elemento
    int i;

    for (i = 0; i < N; i++) // Loop para percorrer todos os elementos do vetor
    {
        norma += x[i] * x[i]; // Calcula a norma (soma dos quadrados dos elementos)
        if (max < x[i]) max = x[i]; // Atualiza o maximo se x[i] for maior
        if (min > x[i]) min = x[i]; // Atualiza o minimo se x[i] for menor
    }

    saida[0] = min; // Atribui o minimo ao vetor de saida
    saida[1] = max; // Atribui o maximo ao vetor de saida
    saida[2] = sqrt(norma); // Calcula a raiz quadrada da norma e atribui ao vetor de saida
    return; // Retorna da funcao (opcional)
}

int main(void) // Funcao principal
{
    double a[N] = {1, -2, 3, 4}, saida[3]; // Inicializa vetor a e vetor saida

    teste(a, saida); // Chama a funcao teste passando a e saida
    printf("minimo=%f, maximo=%f, norma=%f\n", saida[0], saida[1], saida[2]); // Exibe os resultados
}
