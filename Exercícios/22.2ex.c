// Faça um programa que leia a idade de quatro alunos e apresente a mensagem conforme instruções:

	// a. Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma Jovem";

	// b. Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma Adulta";

	// c. Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem "Turma Idosa".

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n1, n2, n3;
	
    printf("Digite tres valores inteiros: ");
    scanf("%i %i %i", &n1, &n2, &n3);
    fflush(stdin);
    
    if(n1<n2 && n1<n3){
    	if(n2<n3){
    		printf(" %i %i %i ", n1, n2, n3);
		} else {
			printf(" %i %i %i ", n1, n3, n2);
		}
	} else if (n2<n1 && n2<n3){
		if(n1<n3){
			printf(" %i %i %i ", n2, n1, n3);
		} else {
			printf(" %i %i %i ", n2, n3, n1);
		}
	} else {
		if(n1<n2){
			printf(" %i %i %i ", n3, n1, n2);
		} else {
			printf(" %i %i %i ", n3, n2, n1);
		}
	}
	
	return 0;
}
