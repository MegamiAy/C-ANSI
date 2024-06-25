/*
Faça um programa que leia uma palavra e execute a opção escolhida pelo usuário conforme o menu que deve ser mostrado na tela:
1) - Todas as letras em maiúscula;
2) - Todas as letras em minúscula;
3) - Inverte palavra;
4) - Tamanho da palavra;
5) - Fim
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void maiuscula(char palavra[]);
void minuscula(char palavra[]);
void inverter(char palavra[]);
int menu(char palavra[]);

int main(){
    int op;
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    do{
        op = menu(palavra);
	} while (op !=5);

  return 0;
}

int menu(char palavra[]){
    int op, tama;
    
    printf("O que você quer fazer com a palavra?\n");
    printf("1. colocar em maiusculo\n2. colocar em minusculo\n3. inverter\n4. saber o tamanho\n5. fim\n");
    scanf("%d", &op);
    
    switch(op){
        case 1:
            maiuscula(palavra);
            printf("Palavra em maiusculo: %s\n", palavra);
            break;
        case 2:
            minuscula(palavra);
            printf("Palavra em minusculo: %s\n", palavra);
            break;
        case 3:
            inverter(palavra);
            printf("Palavra invertida: %s\n", palavra);
            break;
        case 4:
            tama = strlen(palavra);
            printf("Tamanho da palavra: %d\n", tama); 
            break;
        case 5:
            printf("Saindo do programa...");
            break;
        default:
            printf("opção inválida");
    }
    
    return op;
}

void maiuscula(char palavra[]){
    int i = 0;
    
    while(palavra[i] != '\0'){
        palavra[i] = toupper(palavra[i]);
        i++;
    }
}

void minuscula(char palavra[]){
    int i = 0;
    
    while(palavra[i] != '\0'){
        palavra[i] = tolower(palavra[i]);
        i++;
    }
}

void inverter(char palavra[]){
    int i, j;
    char aux;
    int tam = strlen(palavra);
    
    for(i = 0, j = tam - 1; i < j; i++, j--){
        aux = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = aux;
    }
}
