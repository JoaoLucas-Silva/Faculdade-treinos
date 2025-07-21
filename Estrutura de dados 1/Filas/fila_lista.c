#include<stdio.h>
#include<stdlib.h>

struct no{
	int info;
	struct no *prox;
};
typedef struct no No;

struct fila{
	No *ini;
	No *fim;
};
typedef struct fila Fila;

Fila* cria(void);
void inserir(Fila *f, int v);
void imprimir(Fila *f);
int vazia(Fila *f);
void retirar(Fila *f);
int quantidade(Fila* f);
void fura_fila(Fila* f, int x);

int main(){
	Fila *f1;
	f1 = cria();
	
	inserir(f1,2);
	inserir(f1,3);
	inserir(f1,4);
	
	printf("Fila original: ");
	imprimir(f1);
	
	printf("\nQuantidade de elementos: %d\n", quantidade(f1));
	
	printf("Furando a fila com o numero 99...\n");
	fura_fila(f1, 99);
	
	printf("Nova fila: ");
	imprimir(f1);
	printf("\nNova quantidade de elementos: %d\n", quantidade(f1));
	
	return 0;
}

Fila* cria(){
	Fila *f;
	f = (Fila*)malloc(sizeof(Fila));
	f->ini = NULL;
	f->fim = NULL;
	return f;
}

void inserir(Fila *f, int v){
	No *novo;
	novo = (No*)malloc(sizeof(No));
	if(novo!=NULL){
		novo->info = v;
		novo->prox = NULL;
		if(f->fim==NULL)		
			f->ini = novo;	
		else
			f->fim->prox = novo;	
		f->fim = novo;	
	}
	else
		printf("Erro na alocacao!");
}

void imprimir(Fila *f){
	No *aux = f->ini;
	while(aux!=NULL){
		printf("%d -> ",aux->info);
		aux = aux->prox;
	}
}

int vazia(Fila *f){
	return f->ini==NULL;
}

void retirar(Fila *f){
	No *aux;
	if(vazia(f))
		printf("\nFila vazia\n");
	else{
		aux = f->ini;
		f->ini = f->ini->prox;
		if(f->ini==NULL)
			f->fim = NULL;
		free(aux);
	}
}

int quantidade(Fila* f) {
    int cont = 0;
    No* aux = f->ini;
    while (aux != NULL) {
        cont++;
        aux = aux->prox;
    }
    return cont;
}

void fura_fila(Fila* f, int x) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo == NULL) {
        return;
    }
    novo->info = x;
    novo->prox = f->ini;
    f->ini = novo;
    if (f->fim == NULL) {
        f->fim = novo;
    }
}