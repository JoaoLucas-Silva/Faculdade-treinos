#include <stdio.h>
#include <stdlib.h>

// Struct para nó do tipo lista
typedef struct Lista{
    int valor;
    struct Lista* proximo;
}Lista;

// Protótipo funções
Lista* inicializa(); // Função que inicializa a lista com NULL
int contaNos(Lista *l); // Função que retorna a quantidade de nós presentes em uma lista
Lista* insere_inicio(Lista* l, int v);
Lista* insere_3p(Lista*l, int v);
Lista* insere_fim(Lista* l, int v);
void imprimir(Lista* l);

int main(void){
    Lista *lista1;

    lista1 = inicializa();
    lista1 = insere_inicio(lista1, 8);
    lista1 = insere_fim(lista1, 12);
    imprimir(lista1);

    return 0;
}

Lista* inicializa(){
    return NULL;
}

int contaNos(Lista *l){
    int cont = 0;
    while (l != NULL) {
        cont++;
        l = l->proximo;
    }
    return cont;
}


Lista* insere_inicio(Lista* l /* L é para dar retorno na função*/, int v){
    Lista* novo = (Lista*)malloc(sizeof(Lista));

    novo->valor = v;
    novo->proximo = l; // Recebe l pois é o inicio da lista
    return novo;
}

Lista* insere_3p(Lista* l, int v){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    Lista* aux;
    Lista* pn;
    int cont, nos;

    novo->valor = v;

    if(nos > 2){
		while(aux != NULL && cont < 2){ // cont inicia em 1, incrementa no while, chega em 2; para.
			cont++;
			aux = aux->proximo; // Vai pra segunda posição
		}
		pn = aux->proximo; // Armazena temporariamente a próxima posição em relação a atual (2 atual, armazena 3) 
		aux->proximo = novo; // Liga aux com novo; valor que será inserido na 3 posicao
		novo->proximo = pn; // pn que estava com guardando a 3 posicao é linkado ao resto da lista
	}
}

Lista* insere_fim(Lista* l, int v){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    Lista* aux;
    
    if(novo != NULL){
        novo->valor = v;
        novo->proximo = NULL;
        
        // É o primeiro nó? se sim ->
        if(l == NULL){
            return novo;
        }
    }

    if(l != NULL){
            aux = l;
			while(aux->proximo != NULL){
				aux = aux->proximo;
            }
			aux->proximo = novo;
			return l;
    }else{
        printf("\nErro na alocacao");
        return l;
    }
}

void imprimir(Lista* l){
    Lista* aux = l;

    printf("\nLista: ");
    while(aux != NULL){
        printf("%d->", aux->valor);
        aux = aux->proximo;
    }
    printf("\n");  
}