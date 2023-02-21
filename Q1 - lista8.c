#include<stdio.h>
#include<stdlib.h>
/*Autor: joice de jesus
*Este programa preenche um vetor com 30 numeros(inteiros), copia esses numeros para outro vetor invertidamente e mostra os dois vetores.
*/
#define tm 4

void entrada(int *n,int tm2){
	int i;
	for(i=0;i<tm2;i++){
		printf("\t\t\tInforme o numero:");
		scanf("%i",&n[i]);
	}
}
void mostra_entrada(int *n,int *x, int tm2){
	int i;
	for(i=0;i<tm2;i++){
	printf("A:%i,B:%i\n",n[i],x[i]);
	}
}
void inverco(int *n,int *x,int tm2)
{
	int i,j;
	j=0;
	for(i=(tm2-1);i>=0;i--)
	{
	  x[j] = n[i];
	   j = j+1;
	}
}

void main()
{
	int i,n[tm],guarda[tm];
	entrada(n,tm);
	inverco(n,guarda,tm);
	mostra_entrada(n,guarda,tm);
}
