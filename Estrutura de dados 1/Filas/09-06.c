// Queue with list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node* next;   
}Node;

typedef struct Queue{
    Node* beggin;
    Node* end; 
}Queue;

Queue* create();
void insert(Queue* q, int v);
void printQueue(Queue* q);
void retirar(Queue* q);

int main(void){
    Queue* q1;

    q1 = create();
    insert(q1, 1);
    insert(q1, 2);
    insert(q1, 3);
    printf("\nQueue:\n");
    printQueue(q1);
    printf("\n");
    retirar(q1);
    printf("\nRetirando one element:\n");
    printQueue(q1);
    printf("\n");
    retirar(q1);
    printf("\nRetirando one element:\n");
    printQueue(q1);
    printf("\n");
    
    return 0;
}

Queue* create(){
    Queue* q = (Queue*)malloc(sizeof(Queue));

    q->beggin = NULL;
    q->end = NULL;
    return q;
}

void insert(Queue* q, int v){
    Node* no1 = (Node*)malloc(sizeof(Node));

    no1->value = v;
    no1->next = NULL;

    if(q->end == NULL){
        q->beggin = no1;
    }else{
        q->end->next = no1;
    }
    q->end = no1;
}

void printQueue(Queue* q){
    Node* aux = q->beggin;

    while(aux != NULL){
        printf("%d -> ", aux->value);
        aux = aux->next;
    }
}

void retirar(Queue* q){
    if(q->beggin == NULL){
        printf("\nEmpty queue!");
    }

    Node* aux = q->beggin;
    q->beggin = q->beggin->next;

    if(q->beggin == NULL){
        printf("\nEmpty queue!");
        q->end = NULL;
    }
    free(aux);
}