#include <stdio.h>
#include <stdlib.h>

// Lista duplamente encadeada

typedef struct ListaD{ // Struct
	struct ListaD* ant;
	int info;
	struct ListaD* prox;
}ListaD;

ListaD* inicializa();

ListaD* inserirIni(ListaD*, int v);

ListaD* inserirFim(ListaD *l, int v);

void impLista(ListaD* l);

void impListaRec(ListaD* l);

void imprimirReverso(ListaD *l);

// anterior aponta pra novo lista não vazia

int main(void){
	
	ListaD *l1;
	
	l1 = inicializa();
	l1 = inserirIni(l1, 4);
	l1 = inserirIni(l1, 3);
	l1 = inserirIni(l1, 2);
	l1 = inserirIni(l1, 1);
	l1 = inserirFim(l1, 5);
	
	impLista(l1);
	printf("\n\n");
	imprimirReverso(l1);
	
	return 0;
}

ListaD* inicializa(){
	return NULL;
}

ListaD* inserirIni(ListaD* l, int v){
	
	ListaD* novo = (ListaD*)malloc(sizeof(ListaD));
	
	novo->info = v;
	novo->ant = NULL;
	
	if(l == NULL){
		novo->prox = NULL;
	}else{
		novo->prox = l;
		l->ant = novo;
	}
	return novo;
}

ListaD* inserirFim(ListaD *l, int v){
	ListaD *novo, *aux;
	
	novo = (ListaD*)malloc(sizeof(ListaD));
	
	if(novo!=NULL){
		
		novo->info = v;
		novo->prox = NULL;
		
		if(l==NULL){
			novo->ant = NULL;		
			return novo;
			
		}else{
			
			aux = l;
			while(aux->prox!=NULL)
				aux = aux->prox;
			aux->prox = novo;
			novo->ant = aux;
			
			return l;
		}      
	}
	else{
		printf("\nErro na alocacao!");
		return l;
	}
}

void impLista(ListaD* l){
	ListaD *aux = l;
	
	while(aux != NULL){
		printf("%d -> ", aux->info);
		aux  = aux->prox;
	}
	printf("NULL");
}

void impListaRec(ListaD* l){
	
	if(l == NULL){
		return;
	}
	printf("%d -> ", l->info);
	impListaRec(l->prox);
	
}

void imprimirReverso(ListaD *l){
    ListaD *aux = l;
    while (aux->prox != NULL)
        aux = aux->prox;

    while (aux != NULL) {
        printf("%d ", aux->info);
        aux = aux->ant;
    }
}
