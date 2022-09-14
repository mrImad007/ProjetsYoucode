#include<stdio.h>
#include<stdlib.h>

void TriDecroissant(float *Z, int N){
int i,j;
float a;
 for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        if(*(Z+i)>*(Z+j)){
            a=*(Z+i);
            *(Z+i)=*(Z+j);
            *(Z+j)=a;
        }
    }
 }
    printf("les elements du tableau par ordre croissant sont : \n");
        for(i=0;i<N;i++){
                printf("%.2f \n",*(Z+i));
        }
    printf("\n");
}

//tri par selection
void TriSelection(float *Z,int N){
    int i,j,index;
    int tmp=0;
 for(i=0;i<N;i++){
    index=i;
 for (j=i + 1; j < N; j++)
    {
      if (*(Z+index) > *(Z+j))
     index=j;

      if(index!=i){
        tmp=*(Z+j);
        *(Z+j)=*(Z+index);
        *(Z+index)=tmp;
             }
      }}
      printf("le tableau par ordre croissant METHODE PAR SELECTION \n");
        for(i=0;i<=N-1;i++){
            printf("%.2f \t",*(Z+i));

        }

}
        
//Tri bulle
void TriBulle(float *Z, int N){
int i,j,tmp;
tmp=0;
for(i=0;i<=N-1;i++){
    for(j=i+1;j<=N-1;j++){
            if(*(Z+j)>*(Z+j)){
               tmp=*(Z+i);
               *(Z+i)=*(Z+j+1);
               *(Z+j+1)=tmp;
            }
    }
}
printf("\n le tableau par ordre croissant METHODE A BULLE \n");
        for(j=0;j<=N-1;j++){
            printf("%.2f \t",*(Z+j));

        }
}   
     
float moy(float *Z, int N){
	int i;
    float S=0,M;
   // float *Z;
  
	for (i=0;i<N;i++)
	{
		S = S + *(Z+i);
	}
	
	M=S/N;
	
	return M;
}



int main(void)
{
	int i,N;
	float *Z;
	Z = malloc (N *sizeof (float));
	
	printf("entrer le nombre d'etudiants : ");
	scanf("%d",&N);
    
	for (i=0;i<N;i++)
	{
		printf("Enter la note de l'etudiant %d: ",i+1);
		scanf("%f",Z+i);
	}
	
	float moyenne =  moy(Z,N);
	
	printf("La moyenne des notes des etudiants est : %.2f\n",moyenne);
	if (moyenne<10)
	printf("La moyenne de la classe est tres mauvaise.\n");
	else if (10<=moyenne<15)
	printf("La moyenne de la classe est acceptable. \n");
	else 
	printf("La moyenne de la classe est exellente.\n");
	TriDecroissant(Z,N);
	TriSelection(Z,N);
	TriBulle(Z,N);
	
	return 0;
}
