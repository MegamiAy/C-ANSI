/* Faça um programa que leia um vetor de 10 números reais e mostre-os na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i;
	float n[10];
	
	printf("digite 10 numeros reais: \n");
	for(i=0; i<10; i++){
		printf("digite o numero %i ", i+1);
		scanf("%f", &n[i]);
	}
	
	printf("\n Numeros em ordem inversa: \n");
	for(i=9; i>= 0; i--){
		printf("%.2f \n", n[i]);
	}
	
	return 0;
}
