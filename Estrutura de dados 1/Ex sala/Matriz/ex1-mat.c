#include <stdio.h>
#include <stdlib.h>

/*
1- Fazer um programa que dada uma matriz, apresente a sua transposta. Solicite ao
usuário a dimensão da matriz e faça a alocação dinâmica representada por um vetor de ponteiros
*/

int **aloca_mat_l(int tam_l, int tam_c);

int main(void){
    int **mat, **mat_t, lin, col, i, j;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &lin);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &col);
    
    mat = aloca_mat_l(lin, col);
    
    printf("\nDigite os elementos da matriz:\n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("mat[%d][%d]: ",i , j);
            scanf("%d", &mat[i][j]);
        }        
    }
    
    printf("Matriz original:\n");
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("%d ", mat[i][j]);
        }    
        printf("\n");
    }

    mat_t = aloca_mat_l(col, lin);

    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            mat_t[j][i] = mat[i][j];
        }
    }

    printf("Matriz transposta:\n");
    for(i = 0; i < col; i++){
        for(j = 0; j < lin; j++){
            printf("%d ", mat_t[i][j]);
        }    
        printf("\n");    
    }

    for(i = 0; i < lin; i++){
        free(mat[i]);
    }
    free(mat);
    
    for(i = 0; i < col; i++){
        free(mat_t[i]);
    }
    free(mat_t);
    
    return 0;
}

int **aloca_mat_l(int tam_l, int tam_c){
    int **mat, i;

    mat = (int**)malloc(sizeof(int*) * tam_l);
    for(i = 0; i < tam_l; i++) {
        mat[i] = (int*)malloc(sizeof(int) * tam_c);
    }
    return mat;
}