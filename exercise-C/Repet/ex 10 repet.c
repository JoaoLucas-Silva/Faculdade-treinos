#include <stdio.h>
#include <math.h>

/*
Para um grupo indeterminado de 2 números quaisquer, informar para cada grupo:
a) o maior
b) o menor
c) se são iguais

entrada de dados
    n1, n2, controle

saida de dados
    maior
    menor
    se sao iguais

processamento
    iniciar controle em 1 (sim)
    condicao para continuar alg (while(controle))
        obter n1
        obter n2
        SE n1 > n2
            mostrar mensagem - n1 e maior que n2
        SENAO
            mostrar mensagem - n2 e menor que n1
        SE n1 == n2
            mostrar mensagem - n1 e igual a n2
    fimenquanto 
    while(controle !=1 && controle !=2)
        mostrar mensagem - deseja continuar? 1 para sim 2 para nao

fim alg
*/