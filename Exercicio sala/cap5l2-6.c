#include <stdio.h>
#include <math.h>

int main(void) // Funcao principal
{
    double v[3] = {1.1, 2.2, 3.3}; // Declaracao de um vetor de doubles com 3 elementos
    double *pv = v, *pv2; // Ponteiro pv apontando para o vetor v e ponteiro pv2 nao inicializado

    printf("O endereco do vetor v e %p\n", v); // Exibe o endereco do vetor v em formato hexadecimal
    printf("O endereco do vetor v e %ld\n", (long int) v); // Exibe o endereco do vetor v em formato decimal
    printf("O ponteiro *pv aponta para o endereco %p\n", pv); // Exibe o endereco para o qual pv aponta (hexadecimal)
    printf("O ponteiro *pv aponta para o endereco %ld\n", (long int) pv); // Exibe o endereco em formato decimal
    printf("O endereco de *pv e %ld\n", (long int) &pv); // Exibe o endereco do ponteiro pv em formato decimal
    printf("O valor apontado por *pv e %f\n", *pv); // Exibe o valor do primeiro elemento do vetor (1.1)

    pv++; // Incrementa o ponteiro pv para apontar para o proximo elemento do vetor
    printf("O endereco de *pv e %ld\n", (long int) &pv); // Exibe o endereco do ponteiro pv em formato decimal
    printf("O ponteiro *pv aponta para o endereco %ld\n", (long int) pv); // Exibe o endereco do segundo elemento do vetor
    printf("O valor apontado por *pv e %f\n", *pv); // Exibe o valor do segundo elemento do vetor (2.2)

    printf("O ponteiro caminhou %ld bytes\n", sizeof(double)); // Exibe o tamanho em bytes de um double (8 bytes)

    pv2 = pv + 2; // Faz pv2 apontar para o terceiro elemento do vetor
    printf("O valor apontado por *pv2 e %f\n", *pv2); // Exibe o valor do terceiro elemento do vetor (3.3)
    printf("A diferenca entre pv2 e pv e %ld double\n", pv2 - pv); // Exibe a diferenca entre os ponteiros (2)

    pv2--; // Decrementa pv2 para apontar para o segundo elemento do vetor
    printf("O valor apontado por *pv2 e %f\n", *pv2); // Exibe o valor do segundo elemento do vetor (2.2)

    // Compara os ponteiros pv2 e pv para verificar suas posicoes
    if (pv2 < pv) 
        printf("pv2 esta a esquerda de pv\n"); // pv2 esta antes de pv
    else 
        printf("pv2 esta a direita de pv\n"); // pv2 esta depois de pv
}
