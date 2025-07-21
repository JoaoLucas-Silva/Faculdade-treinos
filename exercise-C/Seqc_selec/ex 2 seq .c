#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

//Calcular a média ponderada obtida por um aluno para 2 notas bimestrais.

/*
entrada de dados:
 n1, n2, p1, p2

saída de dados:
 media_ponderada

processamento:
 obter n1, p1, n2, p2

 media_ponderada = ((n1 * p1) + (n2 * p2)) / (p1 + p2)
*/

  float n1, n2, media_ponderada;
  int p1, p2;

 printf("Calcular a media ponderada de um aluno para duas notas bimestrais");

  printf("\nDigite a primeira nota: ");
  scanf ("%f", &n1);

 printf ("\nDigite o peso da primeira nota: ");
  scanf("%d", &p1);

 printf("\nDigite a segunda nota: ");
  scanf ("%f", &n2);

 printf ("\nDigite o peso da segunda nota: ");
  scanf("%d", &p2);

 media_ponderada = ((n1 * p1) + (n2 * p2)) / (p1 + p2);

   printf("\nA media ponderada para duas notas bimestrais e de %f ", media_ponderada);

  system ("pause");
    return 0;
}