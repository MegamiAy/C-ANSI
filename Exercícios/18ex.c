// faça um programa que peça um numero e imprima se o número é impar ou par

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n;
	
	printf("digite um numero: ");
	scanf("%i", &n);
	fflush(stdin);
	
	if(n % 2 == 1){
		printf("o numero %i e impar", n);
	} else {
		printf("o numero %i e par", n);
	}
	
	return 0;
}

