// Faça um programa que peça três notas de um aluno e calcule a média. Analisar a média e imprimir uma das mensagens a seguir:

	// a. A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;

	// b. A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;

	// c. A mensagem "Aprovado com Distinção", se a média for igual a 10.

#include <stdio.h>
#include <stdlib.h>

int main (void){
	float n1, n2, n3, a, b, c, med;
	
	printf("digite suas 3 notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	fflush(stdin);
	
	med = (n1 + n2 + n3) / 3;
	a = med >= 7;
	//	b = med < 7;
	c = med == 10;
	
	if(c){
		printf("Aprovado com distincao");
	} else if (a){
		printf("Aprovado");
	} else {
		printf("Reprovado");
	}
	
	return 0;
}
