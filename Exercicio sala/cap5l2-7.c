#include <stdio.h>
#include <math.h>

int main(void) // Funcao principal
{
    double a[4] = {1, 2, 3, 4}; // Declaracao de um vetor de doubles com 4 elementos
    double *p = a; // Ponteiro p apontando para o vetor a

    printf("O terceiro numero e %f\n", a[2]); // Acesso normal ao terceiro elemento do vetor (3)
    printf("O terceiro numero e %f\n", *(a + 2)); // Acesso via endereco (3)
    printf("O terceiro numero e %f\n", *(p + 2)); // Acesso via ponteiro (3)
    printf("O terceiro numero e %f\n", p[2]); // Acesso via ponteiro (3)
}
