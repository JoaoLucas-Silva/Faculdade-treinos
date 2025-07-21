#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
//Calcular a média final obtida por um aluno, para 4 notas bimestrais.

/*
entradas de dados:
n1, n2, n3, n4

saída de dados:
media_final

processamento:

obter a n1, n2, n3, n4

somar e dividir por 4 (quantidade de notas)

mostrar media final
*/

float n1, n2, n3, n4, media_final ;

printf("\nDigite a primeira nota ");
  scanf ("%f", &n1);
printf("\nDigite a segunda nota ");
  scanf ("%f", &n2);
printf("\nDigite a terceira nota ");
  scanf ("%f", &n3);
printf("\nDigite a quarta nota ");
  scanf ("%f", &n4);

 media_final = (n1 + n2 + n3 + n4) / 4;

  printf("\nA media final e %f ", media_final);

   system ("pause");  

return 0;

}