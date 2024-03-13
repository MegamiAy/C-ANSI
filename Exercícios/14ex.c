#include <stdio.h>
#include <stdlib.h>

int main (void){
	int qm, q20, q1, q5, mtot;
	float qpm, ctm, ctot;

	printf("Quantas maquinas serao vendidas: ");
	scanf("%i", &qm);
	fflush(stdin);
	
	q20 = qm * 1;
	q1 = qm * 2;
	q5 = qm * 3;

	mtot = q20 + q1 + q5;
	
	printf("Serao vendidas %i maquinas\n", qm);
	printf("Ao total serao %i motores \n", mtot);
	printf("Serao %i de 20CV, %i de 1CV e %i de 3CV \n", q20, q1, q5);
	
	
	
	return(0);
}
