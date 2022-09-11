#include<stdio.h>
#include<stdlib.h>

int main(void){
	int X,Y,x,y;
	printf("Wesh le user, tu veux enter une valeur a cet X ? : ");
	scanf("%d",&X);
	for (x=1;x<=X;x++){
		for(y=1;y<=x;y++){
			printf(" * ");
		}
		
		    printf("\n");
					
					
	}
	return 0;
}
