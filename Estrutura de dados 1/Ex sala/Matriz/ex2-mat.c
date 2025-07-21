#include <stdio.h>
#include <stdlib.h>

int **aloca_mat_1(int tam_l, int tam_c);

int main(void){
    int **mat_1, **mat_2, **mat_3, lin1, col1, lin2, col2, i, j, k;

    printf("Digite o numero de linhas da matriz 1: ");
    scanf("%d", &lin1);
    printf("Digite o numero de colunas da matriz 1: ");
    scanf("%d", &col1);
    
    mat_1 = aloca_mat_1(lin1, col1);

    printf("Digite o numero de linhas da matriz 2: ");
    scanf("%d", &lin2);
    printf("Digite o numero de colunas da matriz 2: ");
    scanf("%d", &col2);
    
    if (col1 != lin2){
        printf("Multiplicacao nao pode ser realizada: colunas da matriz 1 sao diferentes das linhas da matriz 2.\n");
        return 0;
    }

    mat_2 = aloca_mat_1(lin2, col2);

    printf("\nDigite os elementos da matriz 1:\n");
    for(i = 0; i < lin1; i++){
        for(j = 0; j < col1; j++){
            printf("mat[%d][%d]: ", i , j);
            scanf("%d", &mat_1[i][j]);
        }        
    }
    
    printf("\nDigite os elementos da matriz 2:\n");
    for(i = 0; i < lin2; i++){
        for(j = 0; j < col2; j++){
            printf("mat[%d][%d]: ", i , j);
            scanf("%d", &mat_2[i][j]);
        }        
    }

    mat_3 = aloca_mat_1(lin1, col2);

    for(i = 0; i < lin1; i++){
        for(j = 0; j < col2; j++){
            mat_3[i][j] = 0;
            for(k = 0; k < col1; k++){
                mat_3[i][j] += mat_1[i][k] * mat_2[k][j];
            }
        }        
    }

    printf("\nMatriz 1:\n");
    for(i = 0; i < lin1; i++) {
        for(j = 0; j < col1; j++) {
            printf("%d ", mat_1[i][j]);
        }
        printf("\n");        
    }

    printf("\nMatriz 2:\n");
    for(i = 0; i < lin2; i++) {
        for(j = 0; j < col2; j++) {
            printf("%d ", mat_2[i][j]);
        }
        printf("\n");        
    }

    printf("\nMatriz 3:\n");
    for(i = 0; i < lin1; i++) {
        for(j = 0; j < col2; j++) {
            printf("%d ", mat_3[i][j]);
        }
        printf("\n");        
    }

    for(i = 0; i < lin1; i++){
        free(mat_1[i]);
    }
    free(mat_1);

    for(i = 0; i < lin2; i++){
        free(mat_2[i]);
    }
    free(mat_2);

    for(i = 0; i < lin1; i++){
        free(mat_3[i]);
    }
    free(mat_3);

    return 0;
}

int **aloca_mat_1(int tam_l, int tam_c) {
    int **mat, i;
    mat = (int**)malloc(sizeof(int*) * tam_l);
    for(i = 0; i < tam_l; i++) {
        mat[i] = (int*)malloc(sizeof(int) * tam_c);
    }
    return mat;
}