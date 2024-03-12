/*
	Transformar Farenheit para Celsius
*/

#include <stdio.h>
#include <stdlib.h>

int main (void){
	// Quais sao as variaveis
	int celsius, farenheit;
	
	// Qual e a entrada de dados?
	printf("Digite a temperatura em Farenheit: ");
	scanf("%i", &farenheit);
	fflush(stdin);
	
	// Qual o processamento dos dados?
	celsius= (farenheit -32) *1.8;
	
	// Qual e a saida de dados?
	printf("%i ºF em Farenheit sao %i ºC", farenheit, celsius);	
	
	
	return(0);
}
