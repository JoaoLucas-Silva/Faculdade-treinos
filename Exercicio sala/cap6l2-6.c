#include <stdio.h>

int main(int argc, char *argv[]) // Função principal com argumentos de linha de comando
{
    printf("numero de entradas=%d\n", argc); // Exibe o número de argumentos recebidos
    printf("executavel=%s\n", argv[0]); // Exibe o nome do executável
    printf("nome=%s\n", argv[1]); // Exibe o primeiro argumento (nome)
    printf("sobrenome=%s\n", argv[2]); // Exibe o segundo argumento (sobrenome)
}
