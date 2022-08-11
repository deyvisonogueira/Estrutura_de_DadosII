#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
long long comp=0;
void bsort(int v[], int n){
	int i,j;
	for(i=1;i<n;i++){ // fases
		for(j=0;j<n-i;j++){ // comparações
			comp++; //
			if(v[j]>v[j+1]){
				troca(&v[j],&v[j+1]);
			}// fim if
		}// fim for j
	}// fim for i
}
//-------------------------
void bsortComentado(int v[], int n){
	int i,j;
	for(i=1;i<n;i++){ // fases
	  printf("Fase %d\n",i);getch(); //
	  printVetor(v,n);//
		for(j=0;j<n-i;j++){ // comparações
		   printf("%d>%d?\n",v[j],v[j+1]);getch(); //
		   comp++;//
			if(v[j]>v[j+1]){
				printf("Trocando %d com %d\n",v[j],v[j+1]);//
				troca(&v[j],&v[j+1]);
				printVetor(v,n); getch();//
			}// fim if
		}// fim for j
	}// fim for i
}
//-----------------------------------
int main(){
	int *vet, n,i;
	float ini,fim, tempo;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);// alocando o vetor dinamicamente
	geraVet(vet,n);
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
