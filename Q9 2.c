#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define qtimes 2
#define qletras 30
void entrada(char nome[4][qletras],int pontos[4][3]){
	int i,j,m1,m2,m3;
	
	for(i=0;i<4;i++){
	printf("Times Linha %i:\n",i+1);
	scanf("%[^\n]s",nome[i]); getchar(); 
	printf("Digite na ordem:\nPGanhos: PMarcados PSofridos: %i:\n",i+1);
	
	for(j=0;j<3;j++){
	do{
	scanf("%i",&pontos[i][j]);getchar();
	if(j==0){
	m1 = pontos[i][j];
	}else if(j==1){
	m2 = pontos[i][j];
	}else if(j==1){
	m3 = pontos[i][j];
	}	
	}while((m2 == m1) || (m2 == m1));
	}
	}
}
void campeao(char nome[4][qletras],int pontos[4][3]){
	int i,j,m1,m2,m3;
	char n[30];
	m1 = pontos[0][0];
	n[30] = nome[0];
	for(i=0;i<4;i++){
	for(j=0;j<3;j++){
	if(pontos[i][j]>=m1){
	strcpy(n,nome[i]);
	m1=pontos[i][j];
	}
	}
	}
	printf("\n**Nome do Time Campeao %s**",n);
	//return m1;
}
void goleador(char nome[4][qletras],int pontos[4][3]){
	int i,j,m1,m2,m3;
	char n[30];
	m1 = pontos[0][1];
	n[30] = nome[0];
	for(i=0;i<4;i++){
	for(j=0;j<3;j++){
	if(pontos[i][1]>m1){
	strcpy(n,nome[i]);
	m1 = pontos[i][1];
	}
	}
	}
	printf("\n**Nome do Time Goleador %s**",n);
}
void dv(char nome[4][qletras],int pontos[4][3]){
	int i,j,m1,m2,m3;
	char n[30];
	m1 = pontos[0][2];
	n[30] = nome[0];
	for(i=0;i<4;i++){
	for(j=0;j<3;j++){
	if(pontos[i][2]>m1){
	strcpy(n,nome[i]);
	m1 = pontos[i][2];
	}
	}
	}
	printf("\n**Nome do Time Defesa Vazada %s**",n);
}
void main(){
	int pontos[4][3];
	char nome[4][qletras];
	
	entrada(nome,pontos);
	campeao(nome,pontos);
	goleador(nome,pontos);
	dv(nome,pontos);
}
