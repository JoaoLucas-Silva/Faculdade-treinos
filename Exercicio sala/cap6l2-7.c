#include <stdio.h>
#include <stdlib.h> // Incluindo a biblioteca stdlib.h para a função atoi

int main(int argc, char **argv) // Função principal com argumentos de linha de comando
{
    int i, N;
    N = atoi(argv[1]); // Converte o argumento de string para inteiro
    for (i = 0; i <= N; i++) // Laço que imprime os números de 0 até N
        printf("%d\n", i); // Exibe cada número
}
