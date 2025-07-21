#include <stdio.h>
#include <math.h>

int main ()
{
 float num, f;
 int c;

 printf("Calcular as multiplicacoes do numero");

 c = 1;

do
{
 printf("Digite o numero desejado: ");
 scanf("%f", &num);

 f = num * c;
 printf ("O resultado e %f", f);
c = c + 1;
} 
 while (c <= 20);

 return 0;
}