#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Autor:Joice de jesus
Desenvolva um programa utilizando vetores/matrizes para ler cinquenta produtos e seus respectivos preços em cada mês do ano. 
O programa deve exibir nome e média de preço no ano para cada produto. Ao final deve ser exibido nome e preços dos dois produtos
de maiores médias anuais.*/
#define meses 2
#define ql 30
#define p 3
void entrada(char produtos[p][ql],float valor[p][meses],int qe,int m){
	int i,j;
	float s=0,me;
	for(i=0;i<qe;i++){
	printf("Informe o nome do produto:\n");
	scanf("%s",produtos[i]); getchar();
	for(j=0;j<m;j++){
	printf("Valor no mes %i:",j+1);
	scanf("%f",&valor[i][j]);
	}
	}	
}
void mediamaior(char produtos[p][ql],float valor[p][meses],float media[p],int qe,int m){
	int i,j;
	float soma=0.0,me,m1;
	for(i=0;i<qe;i++){
	for(j=0;j<m;j++){
	soma = soma + valor[i][j];
	me = soma / m;
	media[i] = me;
	}
	soma = 0.0;
	me = 0.0;
	}
	m1 = media[0];
	for(i=0;i<qe;i++){
	if(media[i]>m1){
	m1 = media[i];
	}
	}
	for(i=0;i<qe;i++){
	if(m1==media[i]){
	printf("\nNome = %s : media = %f",produtos[i],m1);
	}
	}
}
void doismaiores(char produtos[p][ql],float media[p],int qe,int m){
	int i,j;
	float m1,m2;
	char n1[30],n2[30];
	m1 = media[0];
	m2 = media[1];
	for(i=0;i<qe;i++){
	if(media[i]>m1){
	m1 = media[i];
	}else if(media[i]>m2){
	m2 = media[i];
	}
	}
	for(i=0;i<qe;i++){
	if(m1==media[i]){
	printf("\n1 Maior Media %s = %f",produtos[i],m1);
	}
	if(m2==media[i]){
	printf("\n2 Maior Media %s = %f",produtos[i],m2);
	}
	}
}
void main(){
	char produtos[p][ql];
	float valor[p][meses],media[p];
	
	entrada(produtos,valor,p,meses);
	printf("\n=====Produto com Maior Media Anual====");
	mediamaior(produtos,valor,media,p,meses);
	printf("\n=====Produtos com Maiores Medias Anuais====");
	doismaiores(produtos,media,p,meses);
}
