#include <stdio.h>
#include <stdlib.h>

// Tests with linked list for college test
// ____________________________________________

// Initializate list V

// Function to print a list V

// Function to count nodes into a list V

// Insert at the beginning V

// Insert at the third position V

// Insert at the end V

// Insert ordered V

// Remove a node V

// Cut a list in the middle V

// Concatenate list V

// Clear list V
// ____________________________________________

typedef struct List{
    int value;
    struct List *next;
}List;

List* initialize();
void printList(List* l);
int countNode(List* l);
List* insert_at_beginning(List* l, int v);
List* insert_third_p(List* l, int v);
List* insert_at_end(List* l, int v);
List* insert_ordered(List* l, int v);
List* rmv(List* l, int v);
void cutList(List* l, List** primeiraMetade, List** segundaMetade);
List* concatenate(List* l, List* l2);
List* cleanList(List* l);

int main(void){

    List* l1 = initialize();
    List* l2 = initialize();
    List* l3 = initialize();
    List* lc4 = initialize();
    
    // Não tem alocação pra l1 aqui pois já são feita as mesmas nas funções passada
    
    l1 = insert_at_beginning(l1, 6);
    l1 = insert_at_beginning(l1, 3);
    l1 = insert_at_beginning(l1, 2);
    l1 = insert_at_beginning(l1, 1);
    l1 = insert_third_p(l1, 5);
    l1 = insert_at_end(l1, 10);
    l1 = insert_at_end(l1, 7);
    l1 = insert_at_end(l1, 9);
    l1 = insert_ordered(l1, 8);
   
	printf("Exibindo a lista 1 completa abaixo:\n");
    printList(l1);
    
    l1 = rmv(l1, 8);
    
    printf("\n\nExibindo a lista 1 com retirada de elemento abaixo:\n");
    printList(l1);
    printf("\n");

    printf("\nDividindo lista 1...\n");
    cutList(l1, &l2, &l3);
    printf("\nPrimeira parte:\n");
    printList(l2);
    printf("\n\nSegunda parte:\n");
    printList(l3);
    printf("\n");

    printf("\nConcatenando as listas...\n");
    lc4 = concatenate(l2, l3);
    printList(lc4);
    printf("\n");

    printf("\nLimpando lista 1(se tiver elementos)...\n");
    l1 = cleanList(l1);

    return 0;
}

List* initialize(){
    return NULL;
}

void printList(List* l){

    List* node;

    for(node = l; node != NULL; node = node->next){
        printf("%d -> ", node->value);
    }
}

int countNode(List *l){

	int count = 0;

	while(l != NULL){
		count++;
		l = l->next;
	}
	return count;
}

List* insert_at_beginning(List* l, int v){

    List* node = (List*)malloc(sizeof(List));

    if(node == NULL){
        printf("\nAllocation failed!");
        return l;
    }

    node->value = v;
    node->next = l;

    return node;
}

List* insert_third_p(List* l, int v){

    List* node = (List*)malloc(sizeof(List));
    List* aux = l;                  
    List* pn;
    int count = 1, nodes = countNode(l);

    if(node == NULL){
        printf("\nAllocation failed!");
        return l;
    }

    node->value = v;
    node->next = NULL;

    if(l == NULL){
        return node;
    }
    if(nodes == 1){
        l->next = node;
        return l;
    }
    if(nodes == 2){
        aux->next->next = node;
        return l;
    }

    if(nodes > 2){
        while(aux != NULL && count < 2){
            count++;
            aux = aux->next; // Paro na segunda posição
        }
        pn = aux->next; // Guardo a terceira posição(a atual/antiga)
        aux->next = node; // A terceira é linkada com node que contem o valor e aponta pra NULL(aq que o novo no entra)
        node->next = pn; // Linkando ao antigo 3 no da lista(que agora passa a ser o quarto)

	// Exemplo pífio 1;2;3;4 - 3;4 em pn - 1;2;5 - node recebe pn q tinha 3 e quatro assim linkando tudo 1;2;5;3;4
    }
    return l;
}

