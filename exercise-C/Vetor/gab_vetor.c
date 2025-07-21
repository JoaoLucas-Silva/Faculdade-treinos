#include <stdio.h>
#include <math.h>

/*
    VETOR - variável homogênea indexada unidimensional
    um vetor em linguagem C sempre começa em 0 (zero)
    --------------------------------------------------

    Um vetor é  uma variável que armazena mais de um valor, do mesmo tipo.
    referenciadas pelo mesmo nome, e com o uso de um índice, que aponta
    para a localização do valor na variável.

    Relembrando:
    ------------

    Variável - posição de memória que armazena um único valor de um
    determinado tipo, a cada instante da execução de um programa.

    declarando um variável:

        <tipo de dados> <nome da variável>;

        int n;

    entrada, saída e atribuição:
        scanf ("%d",&n);
        printf("O valor e %d", n);
        n = n + 1



    Agora com um vetor:

    declaração:
        <tipo de dados> <nome da variável>[dimensão]

    [dimensão] --> é a quantidade de valores que variável vetor irá armazenar 
                   ou o tamanho da variavel vetor

        int numeros [5];

        declara o vetor numeros, que poderá armazenar até  cinco valores inteiros.               


*/