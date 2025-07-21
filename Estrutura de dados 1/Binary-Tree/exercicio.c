#include <stdio.h>
#include <stdlib.h>

typedef struct arv {
    int info;
    struct arv* esq;
    struct arv* dir;
} Arv;

Arv* arv_criavazia(void);
Arv* arv_cria(int info, Arv* sae, Arv* sad);
Arv* arv_libera(Arv* a);
int arv_vazia(Arv* a);
void arv_imprime(Arv* a);

int folhas(Arv* a);
int ocorrencias(Arv* a, int x);
int igual(Arv* a, Arv* b);

int main() {
    Arv* arv1 = arv_cria(50,
        arv_cria(30,
            arv_cria(20, arv_criavazia(), arv_criavazia()),
            arv_cria(40, 
                arv_cria(30, arv_criavazia(), arv_criavazia()),
                arv_criavazia()
            )
        ),
        arv_cria(90,
            arv_criavazia(),
            arv_cria(98, arv_criavazia(), arv_criavazia())
        )
    );

    printf("--- Testando Arvore 1 ---\n");
    printf("Arvore 1 (impressao pre-ordem): ");
    arv_imprime(arv1);
    printf("\n\n");

    printf("1) Quantidade de folhas: %d\n", folhas(arv1));
    printf("2) Ocorrencias do numero 30: %d\n", ocorrencias(arv1, 30));
    printf("2) Ocorrencias do numero 99 (nao existe): %d\n", ocorrencias(arv1, 99));
    printf("\n");

    Arv* arv2 = arv_cria(50,
        arv_cria(30,
            arv_cria(20, arv_criavazia(), arv_criavazia()),
            arv_cria(40, 
                arv_cria(30, arv_criavazia(), arv_criavazia()),
                arv_criavazia()
            )
        ),
        arv_cria(90,
            arv_criavazia(),
            arv_cria(98, arv_criavazia(), arv_criavazia())
        )
    );

    Arv* arv3 = arv_cria(50,
        arv_cria(30,
            arv_cria(10, arv_criavazia(), arv_criavazia()),
            arv_cria(40, arv_criavazia(), arv_criavazia())
        ),
        arv_cria(90, arv_criavazia(), arv_cria(98, arv_criavazia(), arv_criavazia()))
    );

    printf("--- Testando Comparacao de Arvores ---\n");
    printf("3) Arvore 1 e Arvore 2 sao iguais? (1=Sim, 0=Nao): %d\n", igual(arv1, arv2));
    printf("3) Arvore 1 e Arvore 3 sao iguais? (1=Sim, 0=Nao): %d\n", igual(arv1, arv3));

    arv_libera(arv1);
    arv_libera(arv2);
    arv_libera(arv3);

    return 0;
}

Arv* arv_criavazia(void) {
    return NULL;
}

Arv* arv_cria(int info, Arv* sae, Arv* sad) {
    Arv* p = (Arv*)malloc(sizeof(Arv));
    if (p == NULL) {
        perror("Erro de alocacao de memoria");
        exit(1);
    }
    p->info = info;
    p->esq = sae;
    p->dir = sad;
    return p;
}

Arv* arv_libera(Arv* a) {
    if (!arv_vazia(a)) {
        arv_libera(a->esq);
        arv_libera(a->dir);
        free(a);
    }
    return NULL;
}

int arv_vazia(Arv* a) {
    return a == NULL;
}

void arv_imprime(Arv* a) {
    if (!arv_vazia(a)) {
        printf("%d ", a->info);
        arv_imprime(a->esq);
        arv_imprime(a->dir);
    }
}

int folhas(Arv* a) {
    if (arv_vazia(a)) {
        return 0;
    }
    if (arv_vazia(a->esq) && arv_vazia(a->dir)) {
        return 1;
    }
    return folhas(a->esq) + folhas(a->dir);
}

int ocorrencias(Arv* a, int x) {
    if (arv_vazia(a)) {
        return 0;
    }
    
    int count = ocorrencias(a->esq, x) + ocorrencias(a->dir, x);

    if (a->info == x) {
        return 1 + count;
    }
    
    return count;
}

int igual(Arv* a, Arv* b) {
    if (arv_vazia(a) && arv_vazia(b)) {
        return 1;
    }

    if (arv_vazia(a) || arv_vazia(b) || a->info != b->info) {
        return 0;
    }

    return igual(a->esq, b->esq) && igual(a->dir, b->dir);
}