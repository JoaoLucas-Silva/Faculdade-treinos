#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Fazer exercicio 2 3 e 5 da lista de vetores e matrizes

Percorre somente do 1 ao 18 exercicio 2
2)Obter valores para um vetor de inteiro com dimensão 20 e:
a) Trocar cada número par do vetor pelo valor que está em sua primeira posição;
b) Trocar cada número ímpar do vetor pelo valor que está em sua última posição.	

*/

int main ()
{
	int numeros[20], i;
	
	srand(time(NULL));
	i = 0;
	while (i < 20)
	{
		numeros[i] = rand() / 100 + 1;
		i = i + 1;
	}
	
	printf("\nVetor original\n");
	for(i = 0; i < 20; i = i + 1){
	printf("%d",numeros[i]);
    }
	
	for(i = 1; i < 19; i = i + 1)
	{
		if(numeros[i] % 2 == 0)
			numeros[i] = numeros[0];
		else{
			numeros [i] = numeros[19];
			}
		
		printf("\nNovo vetor\n ");
		for(i = 0; i < 20; i = i + 1){
		printf("%d", numeros[i]);
		}
	}
	
	return 0;
}