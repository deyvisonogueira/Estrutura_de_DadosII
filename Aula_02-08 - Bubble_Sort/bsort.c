#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int comp=0;
void bsort(int v[], int n){
	int i,j;
	for(i=1;i<n;i++){
		for(j=1;j<n-i;j++)
			if(v[j]>v[j+1]){
				troca(&v[j],&v[j+1]);
			}//fim if
		}//fim for j
	}//fim for i
//---------------------------------------
void bsortComentado(int v[], int n){ 
	int i,j;
	for(i=1;i<n;i++){ //fases
	  printf("Fase %d\n",i);getch();//
	  printVetor(v,n);//
		for(j=1;j<n-i;j++)// compara��es
		   printf("%d>%d?\n",v[j],v[j+1]);getch();//
		   comp++;
			if(v[j]>v[j+1]){
				printf("Trocando %d com %d\n",v[j],v[j+1]);
				troca(&v[j],&v[j+1]);
				printVetor(v,n);
			}//fim if
		}//fim for j
	}//fim for i
//---------------------------------------
int main(){
	int *vet,i,n;
	printf("Tamanho do vetor: ");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n); //alocando vetor dinamicamente
	//geraVet(vet, n);
	printf("Dados para o vetor: ");
	for(i=0;i<n;i++)
	    scanf("%d",&vet[i]);
	printVetor(vet,n);
	bsortComentado(vet,n);
	printf("Vetor ordenado: \n");
	printVetor(vet,n);	
	printf("Quantidade de compraracoes: %d\n");
	return 0;
}
//---------------------------------------
