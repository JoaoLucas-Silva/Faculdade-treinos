#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

/*Escreva um programa em linguagem C que pergunte para a pessoa informar dois números inteiros e 
depois forneça o resultado da soma, subtração, multiplicação e divisão entre os números informados. 
Mostre o resultado na tela de forma clara usando a formatação correta do comando printf.

entrada de dados:
n1, n2

saída de dados:
soma, sub, mult, div

processamento:
obter n1, n2

soma = n1 + n2
sub = n1 - n2
mult = n1 * n2
div = n1 / n2
*/

int n1, n2, soma, sub, mult, div;

printf("Obter dois numeros inteiros e mostrar o resultado da soma, subtracao, multiplicacao e divisao ");

 printf("\nDigite o primeiro numero ");
  scanf("%d", &n1);
 printf("\nDigite o segundo numero ");
  scanf ("%d", &n2);

  soma = (n1 + n2);
  sub = (n1 - n2);
  mult = (n1 * n2);
  div = (n1 / n2); //lembrar que nesse caso só mostra o resultado INTEIRO da div (o que está na chave)

  printf("\nO resultado da soma desses dois numeros e de %d ", soma);

  printf("\nO resultado da subtracao desses dois numeros e de %d ", sub);

  printf("\nO resultado da multiplicacao desses dois numeros e de %d ", mult);

  printf("\nO resultado da divisao desses dois numeros e de %d ", div);


 system ("pause");

return 0;    
}