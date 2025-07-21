#include <stdio.h>
#include <math.h>

/*
Fazendo exercicio da aula 11 de Lógica de programação do guanabara.
*/

int main(void)
{
    int c, t1, t2, t3;

    t1 = 0;
    t2 = 1;

    printf("  %d",t1);
    printf("  %d",t2);
    for(c = 1; c < 14; c++)
    {
        t3 = t1 + t2;
			t1 = t2;
			t2 = t3;
			printf("  %d", t3);
    }
    return 0;
}