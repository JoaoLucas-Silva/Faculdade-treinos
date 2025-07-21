#include <stdio.h>

#define N 10

/*
    João Lucas Silva de Souza
    RA: 2649250
*/

/*
    entradas de dados:
        matriz 10 x 10 de inteiros: matriz

    saídas de dados:
        matriz preenchida

    processamento:
        declarar variáveis:
            int i, j
            int matriz[10][10]

        para i de 0 até 9 faça
            para j de 0 até 9 faça
                se i < j então
                    matriz[i][j] = 2 * i + 7 * j - 2
                senão se i = j então
                    matriz[i][j] = 3 * i * i - 1
                senão
                    matriz[i][j] = 4 * i * i * i - 5 * j * j + 1
                fim se
            fim para
        fim para

        mostrar mensagem "Matriz:"
        para i de 0 até 9 faça
            para j de 0 até 9 faça
                mostrar mensagem matriz[i][j]
            fim para
            mostrar mensagem "\n"
        fim para
fimalg

*/

int main() {
    int matriz[N][N];
    
    // Preencher a matriz com base nas condições dadas
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i < j) {
                matriz[i][j] = 2 * i + 7 * j - 2;
            } else if (i == j) {
                matriz[i][j] = 3 * i * i - 1;
            } else {
                matriz[i][j] = 4 * i * i * i - 5 * j * j + 1;
            }
        }
    }

    // Imprimir a matriz
    printf("Matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
