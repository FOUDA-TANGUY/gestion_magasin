#ifndef __VENDEUR__H__
#define __VENDEUR__H__

// structure et foction en rapport avec le client

#define FILE_VENDEUR "donnee/vendeur.data"

typedef struct vendeur
{
    char matricule_vendeur[MAX];
    char nom_vendeur[MAX];
    int salaire;
}vendeur;

void saisirVendeur(FILE*,vendeur*);
void lireVendeur(FILE*, vendeur*);
int getVendeurs(FILE*,vendeur*);
void saveVendeurs(FILE*, vendeur*,int);
void ajouterVendeur(void);
void modifierVendeur(void);
void supprimerVendeur(void);

#endif