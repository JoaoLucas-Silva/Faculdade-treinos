/*
Variável
--------

UM espaço de memória, que armazena UM valor de
um determinado tipo, a cada instante da execução
de um programa.

declaração:
-----------

int idade;
float valor;
char nome[50];

entradas de dados:
------------------
	scanf("%d",&idade);

saídas de dados:
----------------
	printf("\nIdade %d",idade);

atribuição:
-----------
	soma = soma + idade;


==============================================

VETOR
-----

Conjunto de valores, de um mesmo tipo, armazenados
sob um mesmo nome, sendo que cada valor é referenciado
por um índice que indica sua posição no conjunto,

Um vetor é uma variável indexada homogênea unidimensional.

declaração:
-----------

<tipo de dados> <nome da variável>[dimensão];

dimensão = quantidade de elementos do vetor/
					 tamanho do vetor

int contas[5];

declara um vetor chamado contas, que pode
armazenar até 5 valores inteiros distintos.

			    0 		1     2     3     4
       +-----+-----+-----+-----+-----+
contas |     |     |     |     |     |
       +-----+-----+-----+-----+-----+

Em linguagem C o índice sempre começa em 0.

como acessar um vetor:
----------------------

estático:
	scanf("%d",&contas[0]);
	scanf("%d",&contas[1]);
	scanf("%d",&contas[2]);
	scanf("%d",&contas[3]);
	scanf("%d",&contas[4]);

dinâmico:
	for(i = 0;i < 5;i = i + 1)
		scanf("%d",&contas[i]);


==============================================

MATRIZ
------

Conjunto de valores, de um mesmo tipo, armazenados
sob um mesmo nome, sendo que cada valor é referenciado
por um índice PARA CADA UMA DE SUAS DIMENSÕES, que indicam
sua posição no conjunto.

Uma matriz é uma variável indexada homogênea multidimensional.

declaração:
-----------

<tipo de dados> <nome da variável>[dimensão LINHAS][dimensão COLUNAS];

dimensão = quantidade de elementos de cada LINHA e de cada COLUNA

int valores[5][5];

declara um vetor chamado contas, que pode
armazenar até 5 valores inteiros distintos.

			     0 		 1     2     3     4
        +-----+-----+-----+-----+-----+
			0 |     |     |     |     |     |
        +-----+-----+-----+-----+-----+
			1 |     |     |     |     |     |
        +-----+-----+-----+-----+-----+
			2 |     |     |     |     |     |
        +-----+-----+-----+-----+-----+
			3 |     |     |     |     |     |
        +-----+-----+-----+-----+-----+
			4 |     |     |     |     |     |
        +-----+-----+-----+-----+-----+

Em linguagem C o índice sempre começa em 0.

como acessar um vetor:
----------------------

estático:
	scanf("%d",&valores[0][0]);
	scanf("%d",&valores[1][1]);
	scanf("%d",&valores[2][2]);
	scanf("%d",&valores[3][3]);
	scanf("%d",&valores[4][4]);

dinâmico:
	for(i = 0;i < 5;i = i + 1)
		for(j = 0;j < 5;j = j + 1)
			scanf("%d",&valores[i][j]);

*/
/* ============= EXEMPLO =============

Obtenha valores para uma matriz 5x5.
E mostre:
a média destes valores,
o maior valor
o menor valor.
*/
#define L 5
#define C 5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int valores[L][C], maior, menor, soma, i, j, a, b, aux;

	srand(time(NULL)); //gera uma semente para os números randômicos

	/*
	//entrada de dados pelo usuário
		for(i = 0; i < L; i = i + 1)
			for(j = 0;j < C; j = j + 1)
			{
				printf("\nDigite um valor para a posicao [%d][%d] da matriz: ",i,j);
				scanf("%d",&valores[i][j]);
			}
	*/
//entrada de dados randômica
	for(i = 0; i < L; i = i + 1)
		for(j = 0; j < C; j = j + 1)
			valores[i][j] = rand() / 100 + 1; //rand() gera um inteiro entre 0 e 32767

	printf("\nMatriz original\n");
	for(i = 0; i < L; i = i + 1)
		{
			for(j = 0; j < C; j = j + 1)
				printf("%4d",valores[i][j]);
			printf("\n");
		}

	soma = 0;
	maior = valores[0][0];
	menor = valores[0][0];
	for(i = 0; i < L; i = i + 1)
		for(j = 0; j < C; j = j + 1)
			{
				soma = soma + valores[i][j];
				if(valores[i][j] > maior)
					maior = valores[i][j];
				if(valores[i][j] < menor)
					menor = valores[i][j];
			}

	printf("\nMaior valor %d",maior);
	printf("\nMenor valor %d",menor);
	printf("\nMedia %0.2f",(float)soma/(L+C));

//----------------------------------------
//ordenação da matriz pelo método da bolha
//----------------------------------------
	for(i = 0; i < L; i++)
		for(j = 0; j < C; j++)
			for(a = 0; a < L; a++)
				for(b = 0; b < C; b++)
					if (valores[i][j] < valores[a][b])
						{
							aux = valores[i][j];
							valores[i][j] = valores[a][b];
							valores[a][b] = aux;
						}

	printf("\n\nMatriz ordenada\n");
	for(i = 0; i < L; i = i + 1)
		{
			for(j = 0; j < C; j = j + 1)
				printf("%4d",valores[i][j]);
			printf("\n");
		}

	return 0;
}
