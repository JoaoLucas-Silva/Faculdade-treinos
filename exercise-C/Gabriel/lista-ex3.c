#include <stdio.h>

/*
    João Lucas Silva de Souza
    RA: 2649250
*/

/*
    Questão 03 - Um cinema que possui capacidade de 120 lugares está sempre lotado. Certo dia cada
    espectador respondeu a um questionário, onde constava:
    - Sua idade;
    - Sua opinião em relação ao filme, que podia ser: ótimo, bom, regular, ruim ou péssimo.
    Elabore um programa que, recebendo estes dados em dois vetores: o primeiro contém a idade do
    espectador, e o segundo a resposta que cada espectador forneceu à pesquisa, calcule e mostre:
    a. A quantidade de respostas ótimo;
    b. A diferença percentual entre respostas bom e regular;
    c. A média de idade das pessoas que responderam ruim;
    d. A porcentagem de respostas péssimo e a maior idade que utilizou esta opção;
    e. A diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.
    
    
    entradas de dados:
    120 números inteiros fornecidos pelo usuário para preencher um vetor de idades
    120 números inteiros fornecidos pelo usuário para preencher um vetor de opiniões

    saídas de dados:
        a quantidade de respostas ótimo
        a diferença percentual entre respostas bom e regular
        a média de idade das pessoas que responderam ruim
        a porcentagem de respostas péssimo e a maior idade que utilizou esta opção
        a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim

    processamento:
        declarar variáveis:
        int v_id[120], v_op[120], i, qnt_otimo, qnt_bom, qnt_regular, qnt_ruim, idade_ruim
        int qnt_pessimo, maior_id, maior_id_ot, maior_id_ru, dif_1e4
        double dif_percentual, porc_pessimo
        float media_id

        mostrar mensagem "Recebe dados e mostra algumas estatísticas de uma pesquisa feita em um cinema"
        
        mostrar mensagem "Primeiramente recebe a idade de cada espectador"
        para i de 0 a 119:
            mostrar mensagem "Idade do espectador i: "
            ler o valor fornecido pelo usuário e atribuir a v_id[i]
            enquanto v_id[i] <= 0:
                mostrar mensagem "Idade inválida. Por favor, insira uma idade maior que 0."
                ler o valor fornecido pelo usuário e atribuir a v_id[i]

        mostrar mensagem "Opinião de cada espectador"
        para i de 0 a 119:
            mostrar mensagem "Espectador i. Digite [1] para OTIMO, [2] para BOM, [3] para REGULAR, [4] para RUIM e [5] para PESSIMO: "
            ler o valor fornecido pelo usuário e atribuir a v_op[i]
            enquanto v_op[i] < 1 ou v_op[i] > 5:
                mostrar mensagem "Opção inválida. Por favor, insira um número entre 1 e 5."
                ler o valor fornecido pelo usuário e atribuir a v_op[i]

        qnt_otimo = 0
        para i de 0 a 119:
            se v_op[i] == 1:
                incrementar qnt_otimo
        mostrar mensagem "A quantidade de respostas OTIMOS é de qnt_otimo"

        qnt_bom = 0
        qnt_regular = 0
        para i de 0 a 119:
            se v_op[i] == 2:
                incrementar qnt_bom
            se v_op[i] == 3:
                incrementar qnt_regular
        dif_percentual = ((double)(qnt_bom - qnt_regular)) / 120 * 100
        mostrar mensagem "A diferença percentual entre as respostas BOM e REGULAR é de %.2lf porcento", dif_percentual

        qnt_ruim = 0
        idade_ruim = 0
        para i de 0 a 119:
            se v_op[i] == 4:
                idade_ruim = idade_ruim + v_id[i]
                incrementar qnt_ruim
        se qnt_ruim > 0:
            media_id = (float)idade_ruim / qnt_ruim
            mostrar mensagem "A média de idade das pessoas que responderam ruim é de %.2f", media_id
        senão:
            mostrar mensagem "Não há nenhuma resposta ruim"

        qnt_pessimo = 0
        maior_id = 0
        para i de 0 a 119:
            se v_op[i] == 5:
                se v_id[i] > maior_id:
                    maior_id = v_id[i]
                incrementar qnt_pessimo
        se qnt_pessimo > 0:
            porc_pessimo = (float)qnt_pessimo / 120 * 100
            mostrar mensagem "A porcentagem de respostas PESSIMO é de %.2lf porcento, e a maior idade que utilizou essa opção é de maior_id", porc_pessimo
        senão:
            mostrar mensagem "Não houve nenhuma resposta PESSIMO"

        maior_id_ot = 0
        maior_id_ru = 0
        para i de 0 a 119:
            se v_op[i] == 1:
                se v_id[i] > maior_id_ot:
                    maior_id_ot = v_id[i]
            se v_op[i] == 4:
                se v_id[i] > maior_id_ru:
                    maior_id_ru = v_id[i]
        dif_1e4 = maior_id_ot - maior_id_ru
        mostrar mensagem "A diferença entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim é de dif_1e4"
    fimalg

*/

