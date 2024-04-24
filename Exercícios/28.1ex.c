/* faça um programa que leia dez números inteiros e calcule a diferença entre o maior e o menor número do conjunto */
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i, maior, menor, numero;
    
    printf("Digite dez umeros inteiros:\n", i);
    for (i = 1; i <=10; i++) {
        printf("Numero %i: ", i);
        scanf("%i", &numero);
        fflush(stdin);
        if(i==1){
        	maior = numero;
        	menor = numero;
		}else {
			if(numero<menor){
				menor=numero;
			}else{
				maior=numero;
			}
		}
    }

    printf("A difereca ntre o maior e o menor numero e: %i\n", maior - menor);
    
	return 0;
}
