#include <stdio.h>
#include <stdlib.h>

typedef struct { 
    int info;
    struct Lista *prox;
} Lista;

Lista* inicializa();
Lista* inserirIni(Lista *l, int v);
void impLista(Lista* l);

int main (void){
	Lista *l1, *aux;
	
	l1 = inicializa();
	
	l1 = inserirIni(l1, 3);
	l1 = inserirIni(l1, 2);
	l1 = inserirIni(l1, 1);
	
	aux = l1;
	impLista(l1);
	
	return 0;
}

Lista* inicializa(){
	return NULL;
}

Lista* inserirIni(Lista *l, int v){
	Lista *novo;
	novo = (Lista*)malloc(sizeof(Lista));
	novo->info = v;
	novo->prox = l;
	return novo;
}

void impLista(Lista* l){
	Lista *aux = l;
	while(aux != NULL){
		printf("%d -> ", aux->info);
		aux  = aux->prox;
	}
}