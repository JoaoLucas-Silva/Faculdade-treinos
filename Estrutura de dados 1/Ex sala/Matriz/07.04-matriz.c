#include <stdio.h>
#include <stdlib.h>

// usuário escolhe o vetor

int** aloca_mat_l(int *mat_fun, int tam_l);

int** aloca_mat_c(int *mat_fun, int tam_c);

int main(void){
	
	int **mat, lin, col, i, j;
	
	printf("\nQual o tamanho da matriz: ");
	scanf("%d%d", &lin, &col);
	
	mat = aloca_mat_l(mat, lin);
	
	for(i = 0; i < lin; i++){
		mat[i] = aloca_mat_c(mat, col);
	}
	
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("\nmat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

int** aloca_mat_l(int *mat_fun, int tam_l){
	return (int**)malloc(sizeof(int*) * tam_l);
}

int** aloca_mat_c(int *mat_fun, int tam_c){
	return (int**)malloc(sizeof(int) * tam_c);
}

int** cira_mat_t(int *mat_orig)