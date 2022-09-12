#include<stdio.h>
#include<stdlib.h>

int main(void){
	int X,Y,x,y;
	printf("Salut utilisateur, pour dessiner un triangle entrer la valeur des lignes voulu : ");
	scanf("%d",&X);
	for (x=1;x<=X;x++){
		for(y=1;y<=x;y++){
			printf(" * ");
		}
		
		    printf("\n");
					
					
	}
	return 0;
}
