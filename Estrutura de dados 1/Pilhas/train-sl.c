#include <stdio.h>
#include <stdlib.h>

// When dealing with a stack with a list, we do not need a fixed size for the stack, unlike with a vector

typedef struct node{
    int value;
    struct node* next;
}Node;

typedef struct stack{
    Node* top;
}Stack;

Stack* create();
void push(Stack* s, int v);
void pop(Stack* s);
void printStack(Stack* s);
Stack* cleanStack(Stack* s);

int main(void){
    Stack* s1;

    s1 = create();
    push(s1, 3);
    push(s1, 2);
    push(s1, 1);
    printStack(s1);
    printf("\n");
    pop(s1);
    printf("\nRemoving an element...\n");
    printStack(s1);
    printf("\n");
    s1 = cleanStack(s1);
    
    return 0;
}

Stack* create(){
    Stack* s = (Stack*)malloc(sizeof(Stack));

    s->top = NULL;

    return s;
}

void push(Stack* s, int v){
    Node* n1 = (Node*)malloc(sizeof(Node));
    if(n1 == NULL){
        printf("\nAllocation failed!");
    }

    n1->value = v;
    n1->next = s->top;
    s->top = n1;
}

void pop(Stack* s){
    Node* n1 = s->top;
    Node* n2;

    if(n1 == NULL){
        printf("\nEmpty stack!");
        return;
    }

    n2 = n1;
    s->top = n1->next;
    free(n2);
}

void printStack(Stack* s){
    Node* n1 = s->top;

    while(n1 != NULL){
        printf("%d -> ", n1->value);
        n1 = n1->next;
    }
}

Stack* cleanStack(Stack* s){
    Node* n1 = s->top;
    Node* n2;

    if(n1 == NULL){
        printf("\nEmpty stack!");
        return s;
    }
    while(n1->next != NULL){
        n2 = n1;
        n1 = n1->next;
        free(n2);
    }
    free(s);

    printf("\nEliminated stack!\n");

    return NULL;
}