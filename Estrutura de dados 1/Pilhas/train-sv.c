#include <stdio.h>
#include <stdlib.h>

#define len 3

// Stack with vector

typedef struct stack{
    int vet[len];
    int top; // Control index
}Stack;

Stack* create();
void push(Stack* s, int v);
int pop(Stack* s);
void printStack(Stack* s);
void clearStack(Stack* s);

int main(void){
    Stack* s1;

    int removed_value = 0;

    s1 = create();
    push(s1, 30);
    push(s1, 20);
    push(s1, 10);
    printf("Stack:\n");
    printStack(s1);
    removed_value = pop(s1);
    printf("\nStack:\n");
    printStack(s1);
    printf("\nValue that was removed: %d\n", removed_value);
    clearStack(s1);

    return 0;
}

Stack* create(){
    Stack* s = (Stack*)malloc(sizeof(Stack));
    if(s == NULL){
        printf("\nAllocation failed!");
        return s;
    }

    s->top = 0;
    return s;
}

void push(Stack* s, int v){
    if(s->top == len){
        printf("\nStack is full!");
        return;
    }
    s->vet[s->top++] = v;
}

int pop(Stack* s){
    if(s->top == 0){
        printf("\nEmpty stack!");
        return 0;
    }
    return s->vet[--s->top];
}

void printStack(Stack* s){
    int i;
    
    for(i = 0; i < s->top; i++){
        if(i == s->top - 1){
            printf("TOPO -> ");
        }
        printf("|%d|\n", s->vet[i]);
    }
}

void clearStack(Stack* s){
    if(s == NULL){
        printf("\nEmpty stack!\n");
        return;
    }

    s->top = 0;
    printf("\nStack cleared!\n");
}