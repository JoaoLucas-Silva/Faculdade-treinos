#include <stdio.h>
#include <math.h>

//Creuza vai  pegar um empréstimo no banco com um acrescimo de 20%

int main()
{
    float v_emprestimo,  parcelas, vd_parcela;

        printf("Qual o valor para emprestimo? ");
        scanf("%f", &v_emprestimo);

        printf("\nEm quantas parcelas?");
        scanf("%f", &parcelas);

        vd_parcela =  (v_emprestimo * 0.2 + v_emprestimo) / parcelas;

        printf("\nVou pagar %0.2f parcelas de %0.2f reais ", parcelas, vd_parcela);

 return 0;
}