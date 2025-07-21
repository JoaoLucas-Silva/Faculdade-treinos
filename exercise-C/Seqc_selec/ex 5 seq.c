#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/*
Calcular a quantidade de latas de tinta necessárias, e também o custo, para pintar um tanque cilíndrico 
de combustível, em que são fornecidos a altura e o raio do mesmo, além do preço da lata de tinta.

Sabe-se que:

a)cada lata contém 5 litros de tinta;

b)cada litro de tinta pinta 3 metros quadrados;
 */

 /*
  entrada de dados:
   altura, raio, preço da lata
  
  saída de dados:
   quantidade de latas necessarias e o custo

  processamento:
   obter a altura, raio, preço da lata

   area do cilindro = 2 * pi * raio * (r + h)
   
   quantidade de latas necessarias = area do cilindro / 15 
   //a divisao e feita por 15 pois cada litro de tinta pinta 3 metros quadrados e cada lata contem 5 litros de tinta

   custo = quantidade de latas necessarias * preço
 */

 int main ()
 {
  
  float alt, r, preco_l, area_c, qnt_lt, custo;

    printf("\nCalcula a quantidade de latas de tintas necessarias para pintar um tanque cilindrico e tambem o custo");

      printf("\n\nDigite a altura, o raio do cilindro e o preco da lata, separados por /: ");
       scanf("%f/%f/%f", &alt, &r, &preco_l);
         
         area_c = 2 * M_PI * r  * (r + alt);
           qnt_lt = area_c / 15;
             custo = qnt_lt * preco_l;

      printf("A quantidade de latas necessarias para pintar um cilindro de area %2.f e de %2.f, \nja o custo total e de %2.f", area_c, qnt_lt, custo);       


return 0;

 }