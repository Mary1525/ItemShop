#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Inventaire { //caracteristiques des objets de l'inventaire
	char nomObjet[50];
	int prix;
};

typedef struct Inventaire inventaire; //renomme la structure



int main() {
	
//INVENTAIRE PERSO

 inventaire tinvtP[50] = {{"bouclier",10},{"armeAfeu",10},{"armeCorpsAcorps",10}};
 
 printf("Voici votre inventaire :\n%s au prix de %d $\n", tinvtP[0].nomObjet,tinvtP[0].prix);
 printf("%s au prix de %d $\n", tinvtP[1].nomObjet,tinvtP[1].prix);
 printf("%s au prix de %d $\n", tinvtP[2].nomObjet,tinvtP[2].prix);
 
 //INVENTAIRE VENDEUR
 
  inventaire tinvtV[50] = {{"possions",10},{"arcs",10},{"fleches",10}};
 
 printf("\nBienvenu cher client ,veux-tu acheter quelque chose ? nous avons bon nombre d'objets ! :\n%s au prix de %d $\n", tinvtV[0].nomObjet,tinvtV[0].prix);
 printf("%s au prix de %d $\n",tinvtV[1].nomObjet,tinvtV[1].prix);
 printf("%s au prix de %d $\n",tinvtV[2].nomObjet,tinvtV[2].prix);

	return 0;
}