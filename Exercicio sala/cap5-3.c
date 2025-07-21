/* Programa para determinar o número de dias entre duas datas dadas */
#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída
#include <conio.h> // Inclusão da biblioteca para funções de console (ex. getch())

/* Verifica se um ano é bissexto (retorno: Sim-1/Nao-0) */
int EhBissexto(int Ano) // Função que determina se o ano é bissexto
{
    // Retorna 1 se o ano for bissexto, caso contrário, retorna 0
    return ((Ano % 4 == 0) && ((Ano % 100 != 0) || (Ano % 400 == 0))); 
}

/* Retorna o número de dias 31 ocorridos até o mês dado */
int NumDias31(int Mes) // Função que retorna quantos meses com 31 dias já ocorreram
{
    if (Mes < 9) // Para os meses de janeiro a agosto
        return Mes / 2; // Meses ímpares até agosto têm 31 dias
    else // Para meses de setembro a dezembro
        return (Mes + 1) / 2; // Ajusta para contar outubro e dezembro
}

/* Retorna o número de dias de um ano até uma data dada */
int NumDiasAteUmaData(int Dia, int Mes, int Ano) // Função que calcula os dias desde o início do ano até uma data
{
    int NumDias; // Declaração de variáveis locais
    
    // Calcula o número de dias considerando todos os meses com 30 dias
    NumDias = 30 * (Mes - 1); // Multiplica a quantidade de meses anteriores a "Mes" por 30
    
    // Acrescenta os dias dos meses com 31 dias e o dia corrente
    NumDias = NumDias + NumDias31(Mes) + Dia;  // Soma os dias dos meses de 31 dias e os dias do mês atual
    
    // Ajusta o número de dias de fevereiro (se ele já passou)
    if (Mes > 2) // Se já passou fevereiro
    {
        if (EhBissexto(Ano)) // Se o ano for bissexto
            NumDias = NumDias - 1; // Subtrai 1, pois fevereiro teve 29 dias
        else // Se o ano não for bissexto
            NumDias = NumDias - 2; // Subtrai 2, pois fevereiro teve 28 dias
    }

    return NumDias; // Retorna o número total de dias até a data
}

/* Retorna o número de dias restantes no ano após uma data dada */
int NumDiasAposUmaData(int Dia, int Mes, int Ano) // Função que calcula o número de dias restantes no ano
{   
    // Nessa questão em si os números deveriam ser 366 e 365, não?
    if (EhBissexto(Ano)) // Se o ano for bissexto
        return 367 - NumDiasAteUmaData(Dia, Mes, Ano); // 367 dias porque ano bissexto tem 366 dias, mais 1 para ajuste
    else // Se o ano não for bissexto
        return 366 - NumDiasAteUmaData(Dia, Mes, Ano); // 366 dias para ano comum
}

/* Retorna o número de anos bissextos entre dois anos dados */
int NumAnosBissextos(int Ano1, int Ano2) // Função que calcula quantos anos bissextos ocorreram entre dois anos
{
    int Aux, Mult4, Mult100, Mult400; // Declaração de variáveis locais

    Aux = Ano2 - 1; // Ajuste do segundo ano para contar de Ano1 até Ano2-1
    // Calcula quantos múltiplos de 4, 100 e 400 ocorrem entre os anos
    Mult4 = (Aux - (Aux % 4) - Ano1 + (Ano1 % 4)) / 4; // Quantos múltiplos de 4 (anos bissextos)
    Mult100 = (Aux - (Aux % 100) - Ano1 + (Ano1 % 100)) / 100; // Quantos múltiplos de 100 (não bissextos)
    Mult400 = (Aux - (Aux % 400) - Ano1 + (Ano1 % 400)) / 400; // Quantos múltiplos de 400 (são bissextos)

    return Mult4 - Mult100 + Mult400; // Subtrai os múltiplos de 100 e adiciona os de 400
}

int main()
{
    int Dia1, Mes1, Ano1, Dia2, Mes2, Ano2; // Variáveis para armazenar as duas datas
    int Anos, NumDias, DiasDoAnoFinal, DiasDoAnoInicial; // Variáveis auxiliares para o cálculo de dias

    // Removeu a função clrscr() para evitar erro ao executar

    printf("Data inicial (dd/mm/aaaa)\n"); // Solicita a data inicial ao usuário
    scanf("%d/%d/%d", &Dia1, &Mes1, &Ano1); // Lê a data inicial
    
    printf("Data final (dd/mm/aaaa)\n"); // Solicita a data final ao usuário
    scanf("%d/%d/%d", &Dia2, &Mes2, &Ano2); // Lê a data final

    Anos = Ano2 - Ano1 - 1; // Calcula a diferença de anos entre as duas datas (sem contar os anos completos)
    
    // Calcula os dias desde o início do segundo ano até a data final
    DiasDoAnoFinal = NumDiasAteUmaData(Dia2, Mes2, Ano2); 
    // Calcula os dias desde a data inicial até o fim do primeiro ano
    DiasDoAnoInicial = NumDiasAposUmaData(Dia1, Mes1, Ano1); 
    // Calcula o número total de dias entre as duas datas
    NumDias = Anos * 365 + DiasDoAnoFinal + DiasDoAnoInicial + NumAnosBissextos(Ano1, Ano2); 

    // Exibe a data inicial, data final e o número de dias entre elas
    printf("\nData inicial: %d/%d/%dData final: %d/%d/%d Numero de dias: %d", 
           Dia1, Mes1, Ano1, Dia2, Mes2, Ano2, NumDias); 
    
    getch(); // Espera o usuário pressionar uma tecla para finalizar o programa
}
