/*
5. Construa um algoritmo que leia um vetor de 15 palavras e mostre-os na 
ordem inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	char nome[30];
	
	// entrada
	printf("Digite o nome: ");
	gets(nome);
	fflush(stdin);
	
	// pre processamento
	for(int i=0;nome[i]!='\0';i++){
		/*if(nome[i]!=' ') */printf("nome[%i] = %c\n",i,nome[i]);
	}
	
	// saída
	printf("Seu nome e %s\n",nome);
	

	return 0;
}
