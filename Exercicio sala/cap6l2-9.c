#include <stdio.h>
#include <math.h>

double f(double x) // Função que retorna e^(-x)
{
    return exp(-x);
}

double g(double x) // Função que retorna sin(x)
{
    return sin(x);
}

double Quad(double (*fun)(double), double x) // Função que retorna o quadrado do resultado da função passada como argumento
{
    return ((*fun)(x)) * ((*fun)(x));
}

void main(void) // Função principal
{
    double x = 2; // Valor de x
    printf("f(%f)=%f\n", x, f(x)); // Imprime f(x)
    printf("g(%f)=%f\n", x, g(x)); // Imprime g(x)
    printf("(f(%f))^2=%f\n", x, Quad(f, x)); // Imprime o quadrado de f(x)
    printf("(g(%f))^2=%f\n", x, Quad(g, x)); // Imprime o quadrado de g(x)
}
