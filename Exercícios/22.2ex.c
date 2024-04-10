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
