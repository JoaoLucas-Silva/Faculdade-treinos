#include <stdio.h>
#include <stdlib.h>

// Stack with linked list
typedef struct Node{
    int value;
    struct Node* next;
}Node;

typedef struct Stack{
    Node* top; // top->value; top->next
}Stack;

Stack* create();
void push(Stack* p, int v);
void pop(Stack* p);
void printStack(Stack* p);
Stack* cleanStack(Stack* p);

int main (void){
    Stack* s1;

    s1 = create();
    push(s1, 5);
    push(s1, 4);
    push(s1, 3);
    printStack(s1);
    printf("\nRemove an element\n");
    pop(s1);
    printStack(s1);
    printf("\n");
    s1 = cleanStack(s1);

    return 0;
}

// All operations in a stack is made on top
Stack* create(){
    Stack* s;
    s = (Stack*)malloc(sizeof(Stack));

    s->top = NULL;

    return s;
}

void push(Stack* s, int v){
    Node* node1 = (Node*)malloc(sizeof(Node)); 
    if(node1 == NULL){
        printf("\nAllocation failed!");
        return;
    }

    node1->value = v; 
    node1->next = s->top; // if top is null, next became null
    s->top = node1; // making the new top
}

void pop(Stack* s){
    Node* node1;

    if(s->top == NULL){
        printf("\nEmpty stack!");
        return;
    }

    node1 = s->top; // received the first element
    s->top = node1->next; // make the top receive the second element
    free(node1); // free the first element (element that was on top)
}

void printStack(Stack* s){
    Node* node1 = s->top;

    while(node1 != NULL){
        printf("%d - > ", node1->value);
        node1 = node1->next;
    }
}

Stack* cleanStack(Stack* s){
    Node* node1 = s->top;
    Node* node2;

    while(node1 != NULL){
        node2 = node1;

        node1 = node1->next;
        free(node2);
    }
    free(s);

    printf("Stack elimined!\n");

    return NULL;
}