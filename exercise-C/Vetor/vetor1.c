#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
2)Obter valores para um vetor de inteiro com dimensão 20 e:
a) Trocar cada número par do vetor pelo valor que está em sua primeira posição;
b) Trocar cada número ímpar do vetor pelo valor que está em sua última posição.	

entrada de dados
    vetor, contador

saida de dados
    vetor com cada numero par trocado para primeria posicao
    vetor com cada numero impar trocado para ultima posicao

processameto
    iniciar gerador aleatorio de numeros
    iniciar contador(indice)  em 0
        enquanto contador < 20
        contador recebe contador + 1
    fimenquanto
    -mostrar vetor original
    enquanto (for) 
    indice inicia em 1-enquanto indice menor que 19-indice recebe indice + 1
    SE vetor mod 2 igual a 0
        atribuir ultimo valor ao numero par
    SENAO 
        atribuir o primeiro valor ao numero impar
    fimenquanto
    -mostrar novo vetor
*/

int main(void)
{
    int v[20], i;

    srand(time(NULL));
    i = 0;
    while(i < 20)
    {
        v[i] = rand() / 100 + 1;
        i = i + 1;
    }

    printf("\nVetor original\n");
    for(i = 0;i < 20;  i++) 
    {
        printf("%d ", v[i]);   
    }

    for(i = 1; i < 19; i++)
    {
        if(v[i] % 2 == 0)
            v[i] = v[0];
        else{
            v[i] = v[19];
        }
    }
        printf("\nNovo vetor\n");
		for(i = 0; i < 20; i = i + 1){
		printf("%d ", v[i]);
		}

    return 0;
}