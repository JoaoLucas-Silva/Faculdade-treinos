#include <stdio.h>
#include <stdlib.h>

/*
5. Sistema de Cadastro de Funcionários
Implemente um programa que gerencie um cadastro de funcionários utilizando alocação
dinâmica para vetor e ponteiros. Cada funcionário deve possuir um nome, cargo e salário. Crie
uma função para criar o vetor dinâmico, uma função para cadastrar cada funcionário por vez e
uma função para imprimir os funcionários cadastrados. Além das funções, crie um menu para
possibilitar a utilização das funções. 
*/

typedef struct { 
    char nome[100];
    char cargo[50];
    float salario;
} Funcionario;

Funcionario* aloca_v(int tam);
void cad_func(Funcionario *vet);
void imp_func(Funcionario *vet);

int main(void){
    Funcionario *vet = NULL;
    char verifica_case = 's';
    int num, i;

    while (verifica_case == 's')
    {   
        printf("\nDigite o numero correspondente a acao que deseja fazer\n"
               "1: Alocar vetor\n"
               "2: Cadastrar Funcionarios\n"
               "3: Imprimir dados de funcionaros\n"
               "4: Sair\n"
               "\nNumero:");
        scanf("%d", &num);

        switch (num)
        {
            case 1:
                vet = aloca_v(2);
                break;

            case 2:
                if(vet == NULL){
                    printf("\nVetor nao alocado");
                    break;
                }
                cad_func(vet);
                break;

            case 3:
                if(vet == NULL){
                    printf("\nVetor nao alocado\n");
                    break;
                }

                for(i = 0; i < 2; i++){ 
                    if(vet[i].nome[0] == '\0'){
                        printf("\nVetor nao preenchido\n");
                        break;
                    }
                }
                imp_func(vet);
                break;
                
            case 4:
                return 0;
            default:
            printf("\nOpcao invalida!\n");
        }

        printf("\nDeseja continuar no menu? (s/n): ");
        scanf(" %c", &verifica_case);
    }
    return 0;
}

Funcionario* aloca_v(int tam){
    return (Funcionario*) malloc(sizeof(Funcionario) * tam);
}

void cad_func(Funcionario *vet){
    int i;

    for(i = 0; i < 2; i++){
        printf("\nCadastrando Funcionario %d\n", i + 1);
        printf("\nNome ....: ");
        scanf(" %[^\n]%*c", vet[i].nome);
        printf("\nCargo ...: ");
        scanf(" %[^\n]%*c", vet[i].cargo);
        printf("\nSalario .: ");
        scanf("%f", &vet[i].salario);
    }
}

void imp_func(Funcionario *vet){
    int i;

    for(i = 0; i < 2; i++){
        printf("\nFuncionario %d\n", i + 1);
        printf("\nNome ....: %s", vet[i].nome);
        printf("\nCargo ...: %s", vet[i].cargo);
        printf("\nSalario .: %.2f\n", vet[i].salario);
    }
}