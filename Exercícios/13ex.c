#include <stdio.h>
#include <stdlib.h>

int main (void){
	float qd, r, s;
	
	printf("quantos dias o encanador trabalha: ");
	scanf("%f", &qd);
		
	s = qd * 25;
	r = s - (s * 8/100);
	
	printf("seu salario ao fim do mes e %.2f", r);
	
	return(0);
}
