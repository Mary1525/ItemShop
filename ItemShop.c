#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Inventaire { //caracteristiques des objets de l'inventaire
	char nomObjet[50];
	int prix;
};

typedef struct Inventaire inventaire; //renomme la structure

//fonction de tri inventaire perso
void triTableauP( inventaire tinvtP[50], int nbObjP){
	
	inventaire tampon;
	
	
	for(int i=0;i<nbObjP-1;i++){
		
		for(int j=0;j<nbObjP-1;j++){
			if (strcmp(tinvtP[j].nomObjet,tinvtP[j+1].nomObjet)>0){
				
				tampon=tinvtP[j];
				tinvtP[j]=tinvtP[j+1];
				tinvtP[j+1]=tampon;
				
				
			}
		}
	}
};

//FONCTION DE TRI INVENTAIRE VENDEUR
void triTableauV( inventaire tinvtV[3], int nbObjV){
	
	inventaire tampon;
	
	
	for(int i=0;i<nbObjV-1;i++){
		
		for(int j=0;j<nbObjV-1;j++){
			if (tinvtV[j].prix<tinvtV[j+1].prix){
				
				tampon=tinvtV[j];
				tinvtV[j]=tinvtV[j+1];
				tinvtV[j+1]=tampon;
				
				
			}
		}
	}
};



int main() {
	
	int nChoice=0;
	int nbObjP=3;
	int nbObjV=3;
	int nPrix=0;
	char nomNewObject[100];

//INVENTAIRE PERSO

 inventaire tinvtP[50] = {{"bouclier",10},{"armeAfeu",10},{"armeCorpsAcorps",10}};
 
 //INVENTAIRE VENDEUR
 
  inventaire tinvtV[3] = {{"potions",5},{"arcs",20},{"fleches",10}};

triTableauP(tinvtP,nbObjP);
 
 for (int i=0; i< nbObjP;i++){
	 printf("%s %d\n", tinvtP[i].nomObjet ,tinvtP[i].prix);
 }
 
 triTableauV(tinvtV,nbObjV);
 
 for (int j=0; j< nbObjV;j++){
	 printf("%d)%s %d\n",j, tinvtV[j].nomObjet ,tinvtV[j].prix);
 }
  scanf ("%d",&nChoice);
  
	
 tinvtP[3]=tinvtV[nChoice];
 tinvtV[nChoice].prix=0;

 strcpy(tinvtV[nChoice].nomObjet, "");
 
 
 
 nbObjP++;
 nbObjV--;
 
 triTableauP(tinvtP,nbObjP);
 
 for (int i=0; i< nbObjP;i++){
	 printf("%s %d\n", tinvtP[i].nomObjet ,tinvtP[i].prix);
 }
 
 triTableauV(tinvtV,nbObjV);
 
 for (int j=0; j< nbObjV;j++){
	 printf("%d)%s %d\n",j, tinvtV[j].nomObjet ,tinvtV[j].prix);
 }

scanf("%s", nomNewObject);
scanf("%d",&nPrix);

strcpy (tinvtV[3].nomObjet,nomNewObject);
tinvtV[3].prix=nPrix;
nbObjV++;

 printf("--%s %d\n", tinvtV[3].nomObjet ,tinvtV[3].prix);
 
triTableauP(tinvtP,nbObjP);
 
 for (int i=0; i< nbObjP;i++){
	 printf("%s %d\n", tinvtP[i].nomObjet ,tinvtP[i].prix);
 }
 for (int j=0; j< nbObjV;j++){
	 printf("&&%d)%s %d\n",j, tinvtV[j].nomObjet ,tinvtV[j].prix);
 }
 triTableauV(tinvtV,nbObjV);
 
 for (int j=0; j< nbObjV;j++){
	 printf("%d)%s %d\n",j, tinvtV[j].nomObjet ,tinvtV[j].prix);
 }

	return 0;
}