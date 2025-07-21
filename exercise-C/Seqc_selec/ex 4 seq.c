#include <stdio.h>
#include <math.h>

/*
Ler um número inteiro representando a quantidade de alunos de uma turma e informe a quantidade de grupos 
de 4 alunos que podem ser formados, e quantos alunos ficam de fora, sem formar um grupo completo
*/

/*
 entrada de dados:
  quantidade de alunos da turma

 saída de dados:
  quantidade de grupos 
  sobra

 processamento:
  obter a quantidade de alunos da turma

  quantidade de grupos = quantidade de alunos / 4
    sobra = quantidade de alunos % 4 
*/

  int main ()
  {
   
    int qt_a, qt_g, sobra;

     printf("Calcular a quantidade de grupos de 4 alunos para um devida turma, e quantos alunos ficam de fora");

       printf("\nQual a quantidade de alunos da turma? ");
        scanf("%d", &qt_a);

         qt_g = qt_a / 4;
           
           sobra = qt_a % 4;

            printf("A quantidade de grupos de 4 alunos que podem ser formados e de %d, \ne a sobra e de %d", qt_g, sobra);

    return 0;
  }