#ifndef __COMMANDE__H__
#define __COMMANDE__H__

// structure et foction en rapport avec le commande
#define FILE_COMMMANDE "donnee/commande.data"

typedef struct commande
{
    char numero_commande[MAX];
    char numero_client[MAX];
    char code[MAX];
    int quantite;
    char matricule_vendeur[MAX];
}commande;

void saisirCommande(FILE*,commande*);
void lireCommande(FILE*, commande*);
int getCommandes(FILE*,commande*);
void saveCommandes(FILE*, commande*,int);
void ajouterCommande(void);
void modifierCommande(void);
void supprimerCommande(void);

#endif