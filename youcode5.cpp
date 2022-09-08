#include<stdio.h>
#include<stdlib.h>

int main(void){
	char nom, prenom, ville;
	int age, offre = 0, pay, tel;
	printf("Bonjour utilisateur, c'est mon quatrieme projet a youcode.\n");
	printf("Ce programme te permet de demander la carte d'abonnement de ton equipe. \n");
	
	printf("Pour commencer, \n");
	printf("Enter votre prenom : ");
	scanf("%s",&prenom);
	printf("Entrer votre nom : ");
	scanf("%s",&nom);
	printf("Enter votre ville de residence : ");
	scanf("%s",&ville);
	printf("Quelle est votre age? : ");
	scanf("%d",&age);
	
	if(age<18)
	  printf("On est vraiment desole, vous n'avez pas encore atteint l'age de l'abonnement .\n");
	else
	{
		printf("Tres bien on passe aux offres disponnibles.\n");
		printf("1 : offre 6 mois acces tennis : 1200 dh \n 2 : offre 6 mois acces tennis et piscine : 1800 dh \n 3 : offre 6 mois premium : 3000 dh \n 4 : offre 12 mois premium : 5000 dh \n");
		printf("Choisissez l'offre qui vous correspond : ");
		scanf("%d",&offre);
		
		switch (offre){
			case 1 : 
		    printf("Benefissiez des meilleure terrain de tennis de 7h jusqu'a 22h 7/7 \n");
			printf("Maintenant on passe au paiment, \n");
			printf("1: Espece au club \n 2: Virement bancaire \n");
			printf("Choisissez votre methode de paiment : ");
			scanf("%d",&pay);
			switch (pay){
				case 1 : 
				printf("Enter votre telephone mobile : ");
				scanf("%d",&tel);
				printf("On va vous appeler pour vous donner un rendez vous \nMerci pour votre temps et confiance.");
				break;
				case 2 :
				printf("342318361100200 voici notre numero de compte, on vous appelerai apres la validation du paiment pour reccuperer votre carte. \nMerci pour votre temps et confiance.");
				break;
			}
			break;
			case 2 : printf("Benefissiez des meilleurs terrain de tenis avec acces au piscine de 7h jusqu'a 22h 7/7 \n");
	    	printf("Maintenant on passe au paiment, \n");
			printf("1: Espece au club \n2: Virement bancaire \n");
			printf("Choisissez votre methode de paiment : ");
			scanf("%d",&pay);
		switch (pay){
				case 1 : 
				printf("Enter votre telephone mobile : ");
				scanf("%d",&tel);
				printf("On va vous appeler pour vous donner un rendez vous \nMerci pour votre temps et confiance.");
				break;
				case 2 :
				printf("342318361100200 voici notre numero de compte, on vous appelerai apres la validation du paiment pour reccuperer votre carte. \nMerci pour votre temps et confiance.");
				break;
			}
			break;
			case 3 : 
			printf("Benefissez d'un acces a tout les departements du club sans hesitation de 7h jusqu'a 22h 7j/7 pour 6 mois plus repas ON THE HOUSE \n");
	    	printf("Maintenant on passe au paiment, \n");
			printf("1: Espece au club \n2: Virement bancaire \n");
			printf("Choisissez votre methode de paiment : ");
			scanf("%d",&pay);
			switch (pay){
				case 1 : 
				printf("Enter votre telephone mobile : ");
				scanf("%d",&tel);
				printf("On va vous appeler pour vous donner un rendez vous \nMerci pour votre temps et confiance.");
				break;
				case 2 :
				printf("342318361100200 voici notre numero de compte, on vous appelerai apres la validation du paiment pour reccuperer votre carte. \nMerci pour votre temps et confiance.");
				break;
			}
			break;
			case 4 : 
		    printf("Benefissez d'un acces a tout les departements du club sans hesitation de 7h jusqu'a 22h 7j/7 pour un an plus repas ON THE HOUSE \n");
	    	printf("Maintenant on passe au paiment, \n");
			printf("1: Espece au club \n2: Virement bancaire \n");
			printf("Choisissez votre methode de paiment : ");
			scanf("%d",&pay);
			switch (pay){
				case 1 : 
				printf("Enter votre telephone mobile : ");
				scanf("%d",&tel);
				printf("On va vous appeler pour vous donner un rendez vous \nMerci pour votre temps et confiance.");
				break;
				case 2 :
				printf("342318361100200 voici notre numero de compte, on vous appelerai apres la validation du paiment pour reccuperer votre carte. \nMerci pour votre temps et confiance.");
				printf("Merci pour votre temps et confiance.");
				break;
			}
			break;
			case 5 : 
			printf("Votre choix est invalide, reessayer.");
	    }
   }
   return 0;
}
