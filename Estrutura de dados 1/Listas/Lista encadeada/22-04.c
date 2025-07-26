#include<stdio.h>
#include<stdlib.h>

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

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

void imprimir(Lista* l){
	Lista *aux=l;
	while(aux!=NULL){
		printf("%d ->", aux->info);
		aux = aux->prox; 
	}
}

void imprimir_r(Lista* l){
	Lista *aux=l;
	
	if (l == NULL){
		return 0;
	}
	printf("%d ->", aux->info);
	imprimir_r(l->prox);
}

Lista* inserirFim(Lista *l, int v){
	Lista *novo, *aux;
	novo = (Lista*)malloc(sizeof(Lista));
	if(novo!=NULL){	
		novo->info = v;
		novo->prox = NULL;
		if(l==NULL)
			return novo;
		else{
			aux = l;
			while(aux->prox!=NULL)
				aux = aux->prox;
			aux->prox = novo;
			return l;
		}
	}
	else{
		printf("\nErro na alocacao!");
		return l;
	}
}

Lista* busca(Lista* l, int v){
	Lista* aux=l;
	while(aux!=NULL && aux->info!=v)
		aux = aux->prox;
	return aux;
}

Lista* busca_free(Lista* l){
	Lista* aux = l, *r;
	while(aux != NULL){
		r = aux;
		aux = aux->prox;
		free(r);
	}
	return NULL;
}

int contaNos(Lista *l){
	int cont=0;
	while(l!=NULL){
		cont++;
		l = l->prox;
	}
	return cont;
}

Lista* inserirPosicao3(Lista* l, int v){
	Lista *aux=l, *pn, *novo;
	int cont=1, nos;
	
	nos = contaNos(l);
	
	novo=(Lista*)malloc(sizeof(Lista));
	novo->info = v;
	if(nos>2){
		while(aux!=NULL&&cont<2){
			cont++;
			aux=aux->prox;
		}
		pn = aux->prox;
		aux->prox = novo;
		novo->prox = pn;
	}
	else{
		if(nos==0){
			novo->prox = NULL;
			return novo;
		}
		if(nos==1){
			novo->prox = NULL;
			l->prox = novo;
			return l;
		}
		if(nos==2){
			aux->prox->prox = novo;
			novo->prox = NULL;
			return l;
		}
	}
	return l;	
}

Lista* retirar(Lista* l, int v){
	Lista *aux = l, *ant = NULL;
	
	while(aux != NULL && aux->info != v){
		ant = aux;
		aux = aux->prox;
	}
	
	if(aux == NULL){
		printf("\n\nElemento nao encontrado\n");
		return l;
	}
	
	if(ant == NULL){
		l = aux->prox;
	}else{
		ant->prox = aux->prox;
	}
	free(aux);
	return l;
}

int main(){
	Lista *l1, *l2, *aux, *b;
	l1 = inicializa();
	l1 = inserirIni(l1,3);
	l1 = inserirIni(l1,2);
	l1 = inserirIni(l1,1);
	l1 = inserirFim(l1,4);	
	l1 = inserirPosicao3(l1,10);
	imprimir(l1);
	printf("\n\n");
	l1 =  retirar(l1,2);
	imprimir(l1);
	printf("\n\nForma recursiva: ");
	imprimir_r(l1);
	l1 = busca_free(l1);
	printf("\n\nLista liberada");
	imprimir(l1);

	return 0;
}