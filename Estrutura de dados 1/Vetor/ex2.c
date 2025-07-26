#include <stdio.h>
#include <stdlib.h>

int* cria_v(int tam);
void preenche_v(int *vet_p, int tam);
void imprime_v(int *vet_p, int tam);

int main(){
    int *vet_int, tam;

	printf("\nQual o tamanho do vetor: ");
    scanf("%d", &tam);

    vet_int = cria_v((int) &tam);  
    preenche_v(vet_int, tam); 
    imprime_v(vet_int, tam);  

    free(vet_int);  
    return 0;
}

int* cria_v(int tam){
    return (int*)malloc(sizeof(int) * tam);  
}

void preenche_v(int *vet_p, int tam){
	int i;
	
    for(i = 0; i < tam; i++){
        printf("Qual o valor da posicao %d: ", i);
        scanf("%d", &vet_p[i]);
    }
}

void imprime_v(int *vet_p, int tam){
	int i;
	
    printf("\nValores do vetor:\n\n");
    for(i = 0; i < tam; i++){
        printf("Posicao %d: %d\n", i, vet_p[i]);
    }
}

