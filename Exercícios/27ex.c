/* Faça um programa que peça dois números inteiros e gere os números inteiros que estão no intervalo entre eles. */
#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n1, n2, i;
	
	printf("Digite um numero: ");
	scanf("%i", &n1);
	fflush(stdin);
	printf("Digite outro numero: ");
	scanf("%i", &n2);
	fflush(stdin);
	
	if(n1 < n2){
			for(i=n1+1; i<n2; i++){
			printf("%i, ",i);
		}
	} else {
		for(i=n1-1; i>n2; i--){
			printf("%i, ", i);
		}
	}
	
	return 0;
}
