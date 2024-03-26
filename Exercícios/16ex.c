#include <stdio.h>
#include <stdlib.h>

int main (void){
	float n;
	
	printf("digite um numero: ");
	scanf("%f", &n);
	fflush(stdin);
	
	if(n >= 0){
		printf("este numero e positivo");
	} else {
		printf("este numero e negativo");
	}
	
	
	return 0;
}
