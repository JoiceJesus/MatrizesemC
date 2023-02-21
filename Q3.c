#include<stdio.h>
#include<stdlib.h>
/*Autor:joice de jesus
*Este programa recebe 
*/
void entrada(int grausdia[],int ne){
	int cont;
	printf("Informe o grau de cada dia:\n");
	for(cont=0;cont<ne;cont++){
	scanf("%i",&grausdia[cont]);
	}
}
float mediagraus(int grausdia[],int ne){
	int cont;
	float soma=0.0,media;
	for(cont=0;cont<ne;cont++){
	soma = soma + grausdia[cont];
	}
	media = soma / ne;
	return media;
}
void diamaisquente(int grausdia[],int ne){
	int cont,quente;
	quente = grausdia[0];
	for(cont=0;cont<ne;cont++){
	if(quente<grausdia[cont]){
	quente = grausdia[cont];
	}
	}
	for(cont=0;cont<ne;cont++){
	if(quente==grausdia[cont]){
	printf("\nDias mais quentes %i",cont+1);
	}
	}
}
int qtmedia(int grausdia[],int ne,int m){
	int cont,s=0;
	for(cont=0;cont<ne;cont++){
	if(grausdia[cont]>m){
	s=s+1;
	}
	}
	printf("\nQuantidade de dias com temperaturas maiores que a media %i",s);
}
void main(){
	int s=0,c,mes,grausdia[4];
	int janeiro=31,fevereiro=28,marco=31,abril=30,maio=31,junho=30,julho=31,agosto=30,setembro=30,outubro=31,novembro=30,dezembro=31;
	printf("Informe o mes:");
	scanf("%i",&mes);
	switch(mes){
	case 1:
	 grausdia[janeiro];
	entrada(grausdia,janeiro);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,janeiro));
	diamaisquente(grausdia,janeiro);
	qtmedia(grausdia,janeiro,mediagraus(grausdia,janeiro));
	break;
	case 2:
	grausdia[fevereiro];
	entrada(grausdia,fevereiro);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,fevereiro));
	diamaisquente(grausdia,fevereiro);
	qtmedia(grausdia,fevereiro,mediagraus(grausdia,fevereiro));
	break;
	case 3:
	grausdia[marco];
	entrada(grausdia,marco);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,marco));
	diamaisquente(grausdia,fevereiro);
	qtmedia(grausdia,marco,mediagraus(grausdia,marco));
	break;
	case 4:
	grausdia[abril];
	entrada(grausdia,abril);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,abril));
	diamaisquente(grausdia,abril);
	qtmedia(grausdia,abril,mediagraus(grausdia,abril));
	break;
	case 5:
	grausdia[maio];
	entrada(grausdia,maio);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,maio));
	diamaisquente(grausdia,maio);
	qtmedia(grausdia,maio,mediagraus(grausdia,maio));
	break;
	case 6:
	grausdia[junho];
	entrada(grausdia,junho);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,junho));
	diamaisquente(grausdia,junho);
	qtmedia(grausdia,junho,mediagraus(grausdia,junho));
	break;
	case 7:
	grausdia[julho];
	entrada(grausdia,julho);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,julho));
	diamaisquente(grausdia,julho);
	qtmedia(grausdia,julho,mediagraus(grausdia,julho));
	break;
	case 8:
	grausdia[agosto];
	entrada(grausdia,agosto);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,agosto));
	diamaisquente(grausdia,agosto);
	qtmedia(grausdia,agosto,mediagraus(grausdia,agosto));
	break;
	case 9:
	grausdia[setembro];
	entrada(grausdia,setembro);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,setembro));
	diamaisquente(grausdia,setembro);
	qtmedia(grausdia,setembro,mediagraus(grausdia,setembro));
	break;
	case 10:
	grausdia[outubro];
	entrada(grausdia,outubro);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,outubro));
	diamaisquente(grausdia,outubro);
	qtmedia(grausdia,outubro,mediagraus(grausdia,outubro));
	break;
	case 11:
	grausdia[novembro];
	entrada(grausdia,novembro);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,novembro));
	diamaisquente(grausdia,novembro);
	qtmedia(grausdia,novembro,mediagraus(grausdia,novembro));
	break;
	case 12:
	grausdia[dezembro];
	entrada(grausdia,dezembro);
	printf("\nMedia da temperatura %2.2f",mediagraus(grausdia,dezembro));
	diamaisquente(grausdia,dezembro);
	qtmedia(grausdia,dezembro,mediagraus(grausdia,dezembro));
	break;
}
}
