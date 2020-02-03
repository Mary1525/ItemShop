#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Inventaire { //caracteristiques des objets de l'inventaire
	int nombre;
	int prix;
};

typedef struct Inventaire inventaire; //renomme la structure


/*void achat (objet*typeObjet,int myMoney) {
	myMoney -= (*typeObjet).prix;

}*/


int main() {
	
//INVENTAIRE PERSO
 inventaire bouclier={3};
 inventaire armeAfeu={6};
 inventaire armeCorpsAcorps={10};
 
 inventaire tinvP[50] = {bouclier, armeAfeu, armeCorpsAcorps};
 
 printf("Voici votre inventaire :\n%d boucliers \n", bouclier.nombre,bouclier.prix);
 printf("%d armes a feu \n", armeAfeu.nombre, armeAfeu.prix);
 printf("%d armes corps a corps \n", armeCorpsAcorps.nombre, armeCorpsAcorps.prix);
 
 //INVENTAIRE VENDEUR
 
 inventaire bouclier={3, 10};
 inventaire armeAfeu={6, 15};
 inventaire armeCorpsAcorps={10,20};
 
 inventaire tinvP[50] = {bouclier, armeAfeu, armeCorpsAcorps};
 
 printf("Bienvenu cher client ,veux-tu acheter quelque chose ? nous avons bon nombre d'objets ! :\n%d boucliers au prix de %d $\n", bouclier.nombre,bouclier.prix);
 printf("%d armes a feu au prix de %d $\n", armeAfeu.nombre, armeAfeu.prix);
 printf("%d armes corps a corps au prix de %d $\n", armeCorpsAcorps.nombre, armeCorpsAcorps.prix);

	return 0;
}