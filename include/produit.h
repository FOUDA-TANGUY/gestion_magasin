#ifndef __PRODUIT__H__
#define __PRODUIT__H__

// structure et foction en rapport avec le produit
#define FILE_PRODUIT "donnee/produit.data"
#define MAX 15

typedef struct produit
{
    char code[MAX];
    char nom_produit[MAX];
    int qte_stock;
    int qte_seuil;
    int prix_unitaire;
}produit;

void saisirProduit(FILE*,produit*);
void lireProduit(FILE*, produit*);
int getProduits(FILE*,produit*);
void saveProduits(FILE*, produit*,int);
void ajouterProduit(void);
void modifierProduit(void);
void supprimerProduit(void);

#endif