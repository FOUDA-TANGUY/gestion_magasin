#include <stdio.h>
#include <stdlib.h>
#include <client.h>
#include <commande.h>
#include <vendeur.h>
#include <produit.h>
#include <outil.h>

// partie implementation des fonction du client
void etablirFActure(const char* commande)
{
    int i,j;
    char facture[SIZE][SIZE];
    /*printf("Entrez le numero du client : ");
    scanf("%s", c.numero_client);*/
    affichage();
    printf("|CODE PRODUIT |DESIGNATION    |QUANTITE       |PRIX-UNITAIRE  |PRIX-ARTICLE   |\n");
    for(i=0 ; i<SIZE ; i++)
    {
        for(j=0 ; j<SIZE ; j++)
        {
        
        }
    }
}
void affichage(void)
{
    client c;
    printf("%11s\n%11s\n%11s\n", c.numero_client,c.nom_client,c.adresse);
}
void affichage2(void)
{
    
}
har numero_client[MAX];
    char nom_client[MAX];
    char adresse[MAX];