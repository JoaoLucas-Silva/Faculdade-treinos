#include <stdio.h>
#include <math.h>

//treinar; DO; WHILE; FOR.

/*Para cada um de 10 numeros fornecidos pelo usuário informar se
este numero e par, impar, positivo ou negativo.
*/

/*

 entrada de dados
    conjunto de 10 numeros

 saida de dados
    para cada numero do conjunto de entrada
    par,
    impar,
    positivo ou
    negativo.

 processameto
    inicializar o contador em 0
    enquanto o contador de numeros for menor do que 10
    mostrar mensagem par, impar, positivo ou negativo
    fimenquanto
*/

int main ()
{

int n, contador;

printf("\nLe um conjunto de dez numeros e mostra o par, impar, positivo e negativo");

   for(contador = 0; contador < 10; contador = contador + 1)
   {
      printf("\n\nDigite um numero inteiro:");
      scanf("%d",&n);

     if(n % 2 == 0)
      printf("\nO numero %d e par", n);
     else
     {
         printf("\n\nO numero %d e impar", n);
     }

     if(n < 0)
         printf("\nO numero e negativo ");
     else
     {
         printf("\nO numero e positivo ");

     } 
   }

return 0;
}