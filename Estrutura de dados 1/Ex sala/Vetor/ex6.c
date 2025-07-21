#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6. Registro e Manipulação de Produtos
Implemente um sistema de cadastro de produtos em vetor dinâmico com tamanho escolhido
pelo usuário, onde cada produto possui um código, nome e preço. O usuário poderá buscar um
produto pelo código e imprimir na tela. O usuário poderá também buscar o produto pelo
código e alterar as informações do produto. Crie uma função para imprimir os produtos
cadastrados. Crie um menu para possibilitar a utilização das funções. 
*/

typedef struct {
    int codigo;
    char nome[100];
    float preco;
} Produto;

Produto* aloca_vetor(int tam);
void cadastrar_produtos(Produto* vet, int tam);
void imprimir_todos(Produto* vet, int tam);
int buscar_indice_por_codigo(Produto* vet, int tam, int codigo);
void imprimir_produto(Produto* vet, int indice);
void editar_produto(Produto* vet, int indice);

int main(void) {
    Produto* vet = NULL;
    int tam = 0;
    int op, codigo, indice;
    char verifica_case = 's';

    while (verifica_case == 's') {
        printf("\nDigite o numero da acao desejada\n");
        printf("1 - Alocar vetor\n");
        printf("2 - Cadastrar produtos\n");
        printf("3 - Buscar produto por codigo e imprimir\n");
        printf("4 - Buscar produto por codigo e editar\n");
        printf("5 - Imprimir todos os produtos\n");
        printf("6 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("\nInforme o tamanho do vetor: ");
                scanf("%d", &tam);
                vet = aloca_vetor(tam);
                break;

            case 2:
                if (vet == NULL) {
                    printf("\nVetor nao alocado\n");
                    break;
                }
                cadastrar_produtos(vet, tam);
                break;

            case 3:
                if (vet == NULL) {
                    printf("\nVetor nao alocado\n");
                    break;
                }
                printf("\nInforme o codigo do produto: ");
                scanf("%d", &codigo);
                indice = buscar_indice_por_codigo(vet, tam, codigo);
                if (indice == -1) {
                    printf("\nProduto nao encontrado\n");
                } else {
                    imprimir_produto(vet, indice);
                }
                break;

            case 4:
                if (vet == NULL) {
                    printf("\nVetor nao alocado\n");
                    break;
                }
                printf("\nInforme o codigo do produto: ");
                scanf("%d", &codigo);
                indice = buscar_indice_por_codigo(vet, tam, codigo);
                if (indice == -1) {
                    printf("\nProduto nao encontrado\n");
                } else {
                    editar_produto(vet, indice);
                }
                break;

            case 5:
                if (vet == NULL) {
                    printf("\nVetor nao alocado\n");
                    break;
                }
                imprimir_todos(vet, tam);
                break;

            case 6:
                return 0;

            default:
                printf("\nOpcao invalida\n");
        }

        printf("\nDeseja voltar ao menu? (s/n): ");
        scanf(" %c", &verifica_case);
    }

    return 0;
}

Produto* aloca_vetor(int tam) {
    return (Produto*) malloc(sizeof(Produto) * tam);
}

void cadastrar_produtos(Produto* vet, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("\nCadastro do produto %d\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &vet[i].codigo);
        printf("Nome: ");
        scanf(" %[^\n]%*c", vet[i].nome);
        printf("Preco: ");
        scanf("%f", &vet[i].preco);
    }
}

void imprimir_todos(Produto* vet, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Codigo: %d\n", vet[i].codigo);
        printf("Nome: %s\n", vet[i].nome);
        printf("Preco: %.2f\n", vet[i].preco);
    }
}

int buscar_indice_por_codigo(Produto* vet, int tam, int codigo) {
    int i;
    for (i = 0; i < tam; i++) {
        if (vet[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

void imprimir_produto(Produto* vet, int indice) {
    printf("\nProduto encontrado:\n");
    printf("Codigo: %d\n", vet[indice].codigo);
    printf("Nome: %s\n", vet[indice].nome);
    printf("Preco: %.2f\n", vet[indice].preco);
}

void editar_produto(Produto* vet, int indice) {
    printf("\nEditando produto com codigo %d\n", vet[indice].codigo);
    printf("Novo nome: ");
    scanf(" %[^\n]%*c", vet[indice].nome);
    printf("Novo preco: ");
    scanf("%f", &vet[indice].preco);
}
