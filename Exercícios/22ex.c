// Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    // Solicita ao usuário que insira os três valores inteiros
    printf("Digite tres valores inteiros: ");
    scanf("%i %i %i", &a, &b, &c);

    // Ordena os valores
    if (a <= b && b <= c) {
        printf("Ordem crescente: %i %i %i\n", a, b, c);
    } else if (a <= c && c <= b) {
        printf("Ordem crescente: %i %i %i\n", a, c, b);
    } else if (b <= a && a <= c) {
        printf("Ordem crescente: %i %i %i\n", b, a, c);
    } else if (b <= c && c <= a) {
        printf("Ordem crescente: %i %i %i\n", b, c, a);
    } else if (c <= a && a <= b) {
        printf("Ordem crescente: %i %i %i\n", c, a, b);
    } else {
        printf("Ordem crescente: %i %i %i\n", c, b, a);
    }

    return 0;
}
