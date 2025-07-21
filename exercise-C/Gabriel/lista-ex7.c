#include <stdio.h>
#include <stdlib.h>

#define LINHAS 8
#define COLUNAS 8

/*
    João Lucas Silva de Souza
    RA: 2649250
*/

/*
    entradas de dados:
        matriz 8x8 de inteiros: tabuleiro

    saídas de dados:
        soma total entre peoes e bispos
        quantidade de posicoes com ausencia de pecas
        quantidade de cada tipo de peça

    processamento:
        declarar variáveis:
            int i, j
            int soma_peoes_bispos = 0
            int posicoes_ausencia = 0
            int cont_peoes = 0
            int cont_cavalos = 0
            int cont_torres = 0
            int cont_bispos = 0
            int cont_reis = 0
            int cont_rainhas = 0
            int tabuleiro[8][8] = {
                {1, 3, 0, 5, 4, 0, 2, 1},
                {1, 0, 1, 0, 0, 1, 0, 0},
                {0, 0, 0, 0, 1, 0, 6, 0},
                {1, 0, 0, 1, 1, 0, 0, 1},
                {0, 1, 0, 4, 0, 0, 1, 0},
                {0, 0, 3, 1, 0, 0, 1, 1},
                {1, 0, 6, 6, 0, 0, 1, 0},
                {1, 0, 5, 0, 1, 1, 0, 6}
            }
    
        mostrar mensagem "Calculando a soma total entre peoes e bispos e a quantidade de posicoes com ausencia de pecas"

        para i de 0 até 7 faça
            para j de 0 até 7 faça
                inteiro valor = tabuleiro[i][j]
                escolha valor
                    caso 1:
                        cont_peoes = cont_peoes + 1
                        soma_peoes_bispos = soma_peoes_bispos + valor
                    caso 2:
                        cont_cavalos = cont_cavalos + 1
                    caso 3:
                        cont_torres = cont_torres + 1
                    caso 4:
                        cont_bispos = cont_bispos + 1
                        soma_peoes_bispos = soma_peoes_bispos + valor
                    caso 5:
                        cont_reis = cont_reis + 1
                    caso 6:
                        cont_rainhas = cont_rainhas + 1
                    caso 0:
                        posicoes_ausencia = posicoes_ausencia + 1
                fim escolha
            fim para
        fim para

        mostrar mensagem "Soma total entre peoes e bispos: ", soma_peoes_bispos
        mostrar mensagem "Quantidade de posicoes com ausencia de pecas: ", posicoes_ausencia
        mostrar mensagem "Quantidade de cada tipo de peça:"
        mostrar mensagem "Peoes: ", cont_peoes
        mostrar mensagem "Cavalos: ", cont_cavalos
        mostrar mensagem "Torres: ", cont_torres
        mostrar mensagem "Bispos: ", cont_bispos
        mostrar mensagem "Reis: ", cont_reis
        mostrar mensagem "Rainhas: ", cont_rainhas
fimalg

*/
int main() {
    int tabuleiro[LINHAS][COLUNAS] = {
        {1, 3, 0, 5, 4, 0, 2, 1},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 6, 0},
        {1, 0, 0, 1, 1, 0, 0, 1},
        {0, 1, 0, 4, 0, 0, 1, 0},
        {0, 0, 3, 1, 0, 0, 1, 1},
        {1, 0, 6, 6, 0, 0, 1, 0},
        {1, 0, 5, 0, 1, 1, 0, 6}
    };

    int soma_peoes_bispos = 0;
    int posicoes_ausencia = 0;
    int cont_peoes = 0, cont_cavalos = 0, cont_torres = 0;
    int cont_bispos = 0, cont_reis = 0, cont_rainhas = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            int valor = tabuleiro[i][j];
            switch (valor) {
                case 1:
                    cont_peoes++;
                    soma_peoes_bispos += valor;
                    break;
                case 2:
                    cont_cavalos++;
                    break;
                case 3:
                    cont_torres++;
                    break;
                case 4:
                    cont_bispos++;
                    soma_peoes_bispos += valor;
                    break;
                case 5:
                    cont_reis++;
                    break;
                case 6:
                    cont_rainhas++;
                    break;
                case 0:
                    posicoes_ausencia++;
                    break;
            }
        }
    }

    printf("Soma total entre peoes e bispos: %d\n", soma_peoes_bispos);
    printf("Quantidade de posicoes com ausencia de pecas: %d\n", posicoes_ausencia);
    printf("Quantidade de cada tipo de peca:\n");
    printf("Peoes: %d\n", cont_peoes);
    printf("Cavalos: %d\n", cont_cavalos);
    printf("Torres: %d\n", cont_torres);
    printf("Bispos: %d\n", cont_bispos);
    printf("Reis: %d\n", cont_reis);
    printf("Rainhas: %d\n", cont_rainhas);

    system("pause");

    return 0;
}
