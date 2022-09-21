#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int i,k,n,m,choix1,choix2,code,qtt,Nqtt;
int nbr=0,j=0;

typedef struct medicament {
	 char nom[50];
	 int codeBarre;
	 int qtt;
	 float prix;
	 float ttc;
	 
}med;

//fonction de saisi
med* saisi (med *p,int m,int n){

	for (i=m;i<n;i++){
		
		printf("\nEntrer le nom du produit %d : ",i+1);
		scanf("%s",p[i].nom);
		printf("entrer le codeBarre du produit %d : ",i+1);
		scanf("%d",&p[i].codeBarre);
		printf("entrer la quantite du produit %d : ",i+1);
		scanf("%d",&p[i].qtt);
		printf("entrer le prix du produit %d : ",i+1);
		scanf("%f",&p[i].prix);
		printf("\n");
		printf("Produit ajoute' par succes.");
		printf("\n");
	}
	return p;
}

//Affichage du stock
void stock (med *p,int n){
	
	printf("Voici les produits valables au stock : \n");
	for (i=0;i<n;i++){
		printf("Nom du produit %d : %s \n",i+1,p[i].nom);
		printf("Code du produit %d : %d \n",i+1,p[i].codeBarre);
		printf("Quantite du produit %d : %d \n",i+1,p[i].qtt);
		printf("Prix du produit %d : %.2f \n",i+1,p[i].prix);
		printf("Prix TTC du produit %d : %.2f \n",i+1,p[i].prix+(p[i].prix*0.15));
		printf("\n");
	}
}

//sortPrix
void sortPrix(med *p, int n){
float tmp;
tmp=0;
for(i=0;i<n-1;i++){
    for(j=0;j<=n-i-1;j++){
            if(p[i].prix>p[j+1].prix){
               tmp=p[j].prix;
               p[j].prix=p[j+1].prix;
               p[j+1].prix=tmp;
            }
    }
}
stock(p,n);
}

//SortAlpha
void sortAlpha (med *p,int n){
	med let;
    int i,j;
    for(i=0;i<n;i++)
        {
            for( j=0;j<n-1;j++)
            {
                if(strcmp(p[j].nom,p[j+1].nom)==1)
                {
                let=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=let;
                }
            }

        }
        stock(p,n);
}

//Recherche par code
med* codeResearch(int code,med *p, int n){
    for(i=0;i<n;i++){
        if(code==p[i].codeBarre){
        	printf("Nom du produit : %s \n",p[i].nom);
		    printf("Quantite du produit : %d \n",p[i].qtt);
		    printf("Prix du produit : %.2f \n",p[i].prix);
		    printf("Prix TTC du produit : %.2f \n",p[i].ttc);
	 	    printf("\n");
	 	    break;
	}
        else
		printf("Produit introuvable."); 
    }
    
}

//Recherche par quantite
med* qttResearch(int qtt,med *p, int nbr){
    for(i=0;i<nbr;i++){
        if(qtt==p[i].qtt){
        	printf("Nom du produit : %s \n",p[i].nom);
		    printf("le codeBarre du produit : %d \n",p[i].codeBarre);
		    printf("Prix du produit : %.2f \n",p[i].prix);
		    printf("Prix TTC du produit : %.2f \n",p[i].ttc);
	 	    printf("\n");
	}
        else
		printf("Produit introuvable.\n"); 
    }
    
}

//Produit de quantité inferieur à 3
med* pInf3 (med *p){
	printf("Voici les produits inferieurs à 3 au stock : \n");
	for(i=0;i<nbr;i++){
        if(p[i].qtt<3){
        	printf("Nom du produit : %s \n",p[i].nom);
		    printf("le codeBarre du produit : %d \n",p[i].codeBarre);
		    printf("Prix du produit : %.2f \n",p[i].prix);
		    printf("Prix TTC du produit : %.2f \n",p[i].ttc);
	 	    printf("\n");
	}
    }
    if(p[i].qtt>3)
	printf("Aucun des produits n'est inferieur a 3.\n");
}

//la supression
void supp (med *p){
	            printf("Entrer le codeBarre du produit voulu :");
		        scanf("%d",&code);
		        for (i=0;i<nbr;i++){
		        	if(code==p[i].codeBarre){
					p[i]=p[i+1];
		        	nbr--;
					}
		        	
				}
				printf("Suppression bien effectue'.\n");
}


