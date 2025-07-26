#include <stdio.h>
#include <stdlib.h>

// Aloco uma matriz dinamica de inteiros com as medidas dada pelo usuario e depois exibir sua transposta

int** alocaMat(int lin, int col);

int main(void){

    int **matriz, **matriz_t, i, j, linha, coluna, valor = 0;

    printf("\nDigite o tamanho da linha da matriz: ");
    scanf("%d", &linha);
    
    printf("\nDigite o tamanho da coluna da matriz: ");
    scanf("%d", &coluna);

    matriz = alocaMat(linha, coluna);

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            matriz[i][j] = valor;
            valor++;
        }
    }

    printf("\nMatriz original:\n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    matriz_t = alocaMat(linha, coluna);

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            matriz_t[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz transposta:\n");
    for(j = 0; j < linha; j++){
        for(i = 0; i < coluna; i++){
            printf("%d ", matriz_t[j][i]);
        }
        printf("\n");
    }

    return 0;
}

int** alocaMat(int lin, int col){

    int **mat, i;

    mat = (int**)malloc(sizeof(int*) * lin);

    for(i = 0; i < lin; i++){
        mat[i] = (int*)malloc(sizeof(int) * col);
    }

    return mat;
}