#include <stdio.h>
#include <stdlib.h>
#include <outil.h>
#include <commande.h>
#include<string.h>

// partie implementation des fonction du client

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
    int nombre_commande=0;
    while(!feof(F))
    {
        lireCommande(F, &TAB[nombre_commande]);
        nombre_commande++;
    }
    return nombre_commande--;
}
void saveCommandes(FILE* F, commande* TAB,int nombre_commande)
{
    int i;
    for(i=0 ; i<nombre_commande ; i++)
        saisirCommande(F,&TAB[i]);
}
void ajouterCommande(void)
{
    commande p;
    FILE* F=fopen(FILE_COMMANDE , "w");
    if(F==NULL)
    {
        printf("Erruer d'ouverture %s ", FILE_COMMANDE);
        exit(-1);
    }
    printf("Entrer le numero de la commande : ");
    scanf("%s", p.numero_commande);
    printf("Entrez le numero du client : ");
    scanf("%s", p.numero_client);
    printf("Entrez la quantite : ");
    scanf("%d", &p.quantite);
    printf("Entrez le matricule du vendeur : ");
    scanf("%s", p.matricule_vendeur);
    saisirCommande(F , &p);
    fclose(F);
}
void modifierCommande(void)
{
    commande TAB[SIZE];
    char numero[MAX];
    bool trouver;
    int nombre_commande;

    FILE* F=fopen(FILE_COMMANDE, "r");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ", FILE_COMMANDE);
        exit(-1);
    }
    nombre_commande = getCommandes(F , TAB);
    fclose(F);
    printf("Entrez le numero de la commande : ");
    scanf("%s", numero);
    int i=0;
    F=fopen(FILE_COMMANDE , "w");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ", FILE_COMMANDE);
        exit(-1);
    } 
    trouver = false;
    while((i<nombre_commande) && (!trouver))
    {
        if(strcmp(TAB[i].numero_commande , numero) ==0)
            trouver = true;
        else
            i++;
    }
    if(trouver)
    {
        printf("Modifier la commande %s \n\n", TAB[i].numero_commande);
        printf("Entrer le numero de la commande : ");
        scanf("%s", TAB[i].numero_commande);
        printf("Entrez le numero du client : ");
        scanf("%s", TAB[i].numero_client);
        printf("Entrez la quantite : ");
        scanf("%d", &TAB[i].quantite);
        printf("Entrez le matricule du vendeur : ");
        scanf("%s", TAB[i].matricule_vendeur);
        saveCommandes(F, TAB,nombre_commande);
    }
    else    
        printf("Aucune commande ne porte ce numero :(\n");
    fclose(F);
}
void supprimerCommande(void)
{
    commande TAB[SIZE];
    char numero[MAX];
    int nombre_commande;
    FILE* F=fopen(FILE_COMMANDE, "r");
    if(F==NULL)
    {
        printf("Erreur d'ouverture : %s\n", FILE_COMMANDE);
        exit(-1);
    }
    nombre_commande = getCommandes(F, TAB);
    fclose(F);
    printf("Entrez le numero de la commande : ");
    scanf("%s", numero);
    int i;
    F = fopen(FILE_COMMANDE , "w");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ", FILE_COMMANDE);
        exit(-1);
    }
    for(i=0 ; i<nombre_commande ; i++)
        if(strcmp(TAB[i].numero_commande , numero)!=0)
            saveCommandes(F, TAB,nombre_commande);
    fclose(F);
}