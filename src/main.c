#include <stdio.h>
#include <stdlib.h>
#include <outil.h>
#include <fonctionnalite.h>

int main(void)
{
    int choix_user = 0;

    do
    {
        system("clear");
        entete("GESTION-MAGASIN\0",100);
        option("01","Gestion Articles",100);
        option("02","Gestion Clients",100);
        option("03","Gestion Vendeurs",100);
        option("04","Gestion Commmandes",100);
        option("05","Service facture",100);
        option("06","Approvisionnement",100);
        option("07","Paie Vendeur",100);
        option("00","Quitter",100);
        printf("+");
        dessiner('-',98);
        printf("+\n");

        if(choix_user < 0 || choix_user > 10)
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
            system("clear");
            break;
        }

    } while (choix_user != 0);
    
    return 0;
}