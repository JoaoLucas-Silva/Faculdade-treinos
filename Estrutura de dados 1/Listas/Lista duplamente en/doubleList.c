#include <stdio.h>
#include <stdlib.h>

// Teste antes da prova

typedef struct ListD{
    int value;
    struct ListD* ant;
    struct ListD* next;
}ListD;

ListD* initialize();
void printList(ListD* l);
void printListCont(ListD* l);
ListD* insert_at_beginning(ListD* l, int v);
ListD* insert_at_end(ListD* l, int v);

int main(void){

    ListD* ld = initialize();

    ld = insert_at_beginning(ld, 3);
    ld = insert_at_beginning(ld, 2);
    ld = insert_at_beginning(ld, 1);
    ld = insert_at_end(ld, 99);

    printList(ld);
    printListCont(ld);

    return 0;
}

ListD* initialize(){
    return NULL;
}

void printList(ListD* l){
    ListD* node;
    
    for(node = l; node != NULL; node = node->next){
        printf("%d -> ", node->value);
    }
    printf("\n");
}

void printListCont(ListD* l){
    ListD* node = l;
    ListD* aux;
    
    while(node->next != NULL){
        node = node->next;
    }

    for(aux = node; aux != NULL; aux = aux->ant){
        printf("%d -> ", aux->value);
    }

    printf("\n");
}

ListD* insert_at_beginning(ListD* l, int v){

    ListD* node = (ListD*)malloc(sizeof(ListD));
    if(node == NULL){
        printf("\nAllocation failed!\n");
        return l;
    }

    node->value = v;
    node->next = l;
    node->ant = NULL;
    
    if(l == NULL){
        return node;
    }else{
        l->ant = node;
        return node;
    }
}

ListD* insert_at_end(ListD* l, int v){

    ListD* node = (ListD*)malloc(sizeof(ListD));
    if(node == NULL){
        printf("\nAllocation failed!\n");
        return l;
    }

    node->value = v;
    node->next = NULL;
    node->ant = NULL;

    // Is the first node?
    if(l == NULL){
        return node;
    }

    ListD* aux = l;

    while(aux->next != NULL){
        aux = aux->next;
    }
    aux->next = node;
    node->ant = aux;

    return l;
}