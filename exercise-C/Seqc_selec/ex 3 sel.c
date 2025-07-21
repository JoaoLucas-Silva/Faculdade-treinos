#include <stdio.h>
#include <math.h>

/*Obter um valor qualquer e perguntar ao usuário se este valor é em dólares ou em reais. 
Caso sejam dólares, convertê-los para reais. Se forem reais, convertê-los para dólares.
*/

/*
 entrada de dados:
  valor (em dolares ou reais)
  cotacao
  tipo moeda

 saída de dados:
  conversão vice-versa

 processamento:
  obter valor
  obter cotacao 
  obter tipo da moeda ("1 para real 2 para dolar")
  SE (valor == 1 )
    conversao = valor * cotacao (se o valor foi dado em reais)
    mostrar mensagem - o valor em dolares e ?
  SENÃO
    conversao = valor / cotacao
    mostrar mensagem - o valor em reais e ?
*/

int main()
{

float valor, cotacao, novo_v;
int tipo_m;

    printf("\nCalcula a conversao das moedas dolares e real");

    printf("\n\nDigite o valor que deseja ser convertido: ");
    scanf("%f", &valor);

    printf("\nDigite 1 se o valor estiver em reais e digite 2 para valor em dolares: ");
    scanf("%d", &tipo_m);

    printf("\nQual a cotacao atual do dolar? ");
    scanf("%f", &cotacao);

        if (tipo_m == 1)
        {
            novo_v = valor * cotacao;
            printf("\n%0.2f reais sera %0.2f dolares ",valor, novo_v);
        }
        else
        {
            novo_v = valor / cotacao;
            printf("\n%0.2f dolares sera  %0.2f reais ",valor, novo_v);
        }

return 0;
}