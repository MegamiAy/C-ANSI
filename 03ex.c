/*
	Qual o ano que uma pessoa nasceu = problema
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Quais sao as variaveis
	int idade, ano;
	
	// Qual e a entrada de dados?
	printf("Digite a idade que ira fazer ou fez esse ano: ");
	scanf("%i", &idade);
	fflush(stdin);
	
	// Qual o processamento dos dados?
	ano=2024-idade;
	
	// Qual e a saida de dados?
	printf("Voce nasceu em %i \n", ano);	
	
	
	return(0);
}
