#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct stock_ventes {
	int Nproduit;
}sell;

typedef struct medicament {
	 char nom[50];
	 int codeBarre;
	 int qtt;
	 float prix;
	 float ttc;
	 
}med;

//fonction de saisi
med* saisi (med *p,int m,int n){
	int i;

	for (i=m;i<n;i++){
		
		printf("\nEntrer le nom du produit %d : ",i+1);
		scanf("%s",p[i].nom);
		printf("entrer le code du produit %d : ",i+1);
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
	int i;
	p[i].ttc=p[i].prix+(p[i].prix*0.15);
	printf("Voici les produits valables au stock : \n");
	for (i=0;i<n;i++){
		printf("Nom du produit %d : %s \n",i+1,p[i].nom);
		printf("Code du produit %d : %d \n",i+1,p[i].codeBarre);
		printf("Quantite du produit %d : %d \n",i+1,p[i].qtt);
		printf("Prix du produit %d : %.2f \n",i+1,p[i].prix);
		printf("Prix TTC du produit %d : %.2f \n",i+1,p[i].ttc);
		printf("\n");
	}
}

//sortPrix
void sortPrix(med *p, int n){
int i,j;
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
    int i;
    for(i=0;i<n;i++){
        if(code==p[i].codeBarre){
        	printf("Nom du produit : %s \n",p[i].nom);
		    printf("Quantite du produit : %d \n",p[i].qtt);
		    printf("Prix du produit : %.2f \n",p[i].prix);
		    printf("Prix TTC du produit : %.2f \n",p[i].ttc);
	 	    printf("\n");
	}
        else
		printf("Produit introuvable."); 
    }
    
}

//Recherche par quantite
med* qttResearch(int qtt,med *p, int nbr){
    int i;
    for(i=0;i<nbr;i++){
        if(qtt==p[i].qtt){
        	printf("Nom du produit : %s \n",p[i].nom);
		    printf("le codeBarre du produit : %d \n",p[i].codeBarre);
		    printf("Prix du produit : %.2f \n",p[i].prix);
		    printf("Prix TTC du produit : %.2f \n",p[i].ttc);
	 	    printf("\n");
	 	    break;
	}
        else
		printf("Produit introuvable.\n"); 
    }
    
}

//Produit de quantité inferieur à 3
med* pInf3 (med *p,int nbr){
	int i;
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
}
int main(){
	int i,k,n,m,choix1,choix2,code,qtt;
	int nbr=0,j=0;
	med *p; 
	sell *s;
	s = malloc(j*sizeof(sell));
	//s=malloc(*k*sizeof(sell));
    time_t now;
    time(&now);
    int vente;
    
    do {
    	printf("%s",ctime(&now));
    printf("--------------------\n|       Menu       |\n--------------------\n");
    printf("|       Pour ajouter un produit, entrer 1.              |\n");
    printf("|       Pour ajouter plusieurs produits, entrer 2.      |\n");
    printf("|       Pour voir le stock des produits, entrer 3.      |\n");
    printf("|       Pour rechercher des produits, entrer 4.         |\n");
    printf("|       Pour acheter un produit, entrer 5               |\n");
    printf("|       Pour voir les produits inferieur a 3,entrer 6.  |\n");
    printf("|           ------------------------------------------  |\n");
    printf("|       Pour quitter, entrer 0.                         |\n");
    printf("Choix : ");
    scanf("%d",&choix1);
    printf("\n"); 
    switch (choix1){
    	case 0 : 
    	        printf("Fin du programme, au revoir :) .");
    	break;
    	case 1 :
    		   
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
		      if (nbr>0){
		      	do{
		      		  printf("1: Recherche par codeBarre.\n2: Recherche par quantite' .\n");
		              printf("Choisissez la methode qui vous convient : ");
		              scanf("%d",&choix2);
		        switch (choix2){
		        	case 1 : 
		        	        printf("entrer le codeBarre du produit voulu :");
		                    scanf("%d",&code);
		                    codeResearch(code,p,nbr);
		                    printf("\n");
		            break;
					case 2 : 
					       printf("entrer la quantite du produit voulu :");
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
		      printf("pour acheter un produit, entrer son codeBarre : ");
		      scanf("%d",&code);
		      codeResearch(code,p,nbr);
		      printf("\n");
		      printf("Pour annuler appuyer sur 0 : \n");
		      scanf("%d",&choix2);
		      switch(choix2){
		      	case 1 :
		      		j++;
		      		printf("Entrer la quantite' voulu : ");
		      		scanf("%d",&s[k].Nproduit);
		      		if (s[k].Nproduit<p[i].qtt){
		      			p[i].qtt -= s[k].Nproduit;
		      		printf("voici les details de l'achat : \n");
		      		printf("date de l'achat : %s",ctime(&now));
		      		
		      		printf("la quantite restante est : %d\n",p[i].qtt);	
					  }
					else {
						printf("Quantite au stock insuffisante.\n");
						printf("voici la quantite restante : %d",p[i].qtt);
					}
				
				default : 
				    printf("Retour au menu.\n");
				    printf("\n");
			  }
		break;
		case 6 : 
		        pInf3(p,nbr);
		break;             
	}
}
while (choix1!=0);
	
	
	return 0;
}



