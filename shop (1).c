#include <stdio.h>
#include <string.h>



// Création de la variable item du shop à mettre dans un tableau
struct Item{
    int nombre;
	int price;
	char name[30];
};

//Renommer
typedef struct Item item;



// Création de la variable item de l'inventaire
struct Inventaire{
    int argent;
    item itemJ[10];

};

//Renommer
typedef struct Inventaire inventaire;


int main(){
    
    
//Choix du menu
int choix=0;
int choixObjet=0;

//Creation inventaire

inventaire inventaireJ;
inventaireJ.argent = 100;

item potion = {5,15,"Potion"};
inventaireJ.itemJ[0] = potion;

    
//Initialisation du tableau (magasin) le pointeur i va aller chercher 
//les éléments de la variable "item" dans le tableau shop  
    item shop[50];
    int i=0;
    
   
    for (i=0;i<50;i++){
     shop[i].price=0;
     shop[i].nombre=0;
}

    item arc = {5,15,"Arc"};
    shop[0] = arc;
    item baton = {5,4,"Baton"};
    shop[1] = baton;
    item casque = {5,25,"Casque"};
	shop[2] = casque;
	item epee = {5,30,"Epee"};
	shop[3] = epee;
	item fleche = {30,2,"Fleche"};
	shop[4] = fleche;


    while (choix!=3){
    
    
        printf("Bienvenue dans le magasin, voyageur, désirez vous acheter un objet (1), créer un objet (2) ou quitter (3) ? : \n");
        scanf("%d",&choix);
        
    
        // le joueur achète un objet
        if (choix==1){
            printf("Quel objet désirez vous acheter ? \n");
            for (i=0;i<50;i++){
                if(shop[i].price==0)break;
                printf("%s",shop[i].name);    
                printf("\t%d  pièces\t%d elements \t(%d) \n",shop[i].price,  shop[i].nombre,  i);
               
              
            }
           
            scanf("%d",&choixObjet);
            printf("vous avez selectionne l'objet %s \n",shop[choixObjet].name);
            
            if (inventaireJ.argent <= shop[choixObjet].price){
               printf("vous n'avez pas assez d'argent");
            }
            
            else{
                
                inventaireJ.argent = inventaireJ.argent-shop[choixObjet].price;
                shop[choixObjet].nombre =   shop[choixObjet].nombre - 1;
                
                for (i=0;i<10;i++){
                  if(inventaireJ.itemJ[i].price==0)break;
                  printf("%s",inventaireJ.itemJ[i].name);    
                  printf("\t%d  pièces\t%d elements \n",inventaireJ.itemJ[i].price,  inventaireJ.itemJ[i].nombre);    
                } 
            }
            
            
       }
    
    
        // le joueur crée un objet
        else if (choix==2){
        
        
        
        
        }
    }

}