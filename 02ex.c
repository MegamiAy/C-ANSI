#include <stdio.h>
#include <stdlib.h>

int main (void){
	// declarcao de variaveis
	int idade;
	float altura;
	char letra;
	
	// entrada de dados
	printf("Digite sua idade: ");
	fflush(stdin); // limpa o buffer do teclado (enter do anterior)
	scanf("%i", &idade);
	
	printf("Digite sua altura: ");
	fflush(stdin);
	scanf("%f", &altura);
	
	printf("Digite a primeira letra do seu nome: ");
	fflush(stdin);
	scanf("%c", &letra);
	
	// saida de dados
	printf("Idade = %i\n", idade);
	printf("Altura = %.2f\nLetra = %c", altura, letra);
	
	return(0);
}
