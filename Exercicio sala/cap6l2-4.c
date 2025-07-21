#include <stdio.h>
#include <math.h> // Inclusao da biblioteca math.h

void troca(double *a, double *b) // Funcao que troca os valores de duas variaveis
{
    double tmp = *a; // Armazena o valor de a (apontado por *a) em tmp
    *a = *b; // Atribui o valor de b (apontado por *b) a a (apontado por *a)
    *b = tmp; // Atribui o valor armazenado em tmp a b (apontado por *b)
}

void main(void) // Funcao principal
{
    double a = 2, b = 3; // Declara as variaveis a e b do tipo double
    printf("a=%f, b=%f\n", a, b); // Exibe os valores iniciais de a e b
    troca(&a, &b); // Chama a funcao troca passando os enderecos de a e b
    printf("a=%f, b=%f\n", a, b); // Exibe os novos valores de a e b apos a troca
}
