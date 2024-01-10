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
            ajouterProduit();
            system("clear");
            break;
        case 2:
            modifierProduit();
            system("clear");
            break;
        case 3:
            supprimerProduit();
            system("clear");
            break;

        case 0:
            system("clear");
            break;

        default:
            printf("Option invalide !!\n");
            break;
        }

    } while (choix_user != 0);
}
void gestionClients(void)
{
    int choix_user = 0;
    system("clear");
    do
    {
        printf(" 01 - Ajouter Client\n");
        printf(" 02 - Modifier Client\n");
        printf(" 03 - Supprimer Client\n");
        printf(" 00 - Retour\n");

        scanf("%d",&choix_user);

        switch (choix_user)
        {
        case 1:
            ajouterClient();
            system("clear");
            break;
        case 2:
            modifierCLient();
            system("clear");
            break;
        case 3:
            supprimerClient();
            system("clear");
            break;

        case 0:
            system("clear");
            break;

        default:
            printf("Option invalide !!\n");
            break;
        }

    } while (choix_user != 0);
}
void gestionVendeur(void)
{
    int choix_user = 0;
    system("clear");
    do
    {
        printf(" 01 - Ajouter Vendeur\n");
        printf(" 02 - Modifier Vendeur\n");
        printf(" 03 - Supprimer Vendeur\n");
        printf(" 00 - Retour\n");

        scanf("%d",&choix_user);

        switch (choix_user)
        {
        case 1:
            ajouterVendeur();
            system("clear");
            break;
        case 2:
            modifierVendeur();
            system("clear");
            break;
        case 3:
            supprimerVendeur();
            system("clear");
            break;

        case 0:
            system("clear");
            break;

        default:
            printf("Option invalide !!\n");
            break;
        }

    } while (choix_user != 0);
}
void gestionCommande(void)
{
    int choix_user = 0;
    system("clear");
    do
    {
        printf(" 01 - Ajouter Commande\n");
        printf(" 02 - Modifier Commande\n");
        printf(" 03 - Supprimer Commande\n");
        printf(" 00 - Retour\n");

        scanf("%d",&choix_user);

        switch (choix_user)
        {
        case 1:
            ajouterCommande();
            system("clear");
            break;
        case 2:
            modifierCommande();
            system("clear");
            break;
        case 3:
            supprimerCommande();
            system("clear");
            break;

        case 0:
            system("clear");
            break;

        default:
            printf("Option invalide !!\n");
            break;
        }

    } while (choix_user != 0);
}
void etablirFacture(void)
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