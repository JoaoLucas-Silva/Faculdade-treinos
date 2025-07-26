#include <stdio.h>
#include <stdlib.h>

/*
1. Troca de Valores com Ponteiros
Crie uma função que faça a troca de valores de duas variáveis inteiras usando ponteiros. 
*/

void troca(int *a, int *b);

int main(){
	int c = 10, d = 20;
	
	troca(&c, &d);
	
	printf("\nNovo valor de c: %d, novo valor de d: %d", c, d);
	
	return 0;
}

void troca(int *a, int *b){
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
	
}
