#include <stdio.h>
#include <stdlib.h>

int main (void){
	float n, quebrado;
	int inteiro;
	
	printf("digite um numero: ");
	scanf("%f", &n);
	fflush(stdin);
	
	inteiro = (int)n;
	quebrado = n - inteiro;
		
	if(quebrado == 0.0){
	printf("O numero %.2f e inteiro.\n", n);
    } else {
        printf("O numero %.2f e quebrado.\n", n);
    }
	
		
	return 0;
}
