#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main (void){
	int a,b,c,delta;
	float sol1,sol2,sol3;

	printf("Salut utilisateur, ce programme te permet de resoudre une equation du deuxiemme degre,\n");
	printf("Pour commencer, les equations du 2eme degre s'ecrivent sous la forme : ax^2+bx+c=0 .\n");
	printf("Veuillez entrer le nombre (diff de 0) du premier therme qui contient le carre (a) : ");
	scanf("%d",&a);
	printf("Maintenant entrer le nombre (diff de 0) therme qui contient seulement x (b): ");
	scanf("%d",&b);
	printf("Et finallement ecriver le dernier therme ou nombre (c): ");
	scanf("%d",&c);
	
	delta = pow(b,2)-(4*a*c);
	
	if (delta > 0){
		sol1 = (-b-sqrt(delta))/2*a;
		sol2 = (b-sqrt(delta))/2*a;
		printf("Cette equation peut avoir deux solutions : \n");
		printf("solution 1 : %.2f \n",sol1);
		printf("solution 2 : %.2f \n",sol2);
	}
	else if (delta < 0){
		printf("Cette equation n'a pas de solutions.");
	}
	else {
		sol3=-b/(2*a);
		printf("La solution unique de cette equation est : %.2f",sol3);
	}

	return 0;
	}

