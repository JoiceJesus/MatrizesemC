#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Autor: joice de jesus
* Desenvolver um programa que receba o nome, sexo e as notas das quatro avaliações de uma turma de trinta alunos.
O programa deve exibir o estudante (nome) com maior média e todos os estudantes (nome e média) do sexo masculino
que tiveram médias abaixo da média do referido estudante. 
*/
#define ql 30
#define qn 4
void entrada(char nome[30],char sexo[3],float nota[4]){
	float soma=0.0;
	int i,j;
		
		printf("Nome :\n");
		scanf("%s",nome);
		printf("Sexo :\n");
		scanf("%s",sexo);
		printf("Notas :\n");
		for(j=0;j<4;j++){
		scanf("%f",&nota[j]);
		}
}
float media(float *nota){
	int j;
	float soma=0.0,media;
	
	for(j=0;j<4;j++){
	soma = soma + nota[j];
	}
	media = soma / 4;
	return media;
	//printf("media = %f",media);
		
}
void maiornota(char nome[30],char sexo[3],float nota[4]){
	int i,c=0;
	float m1,l[3];
	char n[30],masc[3][3];
	for(i=0;i<3;i++){
	entrada(nome,sexo,nota);
	if(strcmp(sexo,"M")==0){
	strcpy(masc[i],nome);
	l[i] = media(nota);
	c=c+1;
	}
	media(nota);
	if(i==0){
	strcpy(n,nome);
	m1 = media(nota);
	}else if(media(nota)>m1){
	strcpy(n,nome);
	m1 = media(nota);
	}
	}
	printf("===maior media e do aluno(a)===\n(%s)",n);
	
	printf("\n===Alunos do sexo masculino:===\n");
	for(i=0;i<c;i++){
	if(l[i]>0)
	printf("\nnome (%s) nota (%f)",masc[i],l[i]);
	}
}
void main(){
	char nome[30],sexo[3];
	float nota[4];
	

	maiornota(nome,sexo,nota);
	//system("cls");
}

