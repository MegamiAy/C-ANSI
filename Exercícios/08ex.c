#include <stdio.h>
#include <stdlib.h>

int main (void){
	float A, r;
	
	printf("Digite a metade da largura do circulo: ");
	scanf("%f", &r);
	
	A = 3.14 * (r * r);
	
	printf("A area do circulo e igual a %.2f", A);
	
	return(0);
}
