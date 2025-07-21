#include <stdio.h>
#include <stdlib.h>

/*
4. Impressão Reversa de Vetor Usando Ponteiros
Crie um programa com uma função que imprima uma Vetor ao contrário usando ponteiros.

É somente um teste do programa ex4 pois pra string funciona sem ser "tam - 1" visto que o caractere a mais que acessa 
seria o "\0", e aqui por ser inteiro da erro
*/

int* aloca_v(int tam);
void imp_vetor(int *vet, int tam);

int main(void){
    int *vet, i;

    vet = aloca_v(5); 
    
    for(i = 0; i < 5; i++){
        vet[i] = i;
    }

    imp_vetor(vet, 5);

    return 0;
}

int* aloca_v(int tam){
    return (int*) malloc(sizeof(int) * tam);
}

void imp_vetor(int *vet, int tam){
    printf("\nVetor ao contrario: ");
    for(int i = tam - 1; i >= 0; i--){
        printf("%d ", *(vet + i)); 
    }
    printf("\n");
}