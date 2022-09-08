#include<stdio.h>
#include<stdlib.h>

void signe(int A,int B){
	if ((A*B)>0)
	    printf("Les deux ont le meme signe ");
	else 
	    printf("Les deux n'ont pqs le meme signe");
}

int maxi (int A, int B){
	if (A>B)
	     return A;
	else 
	     return B; 
}

int mini (int A, int B){
	if (A>B)
	     return B;
	else 
	     return A; 
}

int main (void){
	int A,B;
	int MAX,MIN;
	
	printf("Salut utilisateur, c'est mon deuxieme projet c a youcode.\n");
	printf("Ce programme permet de donner le maximum de deux nombre, s'ils ont le meme signe et faire leurs produit.\n");
	
	printf("Alors enter le premier nombre : ");
	scanf("%d",&A);
	printf("maintenant enter le deuxieme nombre : ");
	scanf("%d",&B);
	
	signe(A,B);
	
	MAX = maxi(A,B);
	MIN = mini(A,B);
	
	printf(" le maximum des deux nombres est : %d \n",MAX);
	printf(" Automatiquement e minimum est : %d \n",MIN);
	printf("le produit des deux nombres est %d",A*B);
	
	return 0;
}
