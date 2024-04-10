// Faça um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero.

// a. O menu será como segue:

// [ 1 ] – Adição
// [ 2 ] – Subtração
// [ 3 ] – Multiplicação
// [ 4 ] – Divisão
// [ 5 ] – Fim

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int op;
	float n1, n2, r;
	
	printf("digite o primeiro numero: ");
	scanf("%f", &n1);
	fflush(stdin);
	printf("digite o segundo numero: ");
	scanf("%f", &n2);
	fflush(stdin);
	printf("[ 1 ] Adicao \n");
	printf("[ 2 ] Subtracao \n");
	printf("[ 3 ] Multiplicacao \n");
	printf("[ 4 ] Divisao \n");
	printf("[ 5 ] Sair \n");
	printf("Digite a sua opcao: ");
	scanf("%i", &op);
	fflush(stdin);
	
	switch(op){
		case 1:
			r = n1 + n2;
			printf("%.2f", r);
			break;
		case 2:
			r = n1 - n2;
			printf("%.2f", r);
			break;
		case 3:
			r = n1 * n2;
			printf("%.2f", r);
			break;
		case 4:
			r = n1 / n2;
			printf("%.2f", r);
			break;
		default:
			exit;
	}
	
	
	return 0;
}
