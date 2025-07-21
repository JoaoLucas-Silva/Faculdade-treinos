#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50

typedef struct Produto {
    int codigo;
    char nome[MAX_NOME];
    int quantidade;
    float preco;
    struct Produto* ant;
    struct Produto* prox;
} Produto;

Produto* inicializa();
Produto* inserirProduto(Produto* lista);
Produto* removerProduto(Produto* lista, int codigo);
Produto* consultarProduto(Produto* lista, int codigo);
void listarProdutosCrescente(Produto* lista);
void listarProdutosDecrescente(Produto* lista);
float calcularValorTotal(Produto* lista);
void menu();

int main() {

    Produto* lista = inicializa();
    int opcao, codigo;

    do {
        menu();
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                lista = inserirProduto(lista);
                break;
            case 2:
                printf("\nDigite o codigo do produto a remover: ");
                scanf("%d", &codigo);
                lista = removerProduto(lista, codigo);
                break;
            case 3:
                printf("\nDigite o codigo do produto a consultar: ");
                scanf("%d", &codigo);
                Produto* p = consultarProduto(lista, codigo);
                if (p != NULL) {
                    printf("\nProduto encontrado: %d - %s - %d - %.2f\n", p->codigo, p->nome, p->quantidade, p->preco);
                } else {
                    printf("\nProduto nao encontrado.\n");
                }
                break;
            case 4:
                printf("\nProdutos em ordem crescente:\n");
                listarProdutosCrescente(lista);
                printf("\nProdutos em ordem decrescente:\n");
                listarProdutosDecrescente(lista);
                break;
            case 5:
                printf("\nValor total em estoque: R$ %.2f\n", calcularValorTotal(lista));
                break;
            case 0:
                printf("\nEncerrando o programa.\n");
                break;
            default:
                printf("\nOpcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}

Produto* inicializa(){
    return NULL;
}

Produto* inserirProduto(Produto* lista) {
    int codigo, quantidade;
    float preco;
    char nome[MAX_NOME];

    printf("Codigo: ");
    scanf("%d", &codigo);

    Produto* aux = lista;
    while (aux != NULL) {
        if (aux->codigo == codigo) {
            printf("Produto com este codigo ja existe!\n");
            return lista;
        }
        aux = aux->prox;
    }

    Produto* novo = (Produto*)malloc(sizeof(Produto));
    if (novo == NULL) {
        printf("Erro de alocacao!\n");
        return lista;
    }

    novo->codigo = codigo;

    printf("Nome: ");
    getchar(); 
    fgets(nome, MAX_NOME, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    strcpy(novo->nome, nome);

    printf("Quantidade: ");
    scanf("%d", &quantidade);
    novo->quantidade = quantidade;

    printf("Preco: ");
    scanf("%f", &preco);
    novo->preco = preco;

    novo->prox = NULL;
    novo->ant = NULL;

    if (lista == NULL) {
        return novo;
    }

    Produto* atual = lista;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
    novo->ant = atual;

    return lista;
}


Produto* removerProduto(Produto* lista, int codigo) {
    Produto* aux = lista;
    while (aux != NULL && aux->codigo != codigo) {
        aux = aux->prox;
    }
    if (aux == NULL) {
        printf("Produto nao encontrado.\n");
        return lista;
    }
    if (aux->ant == NULL) {
        lista = aux->prox;
        if (lista != NULL) lista->ant = NULL;
    } else {
        aux->ant->prox = aux->prox;
        if (aux->prox != NULL) {
            aux->prox->ant = aux->ant;
        }
    }
    free(aux);
    printf("Produto removido com sucesso.\n");
    return lista;
}

Produto* consultarProduto(Produto* lista, int codigo) {
    Produto* aux = lista;
    while (aux != NULL && aux->codigo != codigo) {
        aux = aux->prox;
    }
    return aux;
}

void listarProdutosCrescente(Produto* lista) {
    Produto* aux = lista;

    if(aux == NULL){
        printf("Nenhum produto cadastrado ainda!\n");
        return;
    }

    while (aux != NULL) {
        printf("%d - %s - %d - %.2f\n", aux->codigo, aux->nome, aux->quantidade, aux->preco);
        aux = aux->prox;
    }
}

void listarProdutosDecrescente(Produto* lista) {
    Produto* aux = lista;
    if (aux == NULL){
        printf("Nenhum produto cadastrado ainda!\n");
        return;
    }

    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    while (aux != NULL) {
        printf("%d - %s - %d - %.2f\n", aux->codigo, aux->nome, aux->quantidade, aux->preco);
        aux = aux->ant;
    }
}

float calcularValorTotal(Produto* lista) {
    float total = 0;
    Produto* aux = lista;

    while (aux != NULL) {
        total += aux->quantidade * aux->preco;
        aux = aux->prox;
    }
    return total;
}

void menu() {
    printf("\nMENU:\n");
    printf("1 - Inserir produto\n");
    printf("2 - Remover produto\n");
    printf("3 - Consultar produto\n");
    printf("4 - Listar produtos\n");
    printf("5 - Valor total do estoque\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}
