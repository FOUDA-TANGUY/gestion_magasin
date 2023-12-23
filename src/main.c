#include <stdio.h>
#include <stdlib.h>
#include <fonctionnalite.h>

int main(void)
{
    int choix_user = 0;

    do
    {
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
            gestionArticle();
            break;
        case 2:
            gestionClients();
            break;
        case 3: 
            gestionVendeur();
            break;
        case 4:
            gestionCommande();
            break;
        case 5:
            etablirFActure();
            break;
        case 6:
            approvisionnement();
            break;
        case 7:
            paieVendeur();
            break;

        case 0:
            printf("Thank you !\n");
            break;

        default:
            printf("Option invalide !!\n");
            break;
        }

    } while (choix_user != 0);
    
    return 0;
}