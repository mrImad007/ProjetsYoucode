#include<stdio.h>
#include<stdlib.h>

int main(void){
	int A,B;
	printf("Salut utilisateur, c'est mon premier projet c a youcode.\n");
	printf("Ce programme permet de donner le maximum et le minimum de deux nombre, s'ils ont le meme signe et faire leurs produit.\n");
	
	printf("Alors enter le premier nombre : ");
	scanf("%d",&A);
	printf("maintenant enter le deuxieme nombre : ");
	scanf("%d",&B);
	
	if (A>B){
		 printf("Le maximum des deux nombres est : %d \n",A);
		 printf("Automatiquement, le minimum c'est : %d \n",B);
	}
	else {
		printf("Le maximum des deux nombres est : %d \n",B);
	    printf("Automatiquement, le minimum c'est : %d \n",A);
	}
	
	if((A*B)>0)
		printf("les deux nomnres ont le meme signe.\n");
	else 
	    printf("les deux nombres ont deux signes differents.\n");
	
	printf("le produit des deux nombres est %d",A*B);
	
	return 0;
}

