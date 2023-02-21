#include<stdio.h>
#include<stdlib.h>
/*Autor: joice de jesus 
*Este programa recebe preenche duas matrizes A e B de 25 elentos  e mostra a media dos Fibonacci presentes nas duas matrizes.
*/
#define matriz 25

void entradaMatrizA(int A [matriz],int ne){
	int cont,m=0;
	printf("Informe os elementos da matriz A\n");
	for(cont=0;cont<ne;cont++){
	do{
	scanf("%i",&A[cont]);
	}while(A[cont]<0);
	}
	
	
}
void entradaMatrizB(int B[matriz],int ne){
	int cont,m=0;
	
	printf("Informe os elementos da matriz B\n");
	for(cont=0;cont<ne;cont++){
	do{
	scanf("%i",&B[cont]);
	}while(numeroprimo(B[cont])!=1);
	}
}
int numeroprimo(int n){
	int cont,m=0,mm=0;
	for(cont=1;cont<=n;cont++){
	if(n%cont==0){
	m=m+1;
	}
	}
	if(m==2){
	mm = mm+1;
	}
	return mm;
}
int verificaFibo(int n){
	int cont,f1=0,f2=1,f3,m=0;
	for(cont=1;cont=f3<n;cont++){
		f3 = f1 + f2;
		if(n==f3){
		return 1;
		}
		f1=f2;
		f2=f3;
	}
}
void media_dos_fibos(int A[matriz],int B[matriz],int ne){
	int cont,cA,cB,somaA=0,somaB=0,somaTudo1,somaTudo2;
	float media;
	
	for(cont=0;cont<ne;cont++){
	if(verificaFibo(A[cont])==1){
	somaA = somaA + A[cont];
	cA++;
	//printf("%i",somaA);
	}
	}
	for(cont=0;cont<ne;cont++){
	if(verificaFibo(B[cont])==1){
	somaB = somaB + B[cont];
	cB++;
	}
	}
	somaTudo1 = somaA + somaB;
	somaTudo2 = cA + cB;
	
	media = somaTudo1 / somaTudo2;
	
	printf("\nMedia dos Fibonacci presentes nas matrizes A e B: \n%2.1f",media);
}
void main(){
	int A[matriz],B[matriz],C[matriz],cont;
	float m;
	entradaMatrizA(A,matriz);
	entradaMatrizB(B,matriz);
	media_dos_fibos(A,B,matriz);

}
