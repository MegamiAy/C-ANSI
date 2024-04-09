// faça um programa que verifique se uma letra é vogal ou consoante

#include <stdio.h>
#include <stdlib.h>

int main (void){
	char l;
	
	printf("digite uma letra: ");
	scanf("%c", &l);
	fflush(stdin);
	
	if((l>='a' && l<='z') || (l>='A' && l<='Z')){
		if(l>='A' && l<='Z'){
			l=l+('a'-'A');
		}
		switch(l){
			case 'a': case 'e': case 'i': case 'o': case 'u':
				printf("E uma vogal\n");
				break;
			default:
				printf("E uma consoante\n");
		}
		
	}else{
		printf("Nao e uma letra\n");
	}
	
	return 0;
}
