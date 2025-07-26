#include <stdio.h>
#include <stdlib.h>

typedef struct List{
	int value;
	struct List* next;
}List;

List* initialize();
List* insert_FirstP(List* l, int v);
List* insert_LastP(List* l, int v);
int contaNos(List *l);
void printList(List* l);

int main(void){

	List *l1;

	l1 = initialize();
    l1 = contaNos(l1);
	l1 = insert_FirstP(l1, 3);
	l1 = insert_FirstP(l1, 2);
	l1 = insert_FirstP(l1, 1);
    l1 = insert_LastP(l1, 4);

	printList(l1);
		
	return 0;
}

List* initialize(){
	return NULL;	
}

List* insert_FirstP(List* l, int v){

	List* node = (List*)malloc(sizeof(List));

	node->value = v;
	node->next = l;

	return node;
}


List* insert_P3(List* l, int v){

    List* node = (List*)malloc(sizeof(List));
    List* aux;
    List* pn;

    if(node == NULL){
        printf("\nError in allocation!");
        return l;
    }

    node->value = v;
    node->next = NULL;

    if(l == NULL){
        return node;
    }else{
        aux = l;
        
    }
    
  
}

List* insert_LastP(List* l, int v){

    List* node = (List*)malloc(sizeof(List)); 
    List* aux;

    if(node == NULL){
        printf("\nError in allocation!");
        return l;
    }

    node->value = v;
    node->next = NULL;

    // Is the first node?
    if(l == NULL){
        node->next = NULL;
        return node;
    }else{
        aux = l;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = node;
        return l;
    }
}

int contaNos(List *l){
    int cont = 0;
    while (l != NULL) {
        cont++;
        l = l->next;
    }
    return cont;
}

void printList(List* l){
	
	List *node = l;

	while(node != NULL){
		printf("%d -> ", node->value);
		node = node->next;
	}
}