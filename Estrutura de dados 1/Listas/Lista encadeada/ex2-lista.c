#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
	int info;
	struct lista *prox;
}Lista;

Lista* inicializa();
Lista* inserirIni(Lista *l, int v);
void imprimir(Lista* l);
void imprimir_r(Lista* l);
Lista* inserirFim(Lista *l, int v);
Lista* busca(Lista* l, int v);
Lista* busca_free(Lista* l);
int contaNos(Lista *l);
Lista* inserirPosicao3(Lista* l, int v);
Lista* inserirPosicao4(Lista* l, int v);
Lista* inserirOrdenado(Lista* l, int v);
Lista* retirar(Lista* l, int v);
Lista* separa(Lista* l, int v);
Lista* concatena(Lista* l1, Lista* l2);
int* aloca_vetor(int n);
Lista* constroi(int n, int* v);
Lista* retira_prefixo(Lista* l, int n);

int main(void){
	Lista *l1, *l2, *l3;
	int* v, n = 5;

	l1 = inicializa();
	l1 = inserirIni(l1,3);
	l1 = inserirIni(l1,2);
	l1 = inserirIni(l1,1);
	l1 = inserirFim(l1,4);	
	l1 = inserirPosicao3(l1, 10);
	l1 = inserirPosicao4(l1, 25);
	l1 = inserirOrdenado(l1, 12);
	printf("\n");
	imprimir(l1);
	printf("\n\nForma recursiva: ");
	imprimir_r(l1);

	printf("\n\nRetirando um elemento\n");
	l1 = retirar(l1,2);
	imprimir(l1);

	l2 = separa(l1, 10);
	printf("\n\nPrimeira parte:\n");
	imprimir(l1);

	printf("\n\nSegunda parte:\n");
	imprimir(l2);

	l1 = concatena(l1, l2);

	printf("\n\nListas concatenadas\n");
	imprimir(l1);

	v = aloca_vetor(n);
	l3 = constroi(n, v);
	printf("\n");
	imprimir(l3);

	l1 = busca_free(l1);
	printf("\n\nLista liberada");
	imprimir(l1);

	l3 = retira_prefixo(l3, 3);
	printf("\n\nLista com prefixos removios: ");
	imprimir(l3);

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

void imprimir(Lista* l){
	Lista *aux = l;
	while(aux != NULL){
		printf("%d ->", aux->info);
		aux = aux->prox; 
	}
}

void imprimir_r(Lista* l){
	if (l == NULL){
		return;
	}
	printf("%d ->", l->info);
	imprimir_r(l->prox);
}

Lista* inserirFim(Lista *l, int v){
	Lista *novo, *aux;

	novo = (Lista*)malloc(sizeof(Lista));

	if(novo != NULL){	
		novo->info = v;
		novo->prox = NULL;

		if(l == NULL){ 
			return novo;
		}
		else{
			aux = l;
			while(aux->prox != NULL)
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
	Lista* aux = l;
	while(aux != NULL && aux->info != v)
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
	int cont = 0;
	while(l != NULL){
		cont++;
		l = l->prox;
	}
	return cont;
}

Lista* inserirPosicao3(Lista* l, int v){
	Lista *aux = l, *pn, *novo;
	int cont = 1, nos;
	
	nos = contaNos(l);
	novo = (Lista*)malloc(sizeof(Lista));
	novo->info = v;
	
	if(nos > 2){
		while(aux != NULL && cont < 2){ // cont inicia em 1, incrementa no while, chega em 2; para.
			cont++;
			aux = aux->prox; // Vai pra segunda posição
		}
		pn = aux->prox; // Armazena temporariamente a próxima posição em relação a atual (2 atual, armazena 3) 
		aux->prox = novo; // 
		novo->prox = pn; // 
	}
	else{
		if(nos == 0){
			novo->prox = NULL;
			return novo;
		}
		if(nos == 1){
			novo->prox = NULL;
			l->prox = novo;
			return l;
		}
		if(nos == 2){
			aux->prox->prox = novo;
			novo->prox = NULL;
			return l;
		}
	}
	return l;	
}

Lista* inserirPosicao4(Lista* l, int v){
	Lista *aux = l, *pn, *novo;
	int cont = 1, nos;
	
	nos = contaNos(l);
	novo = (Lista*)malloc(sizeof(Lista));
	novo->info = v;
	
	if(nos > 3){
		while(aux != NULL && cont < 3){
			cont++;
			aux = aux->prox;
		}
		pn = aux->prox;
		aux->prox = novo;
		novo->prox = pn;
	}
	else{
		if(nos == 0){
			novo->prox = NULL;
			return novo;
		}
		if(nos == 1){
			novo->prox = NULL;
			l->prox = novo;
			return l;
		}
		if(nos == 2){
			aux->prox->prox = novo;
			novo->prox = NULL;
			return l;
		}
		if(nos == 3){
			aux->prox->prox->prox = novo;
			novo->prox = NULL;
			return l;
		}
	}
	return l;	
}

Lista* inserirOrdenado(Lista* l, int v){
	Lista *aux, *novo;

	novo = (Lista*)malloc(sizeof(Lista));

	if(novo != NULL){

		novo->info = v;

		if(l == NULL){
			novo->prox = NULL;
			return novo;
		}else if(novo->info < l->info){
			novo->prox = l;
			l = novo;
			return l;
		}else{
			aux = l;
			while(aux->prox != NULL && novo->info > aux->prox->info){
				aux = aux->prox;
			}
			novo->prox = aux->prox;
			aux->prox = novo;
			return l;
		}
	}else{
		printf("\nErro ao alocar memoria");
		return l;
	}
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

Lista* separa(Lista* l, int n){
    Lista* aux = l;
    Lista* segunda = NULL;

    if (l == NULL) {
        return NULL;
    }
	
    while (aux != NULL && aux->info != n) {
        aux = aux->prox;
    }

    if (aux == NULL || aux->prox == NULL) {
        return NULL;
    }

    segunda = aux->prox;

    aux->prox = NULL;

    return segunda;
}

Lista* concatena(Lista* l1, Lista* l2){

    if (l1 == NULL) {
        return l2;
    }

    if (l2 == NULL) {
        return l1;
    }

    Lista* aux = l1;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = l2;

    return l1;
}

int* aloca_vetor(int n){
    int* v = (int*)malloc(sizeof(int) * n);
    int i;
    for (i = 0; i < n; i++) {
		printf("\n\nDigite os elementos da lista: ");
        scanf("%d", &v[i]);
    }
    return v;
}

Lista* constroi(int n, int* v){
    Lista* l = NULL;
    Lista* novo, *aux;
    int i;

    if (n == 0) {
        return NULL;
    }

    novo = (Lista*)malloc(sizeof(Lista));
    novo->info = v[0];
    novo->prox = NULL;
    l = novo;
    aux = l;

    for (i = 1; i < n; i++) {
        novo = (Lista*)malloc(sizeof(Lista));
        novo->info = v[i];
        novo->prox = NULL;
        aux->prox = novo;
        aux = novo;
    }

    return l;
}

Lista* retira_prefixo(Lista* l, int n){
    Lista* aux;
    int i = 0;

    while (l != NULL && i < n) {
        aux = l;
        l = l->prox;
        free(aux);
        i++;
    }

    return l;
}