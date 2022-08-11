#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int main(){
	int *vetBs, *vetSs n,i;
	float ini,fim, tempo;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vetBs = malloc(sizeof(int)*n);// alocando o vetor dinamicamente
	vetSs = malloc(sizeof(int)*n);// alocando o vetor dinamicamente
	geraVet(vetBs,n);
	//printf("Dados para o vetor:");
	//for(i=0;i<n;i++)
	//	scanf("%d",&vet[i]);
	//printVetor(vet,n);
	ini = clock();
	bsort(vet,n);
	fim = clock();
	tempo = (fim - ini)/1000;
	//printf("Vetor ordenado:\n");
	//printVetor(vet,n);
	printf("Tempo(s):%.4f\n",tempo);
	printf("Qtde de comparacoes:%d\n",comp);
	return 0;
}
