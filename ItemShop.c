#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Objet { //caracteristiques des objets de l'inventaire
	char nom;
	int prix;
};

typedef struct Objet objet; //renomme la structure

void achat (objet*typeObjet,int myMoney) {
	myMoney -= (*typeObjet).prix;

}


int main() {
	
	int myMoney = 100;
	printf("tu as au total %d $\n", myMoney);

	objet armeCorpsaCorps = { "couteau",5};
	printf("voici le premier objet que tu achetes: le %c est a %d $\n", armeCorpsaCorps.nom, armeCorpsaCorps.prix);

	achat (armeCorpsaCorps.prix);
	printf("il te reste %d $\n",myMoney);


	return 0;
}