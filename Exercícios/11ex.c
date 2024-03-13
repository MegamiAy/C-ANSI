#include <stdio.h>
#include <stdlib.h>

int main (void){
	float n1, n2, n3, n4, m;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	fflush(stdin);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	fflush(stdin);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	fflush(stdin);
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	
	
	m = (n1 + n2 + n3 + n4) / 4;
	
	printf("sua media e %.2f", m);
	
	return(0);
}
