#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
void insertComentado(int v[], int i){
	int eleito = v[i];
	int c = i-1;
	printf("Eleito: %d\n",eleito);
	while(c>=0 && eleito<v[c]){
		printf("Descolando %d\n",v[c]);getch();
		v[c+1] = v[c];//descolar e comparar
		c--;
	}//fim while
	printf("Inserido na posicao %d\n",c+1);
	v[c+1] = eleito;
}
//-----------------------------------
void isortComentado(int v[], int n){
	int i;
	for(i=1;i<n;i++){
		insertComentado(v,i);
		printVetor(v,n);getch();
	}//fim for
	
}
//-----------------------------------
int main(){
	int *vet, n;
	float ini,fim, tempo;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);// alocando o vetor dinamicamente
	geraVet(vet,n);
	printVetor(vet,n);
	isortComentado(vet,n);
	printf("Vetor ordenado:\n");
    printVetor(vet,n);
	return 0;
}//fim main


