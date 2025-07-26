#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// struct; pointer; alocação
// uma função pra preencher ponto 1 e ponto 2, e na função preencher x e y
// fazer mais uma função que calcula a distancia entre os dois pontos (d = dist(p1, p2);)
// d retorna a distancia (float)

struct{
	float x, y;
} typedef ponto;


void preencher(ponto *prench);
float distancia(ponto *p1, ponto *p2);

int main(){
	ponto *p1, *p2;
	float d;
	
	p1 = (ponto*)malloc(sizeof(ponto));
	p2 = (ponto*)malloc(sizeof(ponto));
	
	preencher(p1);
	preencher(p2);
	
	d = distancia(p1, p2);
    printf("\nDistancia entre os pontos: %.2f\n", d);
	
	free(p1);
	free(p2);
	
	return 0;
	
}

void preencher(ponto *prench){
    printf("\nDigite o valor de x: ");
    scanf("%f", &prench->x);
    printf("Digite o valor de y: ");
    scanf("%f", &prench->y);
}

float distancia(ponto *pp1, ponto *pp2){

    return sqrt((pp2->x - pp1->x) * (pp2->x - pp1->x) + (pp2->y - pp1->y) * (pp2->y - pp1->y));
}
