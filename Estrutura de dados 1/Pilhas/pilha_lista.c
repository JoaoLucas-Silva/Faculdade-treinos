#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX 100

// ==== Protótipos ====
typedef struct PilhaChar PilhaChar;
typedef struct PilhaInt PilhaInt;

PilhaChar* criaChar();
void pushChar(PilhaChar *p, char c);
char popChar(PilhaChar *p);

PilhaInt* criaInt();
void pushInt(PilhaInt *p, int v);
int popInt(PilhaInt *p);

int ehPalindromo(char *palavra);
void decimalParaBinario(int num);
void inverterString(char *str);
int parentesesBalanceados(char *expr);
void desfazerRefazer();

// ==== Função Principal ====
int main(){
    setlocale(LC_ALL, "");

    char palavra[] = "banana";

    printf("=== Verificação de Palíndromos ===\n");
    printf("A palavra 'arara' é palíndromo? %s\n", ehPalindromo("arara") ? "Sim" : "Não");
    printf("A palavra 'casa' é palíndromo? %s\n\n", ehPalindromo("casa") ? "Sim" : "Não");

    printf("=== Conversão de número decimal para binário ===\n");
    printf("Representação binária do número 13: ");
    decimalParaBinario(13);
    printf("\n");

    printf("=== Invertendo uma string ===\n");
    inverterString(palavra);
    printf("Resultado da inversão: %s\n\n", palavra);

    printf("=== Verificação de parênteses ===\n");
    printf("Expressão '((A+B)*C)' está correta? %s\n", parentesesBalanceados("((A+B)*C)") ? "Sim" : "Não");
    printf("Expressão '(A+B))*C' está correta? %s\n\n", parentesesBalanceados("(A+B))*C") ? "Sim" : "Não");

    printf("=== Simulação de ações de desfazer e refazer ===\n");
    desfazerRefazer();

    return 0;
}

// ==== Definições ====

struct PilhaChar {
    int topo;
    char dados[MAX];
};

PilhaChar* criaChar(){
    PilhaChar *p = (PilhaChar*)malloc(sizeof(PilhaChar));
    p->topo = 0;
    return p;
}

void pushChar(PilhaChar *p, char c){
    if(p->topo < MAX)
        p->dados[p->topo++] = c;
}

char popChar(PilhaChar *p){
    if(p->topo > 0)
        return p->dados[--p->topo];
    return '\0';
}

struct PilhaInt {
    int topo;
    int dados[MAX];
};

PilhaInt* criaInt(){
    PilhaInt *p = (PilhaInt*)malloc(sizeof(PilhaInt));
    p->topo = 0;
    return p;
}

void pushInt(PilhaInt *p, int v){
    if(p->topo < MAX)
        p->dados[p->topo++] = v;
}

int popInt(PilhaInt *p){
    if(p->topo > 0)
        return p->dados[--p->topo];
    return -1;
}

int ehPalindromo(char *palavra){
    PilhaChar *p = criaChar();
    int len = strlen(palavra);
    int i;
    for(i = 0; i < len; i++)
        pushChar(p, palavra[i]);

    for(i = 0; i < len; i++){
        if(popChar(p) != palavra[i]){
            free(p);
            return 0;
        }
    }
    free(p);
    return 1;
}

void decimalParaBinario(int num){
    PilhaInt *p = criaInt();
    if(num == 0){
        printf("0\n");
        free(p);
        return;
    }
    while(num > 0){
        pushInt(p, num % 2);
        num /= 2;
    }
    while(p->topo > 0)
        printf("%d", popInt(p));
    printf("\n");
    free(p);
}

void inverterString(char *str){
    PilhaChar *p = criaChar();
    int len = strlen(str);
    int i;
    for(i = 0; i < len; i++)
        pushChar(p, str[i]);

    for(i = 0; i < len; i++)
        str[i] = popChar(p);
    free(p);
}

int parentesesBalanceados(char *expr){
    PilhaChar *p = criaChar();
    int i;
    for(i = 0; expr[i] != '\0'; i++){
        if(expr[i] == '(')
            pushChar(p, '(');
        else if(expr[i] == ')'){
            if(p->topo == 0){
                free(p);
                return 0;
            }
            popChar(p);
        }
    }
    i = (p->topo == 0);
    free(p);
    return i;
}

void desfazerRefazer(){
    PilhaChar *undo = criaChar();
    PilhaChar *redo = criaChar();

    pushChar(undo, 'A');
    pushChar(undo, 'B');
    pushChar(undo, 'C');

    printf("Desfazendo última operação: %c\n", popChar(undo));
    pushChar(redo, 'C');

    printf("Refazendo operação: %c\n", popChar(redo));
    pushChar(undo, 'C');

    printf("Conteúdo final da pilha (undo): ");
    while(undo->topo > 0)
        printf("%c ", popChar(undo));
    printf("\n");

    free(undo);
    free(redo);
}