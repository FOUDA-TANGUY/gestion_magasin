#include <stdio.h>
#include <stdlib.h>
#include <outil.h>
#include <commande.h>

void saisirCommande(FILE* F,commande* c)
{
    fprintf(F , "%s ; %s ; %s ; %d ; %s\n", c->numero_commande,c->numero_client,c->code,c->quantite,c->matricule_vendeur);
}
void lireCommande(FILE* F, commande* c)
{
    fscanf(F ,"%s ; %s ; %s ; %d ; %s\n", c->numero_commande,c->numero_client,c->code,&c->quantite,c->matricule_vendeur);
}
int getCommandes(FILE* F,commande* TAB)
{
    
}
char numero_commande[MAX];
    char numero_client[MAX];
    char code[MAX];
    int quantite;
    char matricule_vendeur[MAX];

// partie implementation des fonction du client