#include <stdio.h>
#include <stdlib.h>
#include <outil.h>
#include <client.h>
#include <commande.h>
#include <produit.h>
#include <vendeur.h>
#include <fonctionnalite.h>

// partie implementation des fonction de l'application

void gestionArticle(void)
{
    int choix_user = 0;
    system("clear");
    do
    {
        printf(" 01 - Ajouter Article\n");
        printf(" 02 - Modifier Article\n");
        printf(" 03 - Supprimer Article\n");
        printf(" 00 - Retour\n");

        scanf("%d",&choix_user);

        switch (choix_user)
        {
        case 1:
            system("clear");
            ajouterProduit();
            break;
        case 2:
            system("clear");
            modifierProduit();
            break;
        case 3:
            system("clear"); 
            supprimerProduit();
            break;

        case 0:
            system("clear");
            printf("Thank you !\n");
            break;

        default:
            printf("Option invalide !!\n");
            break;
        }

    } while (choix_user != 0);
}
void gestionClients(void)
{
    printf("comming soon \n");
}
void gestionVendeur(void)
{
    printf("comming soon \n");
}
void gestionCommande(void)
{
    printf("comming soon \n");
}
void etablirFActure(void)
{
    printf("comming soon \n");
}
void approvisionnement(void)
{
    printf("comming soon \n");
}
void paieVendeur(void)
{
    printf("comming soon \n");
}