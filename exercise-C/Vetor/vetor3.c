#include <stdio.h>
int main()
{
    int numero, binario[64], i;

    printf("\nConverte um numero inteiro positivo base 10 (decimal) para base 2 (binario)\n");
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &numero);

    i = 0;
    while (numero != 0)
    {
        binario[i] = numero % 2;  // Armazena o resto da divisão por 2 (0 ou 1)
        numero = numero / 2;      // Atualiza o número dividindo por 2
        i = i + 1;                // Incrementa o índice
    }

    i = i - 1;  // Ajusta o índice para apontar para o último dígito válido

    while (i >= 0)
    {
        printf("%d", binario[i]);  // Imprime os dígitos binários na ordem inversa
        i = i - 1;                 // Decrementa o índice
    }

    printf("\n");

    return 0;
}
