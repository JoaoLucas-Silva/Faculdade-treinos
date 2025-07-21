#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

typedef struct{
    int n;
    int vet[MAX];
}Pilha;

// Protótipos
Pilha* cria();
void push(Pilha *p, int v);
void pop(Pilha *p);
void imprimir(Pilha *p);
int testaMaisElementos(Pilha *P1, Pilha *P2);
void transferirElementos(Pilha *P1, Pilha *P2, int *flagErro);
void inverter(Pilha *P);
int iguais(Pilha *p1, Pilha *p2);
int verificaAgrupamento(char *expr);
int verificaPadrao(char *str);

int main(){
    printf("==== TESTE 1: Comparando Tamanhos ====\n");
    Pilha *p1 = cria();
    Pilha *p2 = cria();
    push(p1, 1); push(p1, 2);
    push(p2, 3);
    printf("P1 tem mais elementos? Resultado: %d\n\n", testaMaisElementos(p1, p2));

    printf("==== TESTE 2: Transferência de Elementos ====\n");
    int erro;
    transferirElementos(p1, p2, &erro);
    printf("Transferência concluída com erro? %d\n", erro);
    imprimir(p2);

    printf("==== TESTE 3: Inversão da Pilha ====\n");
    inverter(p2);
    imprimir(p2);

    printf("==== TESTE 4: Verificando se Pilhas São Iguais ====\n");
    Pilha *p3 = cria();
    push(p3, 3); push(p3, 2); push(p3, 1);
    printf("p2 e p3 são idênticas? Resultado: %d\n\n", iguais(p2, p3));

    printf("==== TESTE 5: Validação de Agrupamento ====\n");
    printf("Expressão '((A+B)(C-D))': %d\n", verificaAgrupamento("((A+B)(C-D))"));
    printf("Expressão '(A+B))': %d\n\n", verificaAgrupamento("(A+B))"));

    printf("==== TESTE 6: Padrão xCy ====\n");
    printf("Entrada: 'ABBCBBA' → Resultado: %d\n", verificaPadrao("ABBCBBA"));
    printf("Entrada: 'ABACBA' → Resultado: %d\n\n", verificaPadrao("ABACBA"));

    return 0;
}

// Funções abaixo do main

Pilha* cria(){
    Pilha *novo = (Pilha*)malloc(sizeof(Pilha));
    novo->n = 0;
    return novo;
}

void push(Pilha *p, int v){
    if(p->n == MAX)
        printf("Erro: pilha atingiu capacidade máxima.\n");
    else
        p->vet[p->n++] = v;
}

void pop(Pilha *p){
    if(p->n == 0)
        printf("Erro: pilha está vazia.\n");
    else
        p->n--;
}

void imprimir(Pilha *p){
    int i;
    printf("Conteúdo da pilha:\n");
    for(i = 0; i < p->n; i++){
        if(i == p->n - 1)
            printf("Topo -> ");
        printf("%d\n", p->vet[i]);
    }
}

int testaMaisElementos(Pilha *P1, Pilha *P2){
    return (P1->n > P2->n) ? 1 : 0;
}

void transferirElementos(Pilha *P1, Pilha *P2, int *flagErro){
    Pilha *aux = cria();
    *flagErro = 0;
    if(aux == NULL){
        *flagErro = 1;
        return;
    }
    while(P1->n > 0){
        push(aux, P1->vet[P1->n - 1]);
        pop(P1);
    }
    while(aux->n > 0){
        push(P2, aux->vet[aux->n - 1]);
        pop(aux);
    }
    free(aux);
}

void inverter(Pilha *P){
    Pilha *aux1 = cria();
    Pilha *aux2 = cria();
    while(P->n > 0){
        push(aux1, P->vet[P->n - 1]);
        pop(P);
    }
    while(aux1->n > 0){
        push(aux2, aux1->vet[aux1->n - 1]);
        pop(aux1);
    }
    while(aux2->n > 0){
        push(P, aux2->vet[aux2->n - 1]);
        pop(aux2);
    }
    free(aux1);
    free(aux2);
}

int iguais(Pilha *p1, Pilha *p2){
    int i;
    if(p1->n != p2->n)
        return 0;
    for(i = 0; i < p1->n; i++){
        if(p1->vet[i] != p2->vet[i])
            return 0;
    }
    return 1;
}

int verificaAgrupamento(char *expr){
    Pilha *p = cria();
    int i;
    for(i = 0; expr[i] != '\0'; i++){
        if(expr[i] == '(')
            push(p, 1);
        else if(expr[i] == ')'){
            if(p->n == 0){
                free(p);
                return 0;
            }
            pop(p);
        }
    }
    i = (p->n == 0) ? 1 : 0;
    free(p);
    return i;
}

int verificaPadrao(char *str){
    Pilha *p = cria();
    int i = 0;
    while(str[i] != 'C' && str[i] != '\0'){
        if(str[i] != 'A' && str[i] != 'B'){
            free(p);
            return 0;
        }
        push(p, str[i]);
        i++;
    }
    if(str[i] != 'C'){
        free(p);
        return 0;
    }
    i++;
    while(str[i] != '\0'){
        if(p->n == 0 || str[i] != p->vet[p->n - 1]){
            free(p);
            return 0;
        }
        pop(p);
        i++;
    }
    i = (p->n == 0) ? 1 : 0;
    free(p);
    return i;
}