#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


/*Autor: joice de jesus
*Este programa recebe 30 elementos(utilizando a função rand) para um vetor e mostra o desvio padrão do vetor.
*/
void entrada(int v[],int n,int x,int y){
	int cont;
	srand(time(NULL));
	for(cont=0;cont<n;cont++){
		v[cont] = x + rand() % (y - x + 1);
	//printf("rand(%i) %i\n",cont+1,v[cont]);
	}
}
float media(int v[30],int n,int x,int y){
	int cont,soma=0;
	float media;
	for(cont=0;cont<n;cont++){
		soma = soma + v[cont];
	}
	media = soma / n;
	return media;
	//printf("media %f\n",media);
}
float desvioPadrao(int v[30],int n,int x,int y){
	int cont,dp;
	float div,s=0.0;
	for(cont=0;cont<n;cont++){
	div = 1.0 / v[cont];
	dp = pow(div - media(v,30,10,50),2);
	
	s = s + dp;
	}
	printf("Desvio Padao do vetor = %f",s);
}
void main(){
	int x[30];
	entrada(x,30,10,50);
	desvioPadrao(x,30,10,50);

}
