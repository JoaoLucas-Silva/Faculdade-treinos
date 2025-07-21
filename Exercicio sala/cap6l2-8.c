#include <stdio.h>
#include <stdlib.h> // Incluindo a biblioteca stdlib.h para a função atoi

void imprime(int i) // Função recursiva para imprimir números
{
    if (i < 0) return; // Se i for negativo, retorna sem fazer nada
    imprime(i - 1); // Chama a função recursivamente com i-1
    printf("%d\n", i); // Imprime o valor de i
}

int main(int argc, char **argv) // Função principal com argumentos de linha de comando
{
    int N;
    N = atoi(argv[1]); // Converte o primeiro argumento da linha de comando para inteiro
    imprime(N); // Chama a função imprime
}
