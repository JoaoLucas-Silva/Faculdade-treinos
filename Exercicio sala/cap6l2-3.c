#include <stdio.h>
#include <math.h> // Inclusao da biblioteca math.h

void main(void) // Funcao principal
{
    double a = 2, b = 3, tmp; // Declara as variaveis a, b e tmp do tipo double

    printf("a=%f, b=%f\n", a, b); // Exibe os valores iniciais de a e b
    tmp = a; // Armazena o valor de a em tmp
    a = b; // Atribui o valor de b a a
    b = tmp; // Atribui o valor de tmp (anteriormente a) a b
    printf("a=%f, b=%f\n", a, b); // Exibe os novos valores de a e b
}
