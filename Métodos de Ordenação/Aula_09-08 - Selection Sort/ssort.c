#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int comp = 0;
//------------------------------------
int minIndex(int v[], int i, int n){
	int j, imenor = i;
	for(j=i+1;j<n;j++)
	    if(v[j]<v[imenor])
	         imenor=j;	
	return imenor;	
}
//------------------------------------
void ssort(int v[], int n){
	int i, indiceMenor;
	for(i=0;i<n;i++)
	    indiceMenor = minIndex(v,i,n);
	    troca(&v[i], &v[indiceMenor]);
}//fim for
//------------------------------------
int minIndexComentado(int v[], int i, int n){
	int j, imenor = i;
	printf("Indice base:%d\n",i);//
	printVetor(v,n); getch();//
	for(j=i+1;j<n;j++){
		comp++; //Contando as comparações
		if(v[j]<v[imenor]){		
	         imenor=j;
	         printf("Menor [%d]=%d\n",imenor, v[imenor]);
	     }//fim if
	}//fim for
	printf("Retornando menor: %d\n",v[imenor]); getch();
	return imenor;	
}
//------------------------------------
void ssortComentado(int v[], int n){
	int i, indiceMenor;
	for(i=0;i<n-1;i++){	
	    printf("Fase %d\n",i+1);//
	    indiceMenor = minIndexComentado(v,i,n);
	    printf("Trocando v[%d]=%d com v[%d]=%d\n",
	            i,v[i],indiceMenor,v[indiceMenor]);
	            getch();	        
	    troca(&v[i], &v[indiceMenor]);
	}
}//fim for
int main(){
	int *vet, n;
	float ini,fim, tempo;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);// alocando o vetor dinamicamente
	geraVet(vet,n);
	printVetor(vet,n);
	ssortComentado(vet,n);
	printf("Vetor ordenado:\n");
    printVetor(vet,n);
	return 0;
}
