#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define qt 30
/*Autor: Joice de Jesus
*Este programa recebe uma palavra ou frase e mostra se é palindromo ou não.
*/

void entrada(char n[qt]){
	
	printf("Informe a palavra ou frase");
	scanf("%[^\n]s",n); getchar();
	
}
void Testapalindromo(char n[qt],int ne){
	int i,j=0;
	char gn[ne];
	for(i=(ne-1);i>=0;i--){
		gn[j] = n[i];
		j++;
	}
	if(strcmp(n,gn)==0){
		printf("E palindromo");
	}else{
		printf("Nao e palindormo");
	}
}
void main(){
	char n[qt],gn[qt];
	
	entrada(n);
	Testapalindromo(n,qt);
}
