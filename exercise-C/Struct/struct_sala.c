#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Q 10

typedef struct {
    int hora;
    int min;
    int seg;
} td_hora;

typedef struct {
    int dia;
    int mes;
    int ano;
} td_data;

typedef struct {
    td_hora horario;
    td_data data;
    char descricao[300];
} td_compromisso;

// Funcoes declaradas
void preenche_vetor_de_compromissos(td_compromisso vc[], int d);
void imprime_vetor_de_compromissos(td_compromisso vc[], int d);
int compararCompromisso(const void *a, const void *b);
int verifica_data(td_data *d);
int verifica_horario(td_hora *h);
void le_data(td_data *d);
void le_horario(td_hora *h);

int main() {
    td_compromisso agenda[Q];
    preenche_vetor_de_compromissos(agenda, Q);
    imprime_vetor_de_compromissos(agenda, Q);

    // Ordenando o vetor de compromissos
    qsort(agenda, Q, sizeof(td_compromisso), compararCompromisso);

    printf("\nCompromissos Ordenados:\n");
    imprime_vetor_de_compromissos(agenda, Q);

    return 0;
}

void preenche_vetor_de_compromissos(td_compromisso vc[], int d) {
    for (int i = 0; i < d; i++) {
        printf("\nDigite os dados do compromisso %d\n", i + 1);
        le_data(&vc[i].data);
        le_horario(&vc[i].horario);
        printf("Descricao: ");
        scanf(" %[^\n]%*c", vc[i].descricao);  // Lendo string com espacos
    }
}

void imprime_vetor_de_compromissos(td_compromisso vc[], int d) {
    for (int i = 0; i < d; i++) {
        printf("\nData ......: %02d/%02d/%04d - %02d:%02d:%02d",
               vc[i].data.dia, vc[i].data.mes, vc[i].data.ano,
               vc[i].horario.hora, vc[i].horario.min, vc[i].horario.seg);
        printf("\nDescricao .: %s", vc[i].descricao);
        printf("\n--------------------------------------------------");
    }
}

int compararCompromisso(const void *a, const void *b) {
    td_compromisso *comp1 = (td_compromisso *)a;
    td_compromisso *comp2 = (td_compromisso *)b;

    if (comp1->data.ano != comp2->data.ano)
        return comp1->data.ano - comp2->data.ano;
    if (comp1->data.mes != comp2->data.mes)
        return comp1->data.mes - comp2->data.mes;
    if (comp1->data.dia != comp2->data.dia)
        return comp1->data.dia - comp2->data.dia;
    if (comp1->horario.hora != comp2->horario.hora)
        return comp1->horario.hora - comp2->horario.hora;
    if (comp1->horario.min != comp2->horario.min)
        return comp1->horario.min - comp2->horario.min;
    return comp1->horario.seg - comp2->horario.seg;
}

void le_data(td_data *d) {
    do {
        printf("Digite a data (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &d->dia, &d->mes, &d->ano);
    } while (!verifica_data(d));
}

void le_horario(td_hora *h) {
    do {
        printf("Digite o horario (hh:mm:ss): ");
        scanf("%d:%d:%d", &h->hora, &h->min, &h->seg);
    } while (!verifica_horario(h));
}

int verifica_data(td_data *d) {
    if (d->ano <= 0 || d->mes < 1 || d->mes > 12 || d->dia < 1 || d->dia > 31)
        return 0;
    if ((d->mes == 4 || d->mes == 6 || d->mes == 9 || d->mes == 11) && d->dia > 30)
        return 0;
    if (d->mes == 2) {
        int bissexto = (d->ano % 4 == 0 && (d->ano % 100 != 0 || d->ano % 400 == 0));
        if (d->dia > 29 || (d->dia == 29 && !bissexto))
            return 0;
    }
    return 1;
}

int verifica_horario(td_hora *h) {
    return (h->hora >= 0 && h->hora < 24 && h->min >= 0 && h->min < 60 && h->seg >= 0 && h->seg < 60);
}