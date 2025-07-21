#include <stdio.h>

#define max_digitos 5

/*
    João Lucas Silva de Souza
    RA: 2649250
*/

/*

    Questão 06 - Faça um programa que leia dois números a e b (positivos menores que 10000) e:
    a) Crie um vetor onde cada posição é um algarismo do número. A primeira posição é o algarismo menos
    significativo;
    b) Crie um vetor que seja a soma de a e b, mas faça-o usando apenas os vetores construídos
    anteriormente.
    Dica: some as posições correspondentes. Se a soma ultrapassar 10, subtraia 10 do resultado e some 1 à
    próxima.

    entradas de dados:
        dois números inteiros a e b (positivos menores que 10000)

    saídas de dados:
        vetor a com os algarismos de a
        vetor b com os algarismos de b
        vetor soma com a soma de a e b

    processamento:
        declarar variáveis:
            int a, b, i, aux
            int vetor_a[5], vetor_b[5], soma[6]
    
        mostrar mensagem ("Digite o valor de a:")
        ler a
    
        mostrar mensagem ("Digite o valor de b:")
        ler b

        inicializar i com 0

        faça
            atribuir (a % 10) a vetor_a[i]
            atribuir (b % 10) a vetor_b[i]
            atribuir (a / 10) a a
            atribuir (b / 10) a b
            incrementar i
        enquanto (a > 0 ou b > 0)

        mostrar mensagem ("Vetor a:")
        para i de 0 até 4 faça
            mostrar mensagem (vetor_a[i])
    
        mostrar mensagem ("Vetor b:")
        para i de 0 até 4 faça
            mostrar mensagem (vetor_b[i])

        inicializar i com 0
        inicializar aux com 0

        faça
            soma[i] = vetor_a[i] + vetor_b[i] + aux
            se soma[i] >= 10
                soma[i] = soma[i] - 10
                aux = 1
            senão
                aux = 0
            incrementar i
        enquanto (i < 6)

        mostrar mensagem ("Soma dos vetores:")
        para i de 0 até 5 faça
            mostrar mensagem (soma[i])
fimalgoritmo

*/

int main(void)
{
    int a, b;
    int vetor_a[max_digitos], vetor_b[max_digitos];
    int i, aux;
    int tamanho_a = 0, tamanho_b = 0;

    printf("Digite o numero a: ");
    scanf("%d", &a);

    printf("Digite o numero b: ");
    scanf("%d", &b);

    // Preencher o vetor_a com os algarismos de a
    aux = a;
    while (aux > 0) 
    {
        vetor_a[tamanho_a] = aux % 10;
        aux = aux / 10;
        tamanho_a++;
    }

    // Preencher o vetor_b com os algarismos de b
    aux = b;
    while (aux > 0) 
    {
        vetor_b[tamanho_b] = aux % 10;
        aux = aux / 10;
        tamanho_b++;
    }

    // Exibir vetor_a
    printf("Vetor A (menor significante primeiro): ");
    for (i = 0; i < tamanho_a; i++)
    {
        printf("%d ", vetor_a[i]);
    }
    printf("\n");

    // Exibir vetor_b
    printf("Vetor B (menor significante primeiro): ");
    for (i = 0; i < tamanho_b; i++)
    {
        printf("%d ", vetor_b[i]);
    }
    printf("\n");

    // Inicializar o vetor resultado
    int max_tamanho = (tamanho_a > tamanho_b ? tamanho_a : tamanho_b) + 1;
    int resultado[max_tamanho];
    int carry = 0; // Transporte
    for (i = 0; i < max_tamanho; i++) 
    {
        int soma = carry;
        if (i < tamanho_a) 
        {
            soma += vetor_a[i];
        }
        if (i < tamanho_b) 
        {
            soma += vetor_b[i];
        }
        resultado[i] = soma % 10;
        carry = soma / 10;
    }

    // Exibir o resultado
    printf("Soma (menor significante primeiro): ");
    for (i = 0; i < max_tamanho; i++)
    {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
