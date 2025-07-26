#include <stdio.h>
#include <stdlib.h>

// Tests with circular list for college test
// ____________________________________________

// Initializate list V

// Function to print a list V

// Insert at the beginning V

// Insert at the end V

// Insert ordered V

// Remove a node 

// Cut a list in the middle 

// Concatenate list 

// Function to count nodes into a list
// ____________________________________________

typedef struct ListC{
    int value;
    struct ListC* next;
}ListC;

ListC* initialize();
void printList(ListC* l);
ListC* insert_at_beginning(ListC* l, int v);
ListC* insert_at_end(ListC* l, int v);
ListC* insert_ordered(ListC* l, int v);

int main(void){

    ListC* cl;

    cl = initialize();

    cl = insert_at_beginning(cl, 3);
    cl = insert_at_beginning(cl, 2);
    cl = insert_at_beginning(cl, 1);
    cl = insert_at_end(cl, 5);
    cl = insert_ordered(cl, 4);
    
    printf("\nExibindo lista...\n");
    printList(cl);
    printf("\n");

    return 0;
}

ListC* initialize(){
    return NULL;
}

void printList(ListC* l){

    ListC* node = l;

    if(l == NULL){
        printf("\nLista vazia!");
        return;
    }

    do{
        printf("%d -> ", node->value);
        node = node->next;
    }while(node != l);
}

ListC* insert_at_beginning(ListC* l, int v){

    ListC* node = (ListC*)malloc(sizeof(ListC));
    if(node == NULL){
        printf("\nAllocation failed!");
        return l;
    }

    node->value = v;

    // Is the first node?
    if(l == NULL){
        node->next = node;
        return node;
    }

    ListC* aux = l; // aux aponta pro inicio da lista
    node->next = l; // node tem o valor e o proximo dele aponta pro inicio da lista

    while(aux->next != l){
        aux = aux->next;
    }
    aux->next = node;
    return node;
}

ListC* insert_at_end(ListC* l, int v){

    ListC* node = (ListC*)malloc(sizeof(ListC));
    if(node == NULL){
        printf("\nAllocation failed");
    }

    node->value = v;

    // Is the first node?
    if(l == NULL){
        node->next = node;
        return node;
    }

    ListC* aux = l;
    while(aux->next != l){
        aux = aux->next;
    }
    aux->next = node; // Inserindo no fim
    node->next = l; // Mantendo a circularidade (novo elemento aponta pro inicio)

    return l;
}

ListC* insert_ordered(ListC* l, int v){

    ListC* node = (ListC*)malloc(sizeof(ListC));
    if(node == NULL){
        printf("\nAllocation failed!");
    }

    node->value = v;

    // Is the first node?
    if(l == NULL){
        node->next = node; // Aponta pra si mesmo mantendo a circularidade
        return node;
    }

    ListC* aux = l;

    // Valor menor que o primeiro nó
    if(v < l->value){
        while(aux->next != l){
            aux = aux->next; // Percorro até o último valor da lista
        }
        aux->next = node; // Último aponta para o novo nó
        node->next = l; // Novo nó aponta pro antigo início
        return node;
    }

    // Inserção meio ou fim
    while(aux->next != l && aux->next->value < v){
        aux = aux->next;
    }

    node->next = aux->next;
    aux->next = node;

    return l;
}