#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Calcular as raízes de uma equação do 2º grau, sendo que os valores A, B e C 
são fornecidos pelo usuário, levando em consideração a análise da existência de raízes reais.
*/

/*
 entrada de dados:
  A, B, C, x1, x2

 saída de dados:
  x1, x2 (se forem reais)

 processamento:
 obter A 
  (se A for igual a zero entao nao e uma equacao do segundo grau)
  (senao, obter valor de B e C)
 delta = b^2 - 4 * A * C
  (se delta for igual a 0)
   x1 = -b / 2 * A 
 mostrar mensagem -> delta e igual a 0 e a raiz e x1
  (se delta for menor que zero)
 mostrar mensagem que delta e menor que zero entao nao possui raizes reais
  (se delta for maior que zero)
 x1 = (-b + raizquadrada(delta)) / (2 * A)
 x2 = (-b - raizquadrada(delta)) / (2 * A)
 mostrar mensagem : x1 e igual a ? \n e x2 e igual a ?

  fim alg
*/

int main()
{
   
 float A, B, C, delta, x1, x2;

  printf("\nCalcula uma equacao do segundo grau ");

  printf("\nDigite o valor de A: ");
   scanf("%f", &A);

    if(A == 0)
     printf("\nSe A for 0 entao nao e uma equacao do segundo grau ");
    
    else
        {
         printf("\nDigite o valor de B: ");
           scanf("%f", &B);
         printf("\nDigite o valor de C: ");
           scanf("%f", &C);
        
    
     delta = pow(B, 2.0) - 4 * A * C;        
     if(delta == 0)    
          {
           printf("\nDelta igual a 0");
           x1 = -B / (2 * A);
           printf("\nA raiz calculada e igual a %f",x1);
          }

     else if (delta < 0 )
      printf("\nDelta e menor que 0, entao nao possui raizes reais");

       else 
         {
          x1 = (-B + pow(delta,1.0/2.0)) / (2 * A);
          x2 = (-B - pow(delta,1.0/2.0)) / (2 * A);
          printf("\nx1 e igual a %f",x1);
          printf("\nx2 e igual a %f",x2);  
         }
        }
  return 0;

}