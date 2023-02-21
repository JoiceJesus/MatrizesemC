#include<stdio.h>
#include<stdlib.h>
/*Autor: joice de jesus
*Este programa preenche um vetor com 30 numeros(inteiros), copia esses numeros para outro vetor invertidamente e mostra os dois vetores.
*/
#define tm 4
void entrada(int n[tm],int ne){
	int cont;
	printf("Informe os valores:\n");
	for(cont=0;cont<ne;cont++){
	scanf("%i",&n[cont]);
	}
}
int enverte(int n[tm],int guarda[tm],int ne){
	int cont,i;
	i=0;
	for(cont=(ne-1);cont>=0;cont--){
	guarda[i] = n[cont];
	printf("\n%i",guarda[i]);
	i++;
	}
}
void mostra(int n[tm],int guarda[tm],int ne){
	int cont;
	printf("=============Ordem Informada=========");
	for(cont=0;cont<ne;cont++){
	printf("\n%i",n[cont]); 
	}
	printf("\n=============Invertido===============");
	enverte(n,guarda,ne);
}
void main(){
	int n[tm],guarda[tm];
	
	entrada(n,tm);
	mostra(n,guarda,tm);
}
