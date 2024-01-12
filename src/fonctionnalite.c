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
        entete("GESTION-ARTICLE",100);
        option("01","Ajouter Article",100);
        option("02","Modifier Article",100);
        option("03","Supprimer Article",100);
        option("00","Retour",100);
        printf("+");
        dessiner('-',98);
        printf("+\n");

        if(choix_user < 0 || choix_user > 3)
        {
            dessiner(' ',30);
            printf("Option invalide !!\n");
        }   
        dessiner(' ',30);
        printf("Choisir : ");

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
        entete("GESTION-CLIENTS",100);
        option("01","Ajouter Client",100);
        option("02","Modifier Client",100);
        option("03","Supprimer Client",100);
        option("00","Retour",100);
        printf("+");
        dessiner('-',98);
        printf("+\n");


        if(choix_user < 0 || choix_user > 3)
        {
            dessiner(' ',30);
            printf("Option invalide !!\n");
        }   
        dessiner(' ',30);
        printf("Choisir : ");
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
        entete("GESTION-VENDEURR",100);
        option("01","Ajouter Vendeur",100);
        option("02","Modifier Vendeur",100);
        option("03","Supprimer Vendeur",100);
        option("00","Retour",100);
        printf("+");
        dessiner('-',98);
        printf("+\n");


        if(choix_user < 0 || choix_user > 3)
        {
            dessiner(' ',30);
            printf("Option invalide !!\n");
        }   
        dessiner(' ',30);
        printf("Choisir : ");

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
        entete("GESTION-COMMANDE",100);
        option("01","Ajouter Commande",100);
        option("02","Modifier Commande",100);
        option("03","Supprimer Commande",100);
        option("00","Retour",100);
        printf("+");
        dessiner('-',98);
        printf("+\n");


        if(choix_user < 0 || choix_user > 3)
        {
            dessiner(' ',30);
            printf("Option invalide !!\n");
        }   
        dessiner(' ',30);
        printf("Choisir : ");
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
    int i;
    printf("+");
    for(i = 0; i < 8; i++)
    {
        dessiner('-',10);
        printf("+"); 
    }
    printf("\n");
}
void approvisionnement(void)
{
    printf("comming soon \n");
}
void paieVendeur(void)
{
    printf("comming soon \n");
}