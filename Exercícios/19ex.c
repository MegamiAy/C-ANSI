// faça um programa que peça um número e se for par, transforme-o em impar e vice-versa

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n, t;
	
	printf("digite um numero: ");
	scanf("%i", &n);
	fflush(stdin);
	
	t = n + 1;
	
	printf ("o numero e %i agora", t);
	
	return 0;
}
