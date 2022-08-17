#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
long long comp=0;
void insert(int v[], int i){
	int eleito = v[i];
	int c = i-1;
	while(c>=0 && eleito<v[c]){
		v[c+1] = v[c];//descolar e comparar
		c--;
	}//fim while
	comp++;
	v[c+1] = eleito;
}
//-----------------------------------
void isort(int v[], int n){
	int i;
	for(i=1;i<n;i++){
		insert(v,i);
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
	isort(vet,n);
	printf("Vetor ordenado:\n");
    printVetor(vet,n);
    printf("Quantidade de comparacoes: %d\n",comp);    
	return 0;
}//fim main
