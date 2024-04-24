/* faça um programa que leia dez números inteiros e calcule a diferença entre o maior e o menor número do conjunto */
#include <stdio.h>
#include <stdlib.h>

int main (void){
int numeros[10];
    int i, maior, menor;
    
    printf("Digite dez umeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
		
	 maior = menor = numeros[0];

    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior)
            maior = numeros[i];
        if (numeros[i] < menor)
            menor = numeros[i];
    }

    printf("A difereca ntre o maior e o menor numero e: %d\n", maior - menor);
    
	return 0;
}
