#include<stdio.h>
#include<stdlib.h>

struct listad{
	struct listad *ant;
	int info;
	struct listad *prox;
};
typedef struct listad Listad;

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
	/*
	if(l==NULL)
		return;	
	printf("%d -> ", l->info);
	imprimir(l->prox);
	*/
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

Listad* separa(Listad *l, int n) {
    Listad *aux = l;

    while (aux != NULL && aux -> info != n) {
        aux = aux -> prox;
    }

    if (aux == NULL) {
        printf("\nElemento nao encontrado!\n");	
        return NULL;
    }

    Listad *novo = aux -> prox;
    if (novo != NULL) {
        novo -> ant = NULL;
    }

    aux -> prox = NULL;
    return novo;
}

Listad* concatena(Listad *l1, Listad *l2) {
    if (l1 == NULL) {
        return l2;
    }

    Listad *aux = l1;
    while (aux -> prox != NULL) {
        aux = aux -> prox;
    }

    aux -> prox = l2;
    return l1;
}

Listad* constroi(int n, int* v) {
    if (n == 0) {
        return NULL;
    }

    Listad *inicio = NULL, *aux = NULL;
    for (int i = 0; i < n; i++) {
        Listad* novo = (Listad*)malloc(sizeof(Listad));
        novo->info = v[i];
        novo->prox = NULL;

        if (inicio == NULL) {
            inicio = novo;
        } else {
            aux -> prox = novo;
        }
        aux = novo;
    }
    return inicio;
}

Listad* retira_prefixo(Listad *l, int n) {
    if (l == NULL || n <= 0) {
        return l;
    }

    Listad *aux = l;
    for (int i = 0; i < n; i++) {
        if (aux == NULL) {
            return NULL;
        }
        Listad *temp = aux;
        aux = aux -> prox;
        free(temp);
    }
    return aux;
}

int main(){
	Listad *L1, *L2;
	L1 = inicializar();
	L1 = inserirFim(L1, 8);
	L1 = inserirFim(L1, 7);
	L1 = inserirFim(L1, 6);
	L1 = inserirFim(L1, 5);
	L1 = inserirFim(L1, 4);
	L1 = inserirFim(L1, 3);
	L1 = inserirFim(L1, 2);
	L1 = inserirFim(L1, 1);
	
	printf("Lista completa\n");
	imprimirRec(L1);
	
	L2 = separa(L1, 4);
	
	printf("\n\nPrimeira metade\n");
	imprimirRec(L1);
	
	printf("\n\nsegunda metade\n");
	imprimirRec(L2);
	
	L1 = concatena(L1, L2);

    printf("\n\nLista concatenada\n");
    imprimir(L1);
    
    int v[] = {2, 4, 6, 7, 10};
    int n = sizeof(v)/sizeof(v[0]);
    L2 = constroi(n, v);

    printf("\n\nLista construida\n");
    imprimir(L2);
	
    L2 = retira_prefixo(L2, 2);

    printf("\n\nLista depois de remover os 2 primeiros nos:\n");
    imprimir(L2);
	
	return 0;
}