int main(void)
{
    int v_id[120], v_op[120], i, qnt_otimo, qnt_bom, qnt_regular, qnt_ruim, idade_ruim;
    int qnt_pessimo, maior_id, maior_id_ot, maior_id_ru, dif_1e4;
    double dif_percentual, porc_pessimo;
    float media_id;

    printf("\nRecebe dados e mostra algumas estatiscas de uma pesquisa feita em um cinema");

    printf("\nPrimeiramente recebe a idade de cada espectador");
    for(i = 0; i < 120; i++)
    {
        do {
            printf("\nIdade do espectador %d: ", i);
            scanf("%d", &v_id[i]);
            if(v_id[i] <= 0) {
                printf("Idade invalida. Por favor, insira uma idade maior que 0.\n");
            }
        } while(v_id[i] <= 0);
    }

    printf("\nOpiniao de cada espectador");
    for(i = 0; i < 120; i++)
    {
        do {
            printf("\nEspectador %d. Digite [1] para OTIMO, [2] para BOM, [3] para REGULAR, [4] para RUIM e [5] para PESSIMO: ", i);
            scanf("%d", &v_op[i]);
            if(v_op[i] < 1 || v_op[i] > 5) {
                printf("Opcao invalida. Por favor, insira um numero entre 1 e 5.\n");
            }
        } while(v_op[i] < 1 || v_op[i] > 5);
    }

    // Quantidade de respostas otimo
    qnt_otimo = 0;
    for(i = 0; i < 120; i++) // Percorre o vetor para verificar a quantidade de respostas OTIMO
    {
        if(v_op[i] == 1) // Se o valor armazenado no vetor for 1 (otimo), o qnt_otimo recebe +1
            qnt_otimo++;
    }
    printf("\nA quantidade de respostas OTIMOS e de: %d ", qnt_otimo);

    // Diferença percentual entre bom e regular
    qnt_bom = 0;
    qnt_regular = 0;
    for(i = 0; i < 120; i++) // Percorre o vetor para verificar a quantidade de respostas BOM e REGULAR
    {
        if(v_op[i] == 2) // Se o valor armazenado no vetor for 2 (bom), o qnt_bom recebe +1
        {
            qnt_bom++;
        }
        else if (v_op[i] == 3) // Se o valor armazenado no vetor for 3 (regular), o qnt_regular recebe +1
        {
            qnt_regular++;
        }
    }
    dif_percentual = ((double)(qnt_bom - qnt_regular)) / 10 * 100; // Diferença (-) percentual (% = *100) das respostas (120)
    printf("\nA diferenca percentual entre as respostas BOM e REGULAR e de %.2lf porcento", dif_percentual);

    // Média de idade das pessoas que responderam ruim
    qnt_ruim = 0;
    idade_ruim = 0;
    for(i = 0; i < 120; i++) // Percorre o vetor para verificar a quantidade de respostas ruim
    {
        if(v_op[i] == 4) // Igual a 4 (ruim)
        {
            idade_ruim = idade_ruim + v_id[i]; // Soma a idade das pessoas que responderam ruim
            qnt_ruim++;
        }    
    }
    if(qnt_ruim > 0)
    {   
        media_id = (float)idade_ruim / qnt_ruim;
        printf("\nA media de idade das pessoas que responderam ruim e de %.2f", media_id);
    }
    else
        printf("\nNao ha nenhuma resposta ruim");

    // Porcentagem de respostas péssimo e a maior idade que utilizou esta opção
    qnt_pessimo = 0;
    maior_id = 0; 
    for(i = 0; i < 120; i++) // Percorre o vetor para verificar a quantidade de respostas pessimo
    {
        if(v_op[i] == 5) // Igual a 5 (pessimo)
        {      
            if(v_id[i] > maior_id) // Faz a comparação entre as idades
            { 
                maior_id = v_id[i];
            }
            qnt_pessimo++;
        }    
    }
    if(qnt_pessimo > 0)
    {
        porc_pessimo = (float)qnt_pessimo / 10 * 100; // Calculando a porcentagem de respostas pessimo
        printf("\nA porcentagem de respostas pessimo e de %.2lf porcento, e a maior idade que utilizou essa opcao e de %d", porc_pessimo, maior_id);
    }
    else
    {
        printf("\nNao houve nenhuma resposta PESSIMO");
    }

    // Diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.
    maior_id_ot = 0;
    maior_id_ru = 0;
    for(i = 0; i < 120; i++)
    {
        if(v_op[i] == 1) // Igual a 1 (otimo)
        {      
            if(v_id[i] > maior_id_ot) // Faz a comparação entre as idades
            { 
                maior_id_ot = v_id[i];
            }
        }
        else if(v_op[i] == 4) // Igual a 4 (ruim)
        {
            if(v_id[i] > maior_id_ru) // Faz a comparação entre as idades
            {
                maior_id_ru = v_id[i];
            }
        }         
    }
    dif_1e4 = maior_id_ot - maior_id_ru;
    printf("\nA diferenca entre a maior idade que respondeu otimo e a maior idade que respondeu ruim e de %d", dif_1e4);

    return 0;
}
