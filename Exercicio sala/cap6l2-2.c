#include <stdio.h>
#include <math.h>
#define N 4 // Define N como 4

// Funcao que calcula minimo, maximo e norma de um vetor
void teste(double *x, double *saida) 
{
    double max = *x, norma = 0, min = *x; // Inicializa max e min com o primeiro elemento
    int i;

    for (i = 0; i < N; i++) // Loop para percorrer todos os elementos do vetor
    {
        norma += *(x + i) * *(x + i); // Calcula a norma (soma dos quadrados dos elementos)
        if (max < *(x + i)) max = *(x + i); // Atualiza o maximo se *(x + i) for maior
        if (min > *(x + i)) min = *(x + i); // Atualiza o minimo se *(x + i) for menor
    }

    *saida = min; // Atribui o minimo ao vetor de saida
    saida++; // Move o ponteiro para a proxima posicao
    *saida = max; // Atribui o maximo ao vetor de saida
    saida++; // Move o ponteiro para a proxima posicao
    *saida = sqrt(norma); // Calcula a raiz quadrada da norma e atribui ao vetor de saida
    return; // Retorna da funcao (opcional)
}

int main(void) // Funcao principal
{
    double a[N] = {1, -2, 3, 4}, saida[3]; // Inicializa vetor a e vetor saida

    teste(a, saida); // Chama a funcao teste passando a e saida
    printf("minimo=%f, maximo=%f, norma=%f\n", saida[0], saida[1], saida[2]); // Exibe os resultados
}
