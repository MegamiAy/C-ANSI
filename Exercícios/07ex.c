#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n1, n2;
	float r1, a, b, c;
	
	// Entradas
	printf("Insira um numero inteiro: \n");
	scanf("%i", &n1);
	fflush(stdin);
	printf("Insira outro numero inteiro: \n");
	scanf("%i", &n2);
	fflush(stdin);
	printf("Insira um numero real: \n");
	scanf("%f", &r1);
	
	// Processo
	a = n1 * 2 + (float)n2 / 2;
	b = n1 * 3 + r1;
	c = r1 * r1 * r1;
	
	// Saidas
	printf("A= %.2f \n", a);
	printf("B= %.2f \n", b);
	printf("C= %.2f \n", c);
	
	return (0);
}
