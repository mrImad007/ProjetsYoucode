#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(void){
	int mode1,mode2,num1,num2,op;
	printf("Salut utilisateur,ce programme fonctionne comme une calculette.\n");
    printf("1 : Pour une calculette simple\n2 : Pour calculette scientifique.\n");
	printf("Choisissez le mode voulu : ");
	scanf("%d",&mode1);
	
	switch (mode1){
		case 1 : 
		printf("Vous avez choisi la calculette simple.\n");
		printf("1 : Pour l'addition. \n");
	    printf("2 : Pour la soustraction. \n");
	    printf("3 : Pour la multiplication. \n");
	    printf("4 : Pour la division. \n");
	    printf("Choisissez le mode operatoir que vous voulez : ");
	    scanf("%d",&mode2);
	    switch(mode2){
	    case 1 : 
		       printf("Pour faire l'addition, Entrer le premier nombre : ");
		       scanf("%d",&num1);
		       printf("Maintenant enter le deuxieme nombre : ");
		       scanf("%d",&num2);
		       op=num1+num2;
			   printf("la somme des deux nombres est : %d .",op); 
		break;
		
		case 2 : 
			   printf("Pour faire la soustraction, Entrer le premier nombre : ");
		       scanf("%d",&num1);
		       printf("Maintenant enter le deuxieme nombre : ");
		       scanf("%d",&num2);
		       op=num1-num2;
			   printf("le resultat est : %d .",op); 
		break;
		
		case 3 : 
		       	printf("Pour faire la multiplication, Entrer le premier nombre : ");
		       scanf("%d",&num1);
		       printf("Maintenant enter le deuxieme nombre : ");
		       scanf("%d",&num2);
		       op=num1*num2;
			   printf("le produit des deux nombres est : %d .",op);  
		break;
		
		case 4 :
		       printf("Pour faire la division, Entrer le nominateur : ");
		       scanf("%d",&num1);
		       printf("Maintenant enter le denominateur : ");
		       scanf("%d",&num2);
		       op=num1/num2;
			   printf("la quotient des deux nombres est : %d .",op); 
		break;
		default : 
	    printf("Choix invalide ou incorrecte.");	  
		}
		break;
		
		case 2 : 
		printf("Vous avez choisi la calculette scientifique.\n");
		printf("1 : Pour l'addition. \n");
	    printf("2 : Pour la soustraction. \n");
	    printf("3 : Pour la multiplication. \n");
	    printf("4 : Pour la division. \n");
	    printf("5 : Pour la puissance. \n");
	    printf("6 : Pour la racine carre. \n");
	    printf("7 : Pour le cosinus. \n");
	    printf("8 : Pour le sinus. \n");
	    printf("9 : Pour la tangente. \n");
	    printf("10 : Pour le logarithme .\n");
	    printf("Choisissez le mode operatoir que vous voulez : ");
	    scanf("%d",&mode2);
	    switch (mode2){
	    case 1 : 
		       printf("Pour faire l'addition, Entrer le premier nombre : ");
		       scanf("%d",&num1);
		       printf("Maintenant enter le deuxieme nombre : ");
		       scanf("%d",&num2);
		       op=num1+num2;
			   printf("la somme des deux nombres est : %d .",op); 
		break;
		
		case 2 : 
			   printf("Pour faire la soustraction, Entrer le premier nombre : ");
		       scanf("%d",&num1);
		       printf("Maintenant enter le deuxieme nombre : ");
		       scanf("%d",&num2);
		       op=num1-num2;
			   printf("le resultat est : %d .",op); 
		break;
		
		case 3 : 
		       	printf("Pour faire la multiplication, Entrer le premier nombre : ");
		       scanf("%d",&num1);
		       printf("Maintenant enter le deuxieme nombre : ");
		       scanf("%d",&num2);
		       op=num1*num2;
			   printf("le produit des deux nombres est : %d .",op);  
		break;
		
		case 4 :
		       printf("Pour faire la division, Entrer le nominateur : ");
		       scanf("%d",&num1);
		       printf("Maintenant enter le denominateur : ");
		       scanf("%d",&num2);
		       op=num1/num2;
			   printf("la quotient des deux nombres est : %d .",op); 
		break;	  
		 	     
		case 5 :
			printf("Entrer le nombre d'operation : ");
			scanf("%d",&num1);
			printf("Entrer le degre de la puissance : ");
			scanf("%d",&num2);
			op=pow(num1,num2);
			printf("le pauissance de %d est : %d .",num1,op);
		break;
		
		case 6 : 
		    printf("Entrer le nombre d'operation : ");
			scanf("%d",&num1); 
			op=sqrt(num1);
			printf("le racine carre de %d est : %d .",num1,op); 
		break;
		
		case 7 : 
		    printf("Entrer le nombre d'operation : ");
			scanf("%d",&num1); 
			op=cos(num1);
			printf("le cosinus de %d est : %d .",num1,op); 
		break;	
		
		case 8 : 
		    printf("Entrer le nombre d'operation : ");
			scanf("%d",&num1); 
			op=sin(num1);
			printf("le sinus de %d est : %d .",num1,op);
		break;
		
		case 9 : 
		    printf("Entrer le nombre d'operation : ");
			scanf("%d",&num1); 
			op=tan(num1);
			printf("la tangente de %d est : %d .",num1,op); 
		break;
		
		case 10 : 
		    printf("Entrer le nombre d'operation : ");
			scanf("%d",&num1); 
			op=log(num1);
			printf("le logarithme de %d est : %d .",num1,op);
		break;
		default : 
	    printf("Choix invalide ou incorrecte.");
		}
	    break;
	    
	    default : 
	    printf("Choix invalide ou incorrecte.");
	}
		       return 0;
	}
	
