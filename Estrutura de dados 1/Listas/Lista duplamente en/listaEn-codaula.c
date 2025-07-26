#include<stdio.h>
#include<stdlib.h>

struct listad{
	struct listad *ant;
	int info;
	struct listad *prox;
};
typedef struct listad Listad;

Listad* inicializar();
Listad* inserirIni(Listad *l, int v);
Listad* inserirFim(Listad *l, int v);
void imprimir(Listad *l);
void imprimirRec(Listad *l);
void imprimirContrario(Listad *l);
Listad* excluir(Listad *l, int v);

int main(){
	Listad *l1;
	
	l1 = inicializar();
	
	l1 = inserirFim(l1, 6);
	l1 = inserirFim(l1, 4);
	l1 = inserirFim(l1, 2);
	
	imprimirRec(l1);
	
	printf("\n");
	
	l1 = excluir(l1, 7);
	
	printf("\n");
	
	imprimirRec(l1);
	
	printf("\n\nImpressao da lista de forma contraria:\n\n");
	imprimirContrario(l1);
	
	return 0;
}

Listad* inicializar(){
	return NULL;
}

Listad* inserirIni(Listad *l, int v){
	Listad *novo;
	novo = (Listad*)malloc(sizeof(Listad));
	novo->info = v;
	novo->ant = NULL;
	
	if(l==NULL){
		novo->prox = NULL;		
	}
	else{
		novo->prox = l;
		l->ant = novo;		
	}
	return novo;
}

Listad* inserirFim(Listad *l, int v){
	Listad *novo, *aux=l;
	novo = (Listad*)malloc(sizeof(Listad));
	novo->info = v;
	novo->prox = NULL;
	
	if(l==NULL){
		novo->ant = NULL;
		return novo;
	}
	else{
		while(aux->prox!=NULL)
			aux = aux->prox;
		
		aux->prox = novo;
		novo->ant = aux;
		
		return l;
	}
}

void imprimir(Listad *l){
	Listad *aux=l;
	
	while(aux!=NULL){
		printf("%d -> ", aux->info);
		aux = aux->prox;
	}
}

void imprimirRec(Listad *l){
	if(l!=NULL){	
		printf("%d -> ", l->info);
		imprimir(l->prox);
	}
}

void imprimirContrario(Listad *l){
	Listad *aux = l;
	while(aux != NULL && aux->prox != NULL)
		aux = aux->prox;
	while(aux != NULL){
		printf("%d -> ", aux->info);
		aux = aux->ant;
	}
}

Listad* excluir(Listad *l, int v){
	Listad *aux=l;
	
	while(aux!=NULL && aux->info!=v){
		aux = aux->prox;
	}
	
	if(aux==NULL)
		printf("\nElemento nao encontrado!\n");			
	else{
		if(aux==l){
			aux->prox->ant = NULL;
			l = aux->prox;
			free(aux);			
		}
		else{
			aux->ant->prox = aux->prox;
			if(aux->prox!=NULL)
				aux->prox->ant = aux->ant;
			free(aux);			
		}
	}
	return l;
}
