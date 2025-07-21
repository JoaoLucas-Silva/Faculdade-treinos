#include <stdio.h>
#include <stdlib.h>

/*
    3. Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do
    usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima
    os dados na tela. 
*/

typedef struct
{
    char nome[40];
    int numero_mat;
    char curso[60];
} aluno;

void le_vetor(aluno vt[], int d);
void exibe_vet(aluno vt[], int d);

int main(void)
{
    aluno person[2];

    le_vetor(person, 2);
    exibe_vet(person, 2);

    return 0;
}

// Função que lê o vetor
void le_vetor(aluno vt[], int d)
{   
    int i;
    for(i = 0; i < d; i++)
    {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]%*c", vt[i].nome);

        printf("Digite o numero da matricula do aluno %d: ", i + 1);
        scanf("%d", &vt[i].numero_mat);

        printf("Digite o curso do aluno %d: ", i + 1);
        scanf(" %[^\n]%*c", vt[i].curso);
    }
}

// Função que exibe o vetor
void exibe_vet(aluno vt[], int d)
{
    int i;
    for(i = 0; i < d; i++)
    {
        printf("\nNome do aluno %d: %s", i + 1, vt[i].nome);
        printf("\nNumero da matricula do aluno %d: %d", i + 1, vt[i].numero_mat);
        printf("\nCurso do aluno %d: %s\n", i + 1, vt[i].curso);
    }
}
