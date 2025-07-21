#include <stdio.h> // Inclusão da biblioteca

int main() // Função main
{
    int Mdc, a, b; // Declaração de variáveis

    int MaxDivCom(int x, int y); // Chamamento da função com as passagens de argumentos
    
    printf("Digite os dois inteiros"); //Pede ao usuário para digitar 2 números inteiros
    scanf("%d %d", &a, &b); // Efetua a leitura dos dois valores

    Mdc = MaxDivCom(a, b); // Faz com que a variável "Mdc" receba o valor da função
    printf("Mdc(%d, %d) = %d \n", a, b, Mdc); // Mostra na tela os valores de entrada e logo em seguida o Máximo divisor comum
}

int MaxDivCom(int x, int y) // Criação da função com passagem de parâmetro
{
    int Resto; // Declaração de variáveis locais

    Resto = x % y; // Resto recebe o valor do resto da divisão de x/y

    while (Resto != 0) // Um loop que inicia/finaliza se Resto for 0
    {   
        x = y; // x recebe o valor de y
        y = Resto; // y recebe o valor de Resto
        Resto = x % y; // Resto recebe o valor do resto da divisão de x/y
    }
    return (y); // Função que se chamada retorna o valor de y para o programa
}
