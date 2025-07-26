#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/*
4. Impressão Reversa de String Usando Ponteiros
Crie um programa com uma função que imprima uma string ao contrário usando ponteiros. 
*/

char* aloca_v(int tam);
void imp_string(char *vet, int tam);

int main(void){
    char *vet;

    vet = aloca_v(9); 
    strcpy(vet, "ponteiro");

    imp_string(vet, 9);

    return 0;
}

char* aloca_v(int tam){
    return (char*) malloc(sizeof(char) * tam);
}

void imp_string(char *vet, int tam){
    printf("\nString ao contrario: ");
    for(int i = tam - 1; i >= 0; i--){
        printf("%c", *(vet + i)); 
    }
    printf("\n");
}