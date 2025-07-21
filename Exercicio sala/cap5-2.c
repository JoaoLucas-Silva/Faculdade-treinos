#include <stdio.h> // Inclusão da biblioteca
/* Programa para ordenar tres numeros dados*/

int main() // Função main
{
    float x, y, z, Aux; // Declaração de variáveis

    printf("Digite os tres numeros"); // Pede ao usuário para digitar os três números
    scanf("%f %f %f", &x, &y, &z); // Efetua a leitura dos valores

    printf("Numeros dados: %.2f , %.2f , %.2f \n", x, y, z); // Mostra na tela os números fornecidos

    if ((x > y) || (x > z)) /* verifica se x não é o menor */
    
        if (y < z) /* neste caso y é o menor */
        {
            Aux = x; /* troca os conteúdos de x e de y */
            x = y; // x recebe o valor de y
            y = Aux; // y recebe o valor de Aux
        }
        else /* neste caso z é o menor */
        {
            Aux = x; /* troca os conteúdos de x e de z */
            x = z; // x recebe o valor de z
            z = Aux; // z recebe o valor de Aux
        }
    if (y > z) /* verifica se z e y ainda não estão ordenados */
    {
        Aux = y; /* troca o conteúdo de y e de z */
        y = z; // y recebe o valor de z
        z = Aux; // y recebe o valor de Aux
    }
    
    printf("Numeros ordenados: %.2f , %.2f , %.2f \n", x, y, z); // Mostra os números ordenados
}
