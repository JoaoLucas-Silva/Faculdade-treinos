#include <stdio.h>
#include <stdlib.h>

/*
3. Copiar Conteúdo de um Vetor Usando Ponteiros
Crie um programa com uma função que copie os valores de um vetor de inteiros para outro
usando ponteiros. 
*/

int* aloca_vetor(int tam);
void copia(int *v1, int *v2, int tam);

int main(void){

    int *v1, *v2, i;

    v1 = aloca_vetor(5);
    v2 = aloca_vetor(5);

    for(i = 0; i < 5; i++){
        v1[i] = i;
    }

    printf("\nVetor 1: ");
    for(i = 0; i < 5; i++){
        printf("%d ", *(v1 + i));
    }

    copia(v1, v2, 5);

    printf("\nVetor 2(copia do vetor 1): ");
    for(i = 0; i < 5; i++){
        printf("%d ", *(v2 + i));
    }

    return 0;
}

int* aloca_vetor(int tam){
    return (int*)malloc(sizeof(int) * tam);
}

void copia(int *v1, int *v2, int tam){
    int i;

    for(i = 0; i < tam; i++){
        *(v2 + i) = *(v1 + i);
    }
}