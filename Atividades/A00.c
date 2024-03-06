/*
	Transformar Celsius para Farenheit
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Quais sao as variaveis
	int celsius, farenheit;
	
	// Qual e a entrada de dados?
	printf("Digite a temperatura em celsius: ");
	scanf("%i", &celsius);
	fflush(stdin);
	
	// Qual o processamento dos dados?
	farenheit=celsius * 1.8 + 32;
	
	// Qual e a saida de dados?
	printf("%i ºC em Farenheit sao %i ºF", celsius, farenheit);	
	
	
	return(0);
}