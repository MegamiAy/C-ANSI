/*
4. Construa um algoritmo que leia um vetor de 10 caracteres, e diga 
quantas consoantes foram lidas. Imprima as consoantes.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	char vet[10];
	
	for(int i=0;i<=9;i++){
		printf("Digite o %i caracter: ",i+1);
		scanf("%c",&vet[i]);
		fflush(stdin);
	}
	
	for(int i=0;i<=9;i++){
		if(vet[i]>='a' && vet[i]<='z' || vet[i]>='A' && vet[i]<='Z'){
			char a = vet[i];
			if(a>='A' && a<='Z'){
				a+=32;
			}
			if(a!='a' && a!='e' && a!='i' &&  a!='o' && a!='u'){
				printf("vet[%i] = %c\n",i,vet[i]);
			}
		}
	}
	
	return 0;
}
