#include <stdio.h>
#include <math.h>

//Verificar se o numero é par ou ímpar

int main ()
{
    int n;

    printf("\nVerifica se o numero e par ou impar");

    printf("\nDigite o numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf ("\nO numero %d e par", n);
    else
    {
        printf("\nO numero %d e impar", n);
    }

return 0;
}