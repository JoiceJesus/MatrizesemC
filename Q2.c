#include<stdio.h>
#include<stdlib.h>

#define nll 8
#define nl 18
/*Autor:Joice de Jesus
*Este programa recebe valores(8) para um vetor A e valores(18) para um vetor B e armazena estes valores juntamente em um vetor C.
*/
void entradaV1(int A[],int n){
	int i;
	printf("Informe os numeros do Vetor 1:\n");
	for(i=0;i<n;i++){
	scanf("\n%i",&A[i]);
	}
}

void entradaV2(int B[],int n){
	int i;
	printf("Informe os numeros do vetor 2:\n");
	
	for(i=0;i<n;i++){
	scanf("\n%i",&B[i]);
	}
}
void copia(int A[],int B[], int C[],int n1,int n2){	
	int i,j;
	for(i=0; i<n1; i++){
    C[i] = A[i];
	}	
	for(j=0;j<n2;j++){
	C[i+j] = B[j];
	}
}
void saida(int C[],int n1){
	int i;
	for(i=0;i<n1;i++){
	printf("\n%i",C[i]);
	}
}
void main(){
int A[nll],B[nl],C[nll+nl],n=nll+nl;
	entradaV1(A,nll);
	entradaV2(B,nl);
	copia(A,B,C,nll,nl);
	saida(C,n);
}

