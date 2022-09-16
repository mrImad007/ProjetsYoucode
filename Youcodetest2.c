#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a,b=0;
	
	printf("Entrer le nombre voulu qui se copose de 4 chiffres : ");
	scanf("%d",&a);
	
	while (a>0){
		b *= 10;
		b += a%10;
	    a /= 10;
	}
	printf("%d",b);

	return 0;
}
