#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int n1, n2;
	
	printf("Digite N1: ");
	scanf("%i", &n1);
	fflush(stdin);
	printf("Digite N2: ");
	scanf("%i", &n2);
	fflush(stdin);
	
	if(n1 > n2){
		printf("N1 e maior");
	} else if (n2 > n1){
		printf("N2 e maior");
	} else {
		printf("Os numeros sao iguais");
	}
	
	return 0;
}