List* insert_at_end(List* l, int v){

    List* node = (List*)malloc(sizeof(List));
    List* aux = l;

    if(node == NULL){
        printf("\nAllocation failed!");
        return l;
    }

    node->value = v;
    node->next = NULL;

    if(l == NULL){
        return node;
    }
    else{
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = node;
        return l;
    }
}

List* insert_ordered(List* l, int v){
  
    List* node = (List*)malloc(sizeof(List));
    List* aux = l;

    if(node == NULL){
        printf("\nAllocation failed!");
        return l;
    }
  
    node->value = v;
    node->next = NULL;

    // Caso 1: lista vazia ou o novo valor é menor que o primeiro elemento
    if(l == NULL || v < l->value){
        node->next = l;
        return node;  // o novo elemento será o primeiro
    }

    // Caso 2: encontrar a posição correta para inserir
    while(aux->next != NULL && aux->next->value < v){ 
        aux = aux->next;
    }

    // Inserção no meio ou no fim
    node->next = aux->next;
    aux->next = node;

    return l;
}

List* rmv(List* l, int v){
	
	List* aux = l;
	List* ant = NULL;
	
	while(aux != NULL && aux->value != v){
		ant = aux; // Sempre fica um paso atrás do aux
		aux = aux->next; // Guarda o endereço do nó a ser removido
	}

    // Se aux chegou ao final da lista ele recebe NULL, dando que não encontrou o elemento
	if(aux == NULL){
		printf("\nElemento nao encontrado!\n");
		return l;
	}
	
    // Is the first node?
	if(ant == NULL){ // Por anterior ficar um passo atrás ele continua sendo NULL, indicando que o elemento é o primeiro
		l = aux->next; // Recebe next que é NULL
	}
	else{
		ant->next = aux->next;		
	}
	
	free(aux);
	
	return l;	
}

void cutList(List* l, List** primeiraMetade, List** segundaMetade){

    if (l == NULL || l->next == NULL){ // Se a lista que for dividida for NULL, ou tiver apenas 1 nó
        *primeiraMetade = l;               // a primeira metade recebe a mesma e a segunda metade fica com NULL
        *segundaMetade = NULL;                // já que não da pra dividir nada e nem 1
        return;
    }

    List* slow = l; // inicia slow no primeiro elemento da lista
    List* fast = l->next; // inicia fast no segundo elemento da lista

    // Avança até o meio
      while (fast != NULL && fast->next != NULL) { // condição onde fast diferente de NULL e fast next dif idem
        slow = slow->next; // slow percorre uma casa 
        fast = fast->next->next; // fast passa 2 casas 
        // Essa verificação faz com que slow pare sempre ao meio da lista
    }

    // Divide
    *primeiraMetade = l; // Primeira metade recebe o inicio da lista
    *segundaMetade = slow->next; // slow que tem um ponteiro no meio da lista é apontado para o proximo(inicio da segunda metade)
    slow->next = NULL; // slow que tem um ponteiro no meio da lista apontando pro inicio da segunda metade é quebrado apontando pra NULL
}

List* concatenate(List* l, List* l2){

    if(l == NULL && l2 == NULL){
        printf("\nAmbas listas vazias");
        return NULL;
    }

    if(l == NULL){
        return l2;
    }
    if(l2 == NULL){
        return l;
    }

    List* aux = l;

    while(aux->next != NULL){
        aux = aux->next;
    }

    aux->next = l2;

    return l;
}

List* cleanList(List* l){

    List* node = l;
    List* aux;

    if(l == NULL){
        printf("\nLista ja vazia!");
        return l;
    }

    while(node != NULL){
        aux = node;
        node = node -> next;
        free(aux);
    }
    printf("\nLista eliminada!\n");
    return NULL;
}