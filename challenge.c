#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>

typedef struct birth{
        int jour;
        int mois;
        int annee;
    }cord;
typedef struct etudiant
    {
       char name[50];
       int age;
       char prenom[50];
       cord aget;
    }std;
    
    
int age(cord date){
     int day, month, year;
     time_t now;
     time(&now);
      struct tm *local = localtime(&now);      
      day = local->tm_mday;          
      month = local->tm_mon + 1;     
      year = local->tm_year + 1900;  
      int age=year-date.annee;
      if(((date.mois)*31 + (date.jour)) > (month*31 + day))
	   age=age-1;
      return age;
    }
    
    
std* saisie(std *T,int N){
    int i;
    for(i=0;i<N;i++){
     printf("Etudiant %d: ",i+1);
     printf("\nNom : ");
     scanf("%s",T[i].name);
     printf("Prenom : ");
     scanf("%s",T[i].prenom);
     printf("Date de naissance : \n");
     printf("Jour : ");
     scanf("%d",&T[i].aget.jour);
     printf("Mois : ");
     scanf("%d",&T[i].aget.mois);
     printf("Annee : ");
     scanf("%d",&T[i].aget.annee);
     T[i].age=age(T[i].aget);
     printf("\n");
    }return T;
}
std* sort(std *T,int N){
        int c,i;
        do{
       c=0;
      for(i=0;i<N-1;i++){
        if(T[i].age>T[i+1].age){
           std tmp;
           tmp=T[i];
           T[i]=T[i+1];
           T[i+1]=tmp;
           c++;
        }
      }
    }while(c>0);
        return T;
    }
void affichage(std *T,int N){
int i;
    for(i=0;i<N;i++){
                 printf("\n\tEtudiant %d: ",i+1);
                 printf("\nNom : %s",T[i].name);
                 printf("\nPrenom : %s",T[i].prenom);
                 printf("\nDate de naissance : %d/%d/%d",T[i].aget.jour,T[i].aget.mois,T[i].aget.annee);
                 printf("\nAge : %d",T[i].age);
                 printf("\n");
               }
}
int moyenne(std *T,int N){
        int i,moyenne,somme=0;
        for(i=0;i<N;i++){
            somme=somme+T[i].age;
        }moyenne = somme/N;
        return moyenne;
    }
int maximum(std *T,int N){
        int i,max=T->age;
        for(i=0;i<N;i++){
            if(T[i].age>max){
                max=T[i].age;
            }
        }return max;
    }
int minimum(std *T,int N){
        int i,min=T->age;
        for(i=0;i<N;i++){
            if(T[i].age<min){
                min=T[i].age;
            }
        }return min;
    }

int main(){
    std *T;
    int i,N,moy,max,min,choix;
    printf("Enter le nombre des etudiants : ");
    scanf("%d",&N);
    T=malloc(N*sizeof(std));
    T=saisie(T,N);
    printf("\nBienvenu au menu");
    do{
        printf("\n1: Pour afficher la liste triee des etudiants.");
        printf("\n2: Pour afficher la moyenne d'age. ");
        printf("\n3: Pour afficher l'age maximale. ");
        printf("\n4: Pour afficher l'age minimale. ");
        printf("\n0: Pour quitter.");
        printf("\n");
        printf("choisissez : ");
        scanf("%d",&choix);
        switch(choix){
            case 0 :
              printf("Au revoir. :)");
            break;
            case 1 :
              T=sort(T,N);
              affichage(T,N);
              printf("\n");
            break;
            case 2 :
             moy=moyenne(T,N);
              printf("\nLa moyenne d'age est : %d",moy);
              printf("\n");
            break;
            case 3 :
              max=maximum(T,N);
              printf("\nL'age maximale est : %d",max);
              printf("\nLes etudiants les plus grands : ");
              for(i=0;i<N;i++){
                if(T[i].age==max){
                printf("\n\tEtudiant %d: ",i+1);
                 printf("\nNom : %s",T[i].name);
                 printf("\nPrenom : %s",T[i].prenom);
                 printf("\nDate de naissance : %d/%d/%d",T[i].aget.jour,T[i].aget.mois,T[i].aget.annee);
                 printf("\nAge : %d",T[i].age);
                 printf("\n");
                 }  
               }
            break;
            case 4 :
             min=minimum(T,N);
             printf("\nL'age minimale est : %d",min);
             printf("\nLes etudiants les plus petits : ");
             for(i=0;i<N;i++){
                if(T[i].age==min){
                printf("\n\tEtudiant %d: ",i+1);
                 printf("\nNom : %s",T[i].name);
                 printf("\nPrenom : %s",T[i].prenom);
                 printf("\nDate de naissance : %d/%d/%d",T[i].aget.jour,T[i].aget.mois,T[i].aget.annee);
                 printf("\nAge : %d",T[i].age);
				 printf("\n");
				 }
                 
               }
            break;
        }
    }while(choix!=0);
}
