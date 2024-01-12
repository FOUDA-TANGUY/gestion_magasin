#include <stdio.h>
#include <stdlib.h>
#include <outil.h>
#include <fonctionnalite.h>

int main(void)
{
    int choix_user = 0;
    system("clear");
    do
    {
        entete("GESTION-MAGASIN\0",95);
        printf(" 01 - Gestion Articles\n");
        printf(" 02 - Gestion Clients\n");
        printf(" 03 - Gestion Vendeurs\n");
        printf(" 04 - Gestion Commmandes\n");
        printf(" 05 - Service facture\n");
        printf(" 06 - Approvisionnement \n");
        printf(" 07 - Paie Vendeur\n");
        printf(" 00 - Quitter\n");

        scanf("%d",&choix_user);

        switch (choix_user)
        {
        case 1:
            system("clear");
            gestionArticle();
            break;
        case 2:
            system("clear");
            gestionClients();
            break;
        case 3:
            system("clear"); 
            gestionVendeur();
            break;
        case 4:
            system("clear");
            gestionCommande();
            break;
        case 5:
            system("clear");
            etablirFacture();
            break;
        case 6:
            system("clear");
            approvisionnement();
            break;
        case 7:
            system("clear");
            paieVendeur();
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
    
    return 0;
}