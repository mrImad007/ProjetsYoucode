#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int i,j,k,nbr,code,c=0;

typedef struct medicament {
	 char nom[50];
	 int codeBarre;
	 int qtt;
	 int qttVendu;
	 float prix;
	 float ttc;
	 
}med;

//fonction de saisi
med* saisi (med *p,int m,int c){

	for (i=m;i<c;i++){
		
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
void stock (med *p,int c){
	
	printf("Voici les produits valables au stock : \n");
	for (i=0;i<c;i++){
		printf("Nom du produit %d : %s \n",i+1,p[i].nom);
		printf("Code du produit %d : %d \n",i+1,p[i].codeBarre);
		printf("Quantite du produit %d : %d \n",i+1,p[i].qtt);
		printf("Prix du produit %d : %.2f \n",i+1,p[i].prix);
		printf("Prix TTC du produit %d : %.2f \n",i+1,p[i].prix+(p[i].prix*0.15));
		printf("\n");
	}
}

//sortPrix
void sortPrix(med *p, int c){
float tmp;
tmp=0;
for(i=0;i<c-1;i++){
    for(j=0;j<=c-i-1;j++){
            if(p[i].prix>p[j+1].prix){
               tmp=p[j].prix;
               p[j].prix=p[j+1].prix;
               p[j+1].prix=tmp;
            }
    }
}
stock(p,c);
}

//SortAlpha
void sortAlpha (med *p,int c){
	med let;
    int i,j;
    for(i=0;i<c;i++)
        {
            for( j=0;j<c-1;j++)
            {
                if(strcmp(p[j].nom,p[j+1].nom)==1)
                {
                let=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=let;
                }
            }

        }
        stock(p,c);
}

//Recherche par code
void codeResearch(int code,med *p, int c){
    for(i=0;i<c;i++){
        if(code==p[i].codeBarre){
        	printf("Nom du produit : %s \n",p[i].nom);
		    printf("Quantite du produit : %d \n",p[i].qtt);
		    printf("Prix du produit : %.2f \n",p[i].prix);
		    printf("Prix TTC du produit : %.2f \n",p[i].prix+(p[i].prix*0.15));
	 	    printf("\n");
	 	    break;
	} 
    }
    if (code!=p[i].codeBarre){
    	printf("Ce produit n'existe pas au stock.\n");
	}
    
}

//Recherche par quantite
void qttResearch(int qtt,med *p, int c){
    for(i=0;i<c;i++){
        if(qtt==p[i].qtt){
        	printf("Nom du produit : %s \n",p[i].nom);
		    printf("le codeBarre du produit : %d \n",p[i].codeBarre);
		    printf("Prix du produit : %.2f \n",p[i].prix);
		    printf("Prix TTC du produit : %.2f \n",p[i].prix+(p[i].prix*0.15));
	 	    printf("\n");
	} 
    }
   
}

//Produit de quantité inferieur à 3
void pInf3 (med *p,int c){
	printf("Voici les produits inferieurs à 3 au stock : \n");
	for(i=0;i<nbr;i++){
        if(p[i].qtt<3){
        	printf("Nom du produit : %s \n",p[i].nom);
		    printf("le codeBarre du produit : %d \n",p[i].codeBarre);
		    printf("Prix du produit : %.2f \n",p[i].prix);
		    printf("Prix TTC du produit : %.2f \n",p[i].prix+(p[i].prix*0.15));
	 	    printf("\n");
	}
    }
    if(p[i].qtt>3)
	printf("Aucun des produits n'est inferieur a 3.\n");
}

//la supression
void supression(med *p){
	
	            printf("Entrer le codeBarre du produit voulu :");
		        scanf("%d",&code);
		        for (i=0;i<c;i++){
		        	if(code==p[i].codeBarre){
		        		p[i]=p[i+1];
					}
		        	c--;
					}

				
				printf("Suppression bien effectue'.\n");
				stock(p,c);
}


//achat
med* achat(med *p,int c){
	int Nqtt;
	
	            printf("Entrer le codeBarre du produit voulu :");
		        scanf("%d",&code);
		        for(i=0;i<c;i++){
		        	if(code==p[i].codeBarre){
		        	 printf("Entrer la quantite voulu : ");
					       scanf("%d",&Nqtt);
					       if(Nqtt<p[i].qtt){
					       		p[i].qtt-=Nqtt;
					       	    printf("Produit achete' par succes.\n");
					       	    printf("Quantite restante : %d .\n",p[i].qtt);
					       	    printf("Le montant a payer est : %.2f .\n",(p[i].prix+(p[i].prix*0.15))*Nqtt);
					       	    p[i].qttVendu=Nqtt;
						   }
						   else {
						   printf("Ce produit est epuise du stock.\n");
						   }
				   }
				}		        
}

//l'ajout du quantité
void ajout(med *p){
	int Nqtt;
	 printf("Entrer le codeBarre du produit voulu :");
		        scanf("%d",&code);
		        for(i=0;i<c;i++){
		        	if(code==p[i].codeBarre){
		        	       printf("Entrer la quantite a ajouter : ");
					       scanf("%d",&Nqtt);
					       p[i].qtt+=Nqtt;
					   }
				}
				stock(p,c);
}

//statistiques
//total des produits vendus
void total (med *p){
	float total;
	for (i=0;i<c;i++){
		total+=p[i].qttVendu*(p[i].prix+(p[i].prix*0.15));
	}
	 printf("Le total des ventes est : %.2f\n",total);
}
//moyenne des ventes 
void moyenne(med *p,int Nqtt){
	float total,moy;
	for (i=0;i<c;i++){
		total+=p[i].qttVendu*(p[i].prix+(p[i].prix*0.15));
	}
	moy=total/Nqtt;
	printf("Le total des ventes est : %.2f\n",moy);
}

int main(){
	int i,k,n,m,choix1,choix2,code,qtt,Nqtt,ttl;
    int nbr=0,j=0;
	med *p; 
    time_t now;
    time(&now);
    
    do {
    	
    	   printf("%s",ctime(&now));
    printf("--------------------\n|       Menu       |\n--------------------\n");
    printf("|       Pour ajouter un produit, entrer 1.              |\n");
    printf("|       Pour ajouter plusieurs produits, entrer 2.      |\n");
    printf("|       Pour voir le stock des produits, entrer 3.      |\n");
    printf("|       Pour rechercher des produits, entrer 4.         |\n");
    printf("|       Pour acheter un produit, entrer 5               |\n");
    printf("|       Pour voir les produits inferieur a 3, entrer 6. |\n");
    printf("|       Pour ajouter la quantite un produits , entrer 7 |\n");
    printf("|       Pour Supprimer un produit, entrer 8.            |\n");
    printf("|       Pour afficher les statistiques, entrer 9.       |\n");
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
                        c++;
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
                        c+=nbr;
                }else{
                    m=nbr;
                    nbr+=n;
                    p = realloc(p,nbr);
                    p = saisi(p,m,nbr);
                    c+=nbr;
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
		        	       sortAlpha(p,c);
		        	       printf("\n");
		        	break;
		        	case 2 : 
		        	       sortPrix(p,c);
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
		
		      achat(p,nbr);
		break;
		case 6 : 
		
		        pInf3(p,nbr);
		break;
		case 7 :
			ajout(p);
		        
		break;
		case 8 :
			
		        supression(p);
		break ;
		case 9 :
			printf("1: Pour afficher le total des prix des produits vendus en journée courante.\n");
			printf("2: Pour afficher la moyenne des prix des produits vendus en journée courante.\n");
			printf("3: Pour afficher le Max des prix des produits vendus en journée courante.\n");
			printf("4: Pour afficher le Min des prix des produits vendus en journée courante.\n");
			printf("0: Pour quitter.\n");
			printf("choix : ");
			scanf("%d",&choix2);
			switch(choix2){
				case 1 : 
				       total (p);
				      
				break; 
				case 2 :
				       moyenne(p,Nqtt);
				break;       
			}
		break;            
	}
}
while (choix1!=0);
	
	
	return 0;
}


