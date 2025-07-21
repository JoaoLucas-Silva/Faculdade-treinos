#include <stdio.h>
#include <stdlib.h>

/*
    Teste de passagem de argumento por fora do programa (CMD)
*/

int main (int argc, char* argv[])
{
    printf("\nArgumento argc: %d\n", argc);

    // Exibir os argumentos passados pela linha de comando
    for (int i = 0; i < argc; i++)
    {
        printf("Argumento %d: %s\n", i, argv[i]);
    }

    system("pause");

    return 0;
}
