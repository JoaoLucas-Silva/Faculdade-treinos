#include <stdio.h>
int main()
{
    float *a, *b; // Declaração dos ponteiros
    float Aux, x, y; // Declaração das variáveis
    x = 1; /* o conteúdo de x agora é igual a 1 */
    y = 2; /* o conteúdo de y agora é igual a 2 */
    a = &x; /* a aponta para x */
    b = &y; /* b aponta para y */
    Aux = *a; /* o conteúdo de Aux agora é 1 (conteúdo de x) */
    *a = *b; /* o conteúdo de x agora é 2 (conteúdo de y) */
    *b = Aux; /* o conteúdo de y agora é 1 */
    printf("x = %.2f e y = %.2f \n", x, y);
}