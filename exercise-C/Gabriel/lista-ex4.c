#include <stdio.h>

/*
    João Lucas Silva de Souza
    RA: 2649250
*/

/*

    Questão 04 - Um pecuarista possui uma determinada quantidade de bois, que possuem um identificador
    numérico (de 1 a n) cada um. Faça um programa que:
    a. Receba o peso de cada boi, um por vez, e o armazene em um vetor (utilize um vetor do tipo float com
    dimensão 1000). A entrada de dados termina quando o limite do vetor for atingido, ou quando o peso
    digitado for 0;
    b. Mostre a lista de todos os bois com seus identificadores e os identificadores do boi mais gordo e do boi
    mais magro. Se houver dois ou mais bois mais gordos ou mais magros mostrar o de menor identificador;

    entradas de dados:
        pesos dos bois fornecidos pelo usuário (até 1000 valores ou até digitar 0)

    saídas de dados:
        lista com os pesos dos bois e identificadores
        identificador do boi mais gordo e seu peso
        identificador do boi mais magro e seu peso

    processamento:
        declarar variáveis:
            float peso, peso_boi[1000], boi_gordo, boi_magro
            int i, qnt_boi, indice_gordo, indice_magro

        mostrar mensagem ("le o peso de uma determinada quantidade de bois e mostra a lista de todos eles com seus respectivos identificadores.")
        mostrar mensagem ("mostra os identificadores do boi mais gordo e mais magro. se houver 2 ou mais bois mais gordos ou mais magros exibe o de menor identificador.")

        mostrar mensagem ("digite o peso de cada boi. digite 0 para finalizar")
        inicializar i com 0
        inicializar qnt_boi com 0

        faça
            mostrar mensagem ("peso do boi %d: ", i)
            ler peso

            se peso > 0
                atribuir peso a peso_boi[i]
                incrementar i
                incrementar qnt_boi
            senão
                mostrar mensagem ("peso invalido. fim da entrada de dados.")
        enquanto (i < 1000 e peso > 0)

        se qnt_boi > 0
            mostrar mensagem ("peso de cada boi")
            para i de 0 até qnt_boi - 1
                mostrar mensagem ("boi i: peso_boi[i]")

            inicializar boi_gordo com peso_boi[0]
            inicializar boi_magro com peso_boi[0]
            inicializar indice_gordo com 0
            inicializar indice_magro com 0

            para i de 1 até qnt_boi - 1
                se boi_gordo < peso_boi[i]
                    atribuir peso_boi[i] a boi_gordo
                    atribuir i a indice_gordo
                se boi_magro > peso_boi[i]
                    atribuir peso_boi[i] a boi_magro
                    atribuir i a indice_magro

            mostrar mensagem ("o boi mais gordo e o boi %d com peso %f", boi indice_gordo, boi_gordo)
            mostrar mensagem ("o boi mais magro e o boi %d com peso %f", boi indice_magro, boi_magro)
        senão
            mostrar mensagem ("nenhum peso valido foi inserido.")
    fimalg

*/

int main(void)
{
    float peso, peso_boi[1000], boi_gordo, boi_magro;
    int i, qnt_boi, indice_gordo, indice_magro;

    printf("\nLe o peso de uma determinada quantidade de bois e mostra a lista de todos eles com seus respectivos identificadores.");
    printf("\nMostra os identificadores do boi mais gordo e mais magro.\nSe houver 2 ou mais bois mais gordos ou mais magros exibe o de menor identificador.");

    printf("\n\nDigite o peso de cada boi. Digite 0 para finalizar");
    i = 0; // Inicializa o índice em 0
    qnt_boi = 0; // Inicializa a quantidade de bois em 0

    do
    {
        printf("\nPeso do boi %d: ", i);
        scanf("%f", &peso);

        if(peso > 0) // Verifica se o peso é maior que 0, para ser válido
        {   
            peso_boi[i] = peso;
            i++;
            qnt_boi++;    
        }
        else
        { 
            printf("\nPeso invalido. Fim da entrada de dados."); 
        }

    }while (i < 1000 && peso > 0); // A verificação dos pesos continua enquanto for menor que o tamanho do vetor e o peso for válido

    if(qnt_boi > 0)
    {
    printf("\n\nPeso de cada boi\n"); // Exibe o peso válido de cada boi com seu respectivo índice
    for(i = 0; i < qnt_boi; i++)
        printf("Boi %d: %.3f\n", i, peso_boi[i]);
    
    // Inicializa com o primeiro peso
    boi_gordo = peso_boi[0];
    boi_magro = peso_boi[0];

    // Inicializa os índices em 0
    indice_gordo = 0;
    indice_magro = 0;
    for(i = 1; i < qnt_boi; i++) 
    {
        if(boi_gordo < peso_boi[i]) // Verificação de boi mais gordo
        {
            boi_gordo = peso_boi[i];
            indice_gordo = i;
        }
        if(boi_magro > peso_boi[i]) // Verificação de boi mais magro
        {
            boi_magro = peso_boi[i];
            indice_magro = i;
        }
    }

    // Exibir os índices (de menor identificador) e o peso do boi mais gordo e mai magro
    printf("\nO boi mais gordo e o boi %d com peso %.3f", indice_gordo, boi_gordo);
    printf("\nO boi mais magro e o boi %d com peso %.3f", indice_magro, boi_magro);
    }
    else
    printf("\n\nNenhum peso valido foi inserido.");
    
    return 0;
}