//achat
med* achat(med *p,int n){
	med *s;
	            printf("Entrer le codeBarre du produit voulu :");
		        scanf("%d",&code);
		        for(i=0;i<n;i++){
		        	if(code==p[i].codeBarre){
		        	 printf("Entrer la quantite a ajouter : ");
					       scanf("%d",&Nqtt);
					       if(Nqtt<p[i].qtt){
					       	    j++;
					       		p[i].qtt-=Nqtt;
					       	    strcpy(s[i].nom,p[i].nom);
					       	    s[i].codeBarre=p[i].codeBarre;
					       	    s[i].qtt=Nqtt;
					       	    s[i].prix=p[i].prix;
					       	    printf("Produit achete' par succes.\n");
						   }
						   else {
						   printf("Ce produit est epuise du stock.\n");
						   }
				   }
		        else 
		        printf("Ce produit n'existe pas au stock.\n");
				}		        
}

int main(){
	
	med *p; 
	med *s;
	s = malloc(j*sizeof(med));
    time_t now;
    time(&now);
    
    do {
    	system ("cls");
    	   printf("%s",ctime(&now));
    printf("--------------------\n|       Menu       |\n--------------------\n");
    printf("|       Pour ajouter un produit, entrer 1.              |\n");
    printf("|       Pour ajouter plusieurs produits, entrer 2.      |\n");
    printf("|       Pour voir le stock des produits, entrer 3.      |\n");
    printf("|       Pour rechercher des produits, entrer 4.         |\n");
    printf("|       Pour acheter un produit, entrer 5               |\n");
    printf("|       Pour voir les produits inferieur a 3, entrer 6. |\n");
    printf("|       Pour ajouter la quantite un produits , entrer 7 |\n");
    printf("|       Pour Supprimer un produit, entrer 8.  |\n");
    printf("|           ------------------------------------------  |\n");
    printf("|       Pour quitter, entrer 0.                         |\n");
    printf("Choix : ");
    scanf("%d",&choix1);
    printf("\n"); 
    switch (choix1){
    	case 0 : 
    	        system ("cls");
    	        printf("Fin du programme, au revoir :) .");
    	break;
    	case 1 :
    		   system ("cls");
               printf("Pour sortir appuyer sur 0.\nChoix : ");
               scanf("%d",&choix2);
               switch (choix2){
               	case 0 : 
               	printf("Retour au menu principale...");
               	break;
               	default : 
               	if(nbr==0){
	                	m=nbr;
                        nbr = 1;
                        p = malloc(nbr*sizeof(med));
                        p = saisi(p,m,nbr);
                }else{
                    m=nbr;
                    nbr+=1;
                    p = realloc(p,nbr);
                    p = saisi(p,m,nbr);
                }
                break;
			   }
			   
		break;	   
		case 2 : 
		        system ("cls");
		       	printf("Enter le nombre des produits  : ");
	            scanf("%d",&n);
	                if(nbr==0){
	                	m=nbr;
                        nbr = n;
                        p = malloc(nbr*sizeof(med));
                        p = saisi(p,m,nbr);
                }else{
                    m=nbr;
                    nbr+=n;
                    p = realloc(p,nbr);
                    p = saisi(p,m,nbr);
                }
	    break;
		case 3 :
			system ("cls");
			if (nbr>0){
			do{
		        printf("Choisissez a methode d'affichage : \n");
		        printf("1 : Affichage par ordre alphabetique.\n2 : Affichage par prix decroissant.\n0 : Pour sortir.\nChoix : ");
		        scanf("%d",&choix2);
		        switch(choix2){
		        	case 1 : 
		        	       sortAlpha(p,nbr);
		        	       printf("\n");
		        	break;
		        	case 2 : 
		        	       sortPrix(p,nbr);
		        	       printf("\n");
		        	break;
					
				default : 
				        printf("Choix invalide reesayer.\n");	       
				}
			}
			while(choix2!=0);}
			else 
			printf("Le stock est encore vide. \n");
		break;   
		case 4 : 
		system ("cls");
		      if (nbr>0){
		      	do{
		      		  printf("1: Recherche par codeBarre.\n2: Recherche par quantite' .\n");
		              printf("Choisissez la methode qui vous convient : ");
		              scanf("%d",&choix2);
		        switch (choix2){
		        	case 1 : 
		        	        printf("Entrer le codeBarre du produit voulu :");
		                    scanf("%d",&code);
		                    codeResearch(code,p,nbr);
		                    printf("\n");
		            break;
					case 2 : 
					       printf("Entrer la quantite du produit voulu :");
		                   scanf("%d",&qtt);
		                   qttResearch(qtt,p,nbr);
		                   printf("\n");
					break ;	   
					default : 
					      printf("Choix invalide reesayer.\n");	        
				    }
				    }
				  while(choix2!=0);
			    }
		break;
		case 5 : 
		system ("cls");
		      achat(p,nbr);
		break;
		case 6 : 
		system ("cls");
		        pInf3(p);
		break;
		case 7 :
			system ("cls");
		        
		break;
		case 8 :
			system ("cls");
		        supp(p);
		break ;
		case 9 :
			system ("cls");
		break;            
	}
}
while (choix1!=0);
	
	
	return 0;
}


