#include<stdio.h>
#include<stdlib.h>

int main(void){
	int cop;
	float prix;
	printf("Salut utilisateur, ce programme te permet de savoir le prix des photocopies d'apres leurs nombre .\n");
	printf("Pour commencer la simulation, entrez le nombre de copies voulu : ");
	scanf("%d",&cop);
	
	if (cop <= 10){
		prix=cop*0.25;
		printf("le prix total des copies est : %.2f",prix);
	}
	else if (10<cop<=25){
		prix=(10*0.25)+((cop-10)*0.2);
		printf("le prix total des copies est : %.2f",prix);
	}
	else {
	    prix=(10*0.25)+(15*0.2)+((cop-25)*0.15);
	    printf("le prix total des copies est : %.2f",prix);
    }
    return 0;
}
