#include<stdio.h>
#include<stdlib.h>

int main (void){
	int N;
	printf("Salut utilisateur, ce programme te permet de savoir si le nombre est pair ou impair.\n");
	printf("Veuillez entrer le nombre que vous voulez : ");
	scanf("%d",&N);
	
	if (N % 2 == 0)
		printf("Le nombre %d est pair.",N);
	else 
	    printf("Le nombre %d est impair.",N);
	    
	    return 0;
}

