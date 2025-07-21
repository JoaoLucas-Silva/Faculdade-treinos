#include <stdio.h>
#include <stdlib.h>

typedef struct listaC{
    int info;
    struct listaC *prox;
}ListaC;

ListaC* inicializar();
ListaC* inserirIniC(ListaC *l, int v);
ListaC* inserirFimC(ListaC *l, int v);
ListaC* remover(ListaC *l, int v);
void imprimir(ListaC* l);
void dividirListaCircular(ListaC* l, ListaC** l1, ListaC** l2);
ListaC* concatenarListas(ListaC *l1, ListaC *l2);
ListaC* removerTodos(ListaC *l, int v);
int contarNos(ListaC *l);
ListaC* inserirOrdenado(ListaC *l, int v);

int main() {
    ListaC *lc1, *l1, *l2;
    lc1 = inicializar();

    lc1 = inserirFimC(lc1, 1);
    lc1 = inserirFimC(lc1, 2);
    lc1 = inserirFimC(lc1, 3);
    lc1 = inserirFimC(lc1, 4);
    lc1 = inserirFimC(lc1, 5);
    lc1 = inserirFimC(lc1, 6);

    printf("Lista original:\n");
    imprimir(lc1);

    dividirListaCircular(lc1, &l1, &l2);

    printf("\nPrimeira metade:\n");
    imprimir(l1);

    printf("\nSegunda metade:\n");
    imprimir(l2);

    printf("\nLista concatenada:\n");
    ListaC *lcConcat = concatenarListas(l1, l2);
    imprimir(lcConcat);

    lcConcat = removerTodos(lcConcat, 3);
    printf("\nLista apos remocao de 3:\n");
    imprimir(lcConcat);

    printf("\nNumero de nos: %d\n", contarNos(lcConcat));

    lcConcat = inserirOrdenado(lcConcat, 0);
    printf("\nLista apos insercao ordenada de 0:\n");
    imprimir(lcConcat);

    return 0;
}

ListaC* inicializar() {
    return NULL;
}

ListaC* inserirIniC(ListaC *l, int v) {
    ListaC *novo, *aux = l;
    novo = (ListaC*)malloc(sizeof(ListaC));
    novo->info = v;

    if (l == NULL) {
        novo->prox = novo;
        return novo;
    } else {
        novo->prox = l;
        while (aux->prox != l) {
            aux = aux->prox;
        }
        aux->prox = novo;
        return novo;
    }
}

ListaC* inserirFimC(ListaC *l, int v) {
    ListaC *novo, *aux = l;
    novo = (ListaC*)malloc(sizeof(ListaC));
    novo->info = v;

    if (l == NULL) {
        novo->prox = novo;
        return novo;
    } else {
        while (aux->prox != l) {
            aux = aux->prox;
        }
        aux->prox = novo;
        novo->prox = l;
        return l;
    }
}

ListaC* remover(ListaC *l, int v) {
    ListaC *aux = l, *aux2 = l, *ant = NULL;

    if (l != NULL) {
        do {
            if (aux->info == v)
                break;
            ant = aux;
            aux = aux->prox;
        } while (aux != l);

        if (aux == l) {
            if (ant == NULL) {
                if (aux->prox != aux) {
                    while (aux2->prox != l)
                        aux2 = aux2->prox;
                    aux2->prox = aux->prox;
                    l = l->prox;
                    free(aux);
                } else {
                    free(aux);
                    l = NULL;
                }
            } else
                printf("\nElemento nao encontrado!\n");
        } else {
            ant->prox = aux->prox;
            free(aux);
        }
    } else
        printf("\nLista vazia!\n");
    return l;
}

void imprimir(ListaC* l) {
    ListaC *aux = l;
    if (l != NULL) {
        do {
            printf("%d -> ", aux->info);
            aux = aux->prox;
        } while (aux != l);
    } else {
        printf("Lista vazia!");
    }
    printf("\n");
}

void dividirListaCircular(ListaC* l, ListaC** l1, ListaC** l2) {
    if (l == NULL || l->prox == l) {
        *l1 = l;
        *l2 = NULL;
        return;
    }

    ListaC *slow = l;
    ListaC *fast = l;

    while (fast->prox != l && fast->prox->prox != l) {
        slow = slow->prox;
        fast = fast->prox->prox;
    }

    *l1 = l;
    *l2 = slow->prox;

    slow->prox = *l1;

    ListaC* aux = *l2;
    while (aux->prox != l) {
        aux = aux->prox;
    }
    aux->prox = *l2;
}

ListaC* concatenarListas(ListaC *l1, ListaC *l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    ListaC *aux = l1;
    while (aux->prox != l1) {
        aux = aux->prox;
    }
    aux->prox = l2;

    ListaC *aux2 = l2;
    while (aux2->prox != l2) {
        aux2 = aux2->prox;
    }
    aux2->prox = l1;

    return l1;
}

ListaC* removerTodos(ListaC *l, int v) {
    if (l == NULL) return NULL;

    ListaC *aux = l, *ant = NULL;
    while (aux->info == v) {
        if (aux->prox == l) {
            free(aux);
            return NULL;
        }
        ant = aux;
        aux = aux->prox;
    }

    while (aux->prox != l) {
        if (aux->info == v) {
            ant->prox = aux->prox;
            free(aux);
            aux = ant->prox;
        } else {
            ant = aux;
            aux = aux->prox;
        }
    }

    return l;
}

int contarNos(ListaC *l) {
    if (l == NULL) return 0;

    int count = 1;
    ListaC *aux = l;
    while (aux->prox != l) {
        count++;
        aux = aux->prox;
    }
    return count;
}

ListaC* inserirOrdenado(ListaC *l, int v) {
    ListaC *novo = (ListaC*)malloc(sizeof(ListaC));
    novo->info = v;

    if (l == NULL) {
        novo->prox = novo;
        return novo;
    }

    ListaC *aux = l, *ant = NULL;
    while (aux->prox != l && aux->info < v) {
        ant = aux;
        aux = aux->prox;
    }

    if (aux == l && v <= l->info) {
        novo->prox = l;
        while (aux->prox != l) {
            aux = aux->prox;
        }
        aux->prox = novo;
        return novo;
    }

    ant->prox = novo;
    novo->prox = aux;

    return l;
}