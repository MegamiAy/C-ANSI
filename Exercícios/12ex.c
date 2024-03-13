#include <stdio.h>
#include <stdlib.h>

int main (void){
	float qh, qm, r;
	
	printf("digite quanto voce ganha por hora: ");
	scanf("%f", &qh);
	printf("quantas horas voce trabalha por mes: ");
	scanf("%f", &qm);
	
	r = qh * qm;
	
	printf("seu salario ao fim do mes e %.2f", r);
	
	return(0);
}
