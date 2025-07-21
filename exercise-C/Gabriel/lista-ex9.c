#include <stdio.h>

#define N 6

/*
    João Lucas Silva de Souza
    RA: 2649250
*/

/*
    Questão 09 - Os incas construíam pirâmides de base quadrada nas quais a única forma de se atingir o topo
    era seguir em espiral pela borda, que acabava formando uma rampa em espiral. Uma “matriz inca” é uma
    matriz quadrada NxN de números inteiros na qual, partindo do canto superior esquerdo, no sentido
    horário, em espiral, a posição seguinte na ordem é o inteiro consecutivo da posição anterior.
    Por exemplo, as matrizes abaixo são incas:
    1 2 3 4
    12 13 14 5
    11 16 15 6
    10 9 8 7
    1 2 3
    8 9 4
    7 6 5
    Escreva um programa que gera uma matriz quadrada 6x6 e a preenche de forma a gerar uma “matriz
    inca”. A solução escrita deve funcionar para qualquer matriz quadrada, com tamanho a partir de 3x3.

    entradas de dados:
        matriz N x N de inteiros: matriz

    saídas de dados:
        matriz inca preenchida

    processamento:
        declarar variáveis:
            int valor = 1
            int inicio = 0
            int fim = N - 1
            int matriz[N][N]

        enquanto inicio <= fim façar
            para i de inicio até fim faça
                matriz[inicio][i] = valor
                valor = valor + 1
        fim para
            para i de inicio + 1 até fim faça
                matriz[i][fim] = valor
                valor = valor + 1
        fim para
            para i de fim - 1 até inicio faça
                matriz[fim][i] = valor
                valor = valor + 1
        fim para
            para i de fim - 1 até inicio + 1 faça
                matriz[i][inicio] = valor
                valor = valor + 1
        fim para
            inicio = inicio + 1
            fim = fim - 1
        fim enquanto

        mostrar mensagem "Matriz Inca:"
        para i de 0 até N - 1 faça
            para j de 0 até N - 1 faça
                mostrar mensagem matriz[i][j]
            fim para
            mostrar mensagem "\n"
        fim para
fimalg

*/

int main() {
    int matriz[N][N];
    int valor = 1;
    int inicio = 0, fim = N - 1;
    
    // Preencher a matriz em espiral
    while (inicio <= fim) {
        // Preencher a linha superior
        for (int i = inicio; i <= fim; i++) {
            matriz[inicio][i] = valor++;
        }
        // Preencher a coluna direita
        for (int i = inicio + 1; i <= fim; i++) {
            matriz[i][fim] = valor++;
        }
        // Preencher a linha inferior
        for (int i = fim - 1; i >= inicio; i--) {
            matriz[fim][i] = valor++;
        }
        // Preencher a coluna esquerda
        for (int i = fim - 1; i > inicio; i--) {
            matriz[i][inicio] = valor++;
        }
        inicio++;
        fim--;
    }

    // Exibir a matriz
    printf("Matriz Inca:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
