#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	char letter;
	
	printf("Insira uma sexo (F ou M): ");
	scanf("%c", &letter);
	fflush(stdin);
	
	switch(letter) { //verificar entradas
        case 'f': //caso 1
        case 'F':
            printf("Sexo: Feminino\n");
            break;
        case 'm':
        case 'M':
            printf("Sexo: Masculino\n");
            break;
        default:
            printf("Sexo invalido\n");
    }
	
	return 0;
}
