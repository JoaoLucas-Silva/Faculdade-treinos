#include <stdio.h>
#include<stdlib.h>

int main(void){
	
	int **mat, lin = 3, col = 3, i, j;
	
	mat = (int**)malloc(sizeof(int*) * lin);
	
	for(i = 0; i < lin; i++){
		mat[i] = (int*)malloc(sizeof(int)* col);
	}
	
	for(i = 0; i < lin; i++){
		for(j = 0; j < lin; j++){
			printf("\nmat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i = 0; i < lin; i++){
		for(j = 0; j < lin; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
