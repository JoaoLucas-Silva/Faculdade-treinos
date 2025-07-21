#include <stdio.h>
#include <stdlib.h>

/*
1- Fazer um programa que dada uma matriz, apresente a sua transposta. Solicite ao
usuário a dimensão da matriz e faça a alocação dinâmica representada por um vetor de ponteiros
*/

// Funções para alocar a matriz
int** aloca_mat_l(int tam_l, int tam_c);

int main(void){
    int **mat, **mat_t, lin, col, i, j;
    
    // Solicita o número de linhas e colunas
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &lin);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &col);
    
    // Aloca a matriz original
    mat = aloca_mat_l(lin, col);
    
    // Preenche a matriz original
    printf("\nDigite os elementos da matriz:\n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("mat[%d][%d]: ",i , j);
            scanf("%d", &mat[i][j]);
        }        
    }
    
    // Imprime a matriz original
    printf("Matriz original:\n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d ", mat[i][j]);
        }    
        printf("\n");
    }
    
    // Aloca a matriz transposta (linhas da transposta serão as colunas da original)
    mat_t = aloca_mat_l(col, lin);  // A transposta troca linhas e colunas
    
    // Realiza a transposição
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            mat_t[j][i] = mat[i][j];  // Transposição: mat_t[j][i] recebe mat[i][j]
        }
    }

    // Imprime a matriz transposta
    printf("Matriz transposta:\n");
    for(i = 0; i < col; i++) {
        for(j = 0; j < lin; j++) {
            printf("%d ", mat_t[i][j]);
        }    
        printf("\n");    
    }

    // Libera a memória alocada para as matrizes
    for(i = 0; i < lin; i++) {
        free(mat[i]);
    }
    free(mat);
    
    for(i = 0; i < col; i++) {
        free(mat_t[i]);
    }
    free(mat_t);
    
    return 0;
}

// Função para alocar memória para a matriz de tamanho tam_l x tam_c
int** aloca_mat_l(int tam_l, int tam_c) {
    int** mat, i;

    mat = (int**)malloc(sizeof(int*) * tam_l);  // Aloca memória para as linhas
    for(i = 0; i < tam_l; i++) {
        mat[i] = (int*)malloc(sizeof(int) * tam_c);  // Aloca memória para as colunas
    }
    return mat;
}