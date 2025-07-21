#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[40];
    int idade;
    int ra;
    char universidade[80];
    char cidade_a[40];
} aluno; // Tipo de dado (variável)



int main(void)
{
    aluno utfpr;

    printf("\nSimples perguntas sobre um aluno\n");

    printf("\nDigite o nome do aluno: ");
    scanf(" %[^\n]%*c", utfpr.nome);

    printf("\nDigite a idade do aluno: ");
    scanf("%d", &utfpr.idade);

    printf("\nDigite o ra do aluno: ");
    scanf("%d", &utfpr.ra);

    printf("\nDigite a universidade do aluno: ");
    scanf(" %[^\n]%*c", utfpr.universidade);

    printf("\nDigite a cidade do aluno: ");
    scanf(" %[^\n]%*c", utfpr.cidade_a);


    printf("\nNome do aluno: %s", utfpr.nome);
    printf("\nIdade do aluno: %d", utfpr.idade);
    printf("\nRa do aluno: %d", utfpr.ra);
    printf("\nUniversidade do aluno: %s", utfpr.universidade);
    printf("\nCidade do aluno: %s", utfpr.cidade_a);
    
    return 0;
}