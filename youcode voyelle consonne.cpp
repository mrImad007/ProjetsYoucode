#include<stdio.h>
#include<stdlib.h>

int main (void){
	char L;
	
	printf("Salut utilisateur, ce programme te permet de savoir si la lettre est une voyelle ou consonne,\n");
	printf("Pour commencer entrer la lettre voulu : ");
	scanf("%c",&L);
	
	if ((L=='a') || (L=='e') || (L=='i') || (L=='o') || (L=='u') || (L=='A') || (L=='E') || (L=='I') || (L=='O') || (L=='U'))
		printf("La lettre que vous avez entre est une voyelle.");
	
	else 
	    printf("la lettre que vous avez entre est une consonne.");
	
	return 0;
}
