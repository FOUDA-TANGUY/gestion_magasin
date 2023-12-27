#include <stdio.h>
#include <stdlib.h>
#include <outil.h>
#include <vendeur.h>
#include<string.h>

void saisirVendeur(FILE* F,vendeur* v)
{
    fprintf(F, "%s ; %s ; %d\n", v->matricule_vendeur,v->nom_vendeur,v->salaire);
}
void lireVendeur(FILE* F, vendeur* v)
{
    fscanf(F, "%s ; %s ; %d\n", v->matricule_vendeur, v->nom_vendeur, &v->salaire);
}
int getVendeurs(FILE* F,vendeur* TAB)
{
    int nombre_vendeur=0;
    while(!feof(F))
    {
        lireVendeur(F, &TAB[nombre_vendeur]);
        nombre_vendeur++;
    }
    return --nombre_vendeur;
}
void saveVendeurs(FILE* F, vendeur* TAB,int nombre_vendeur)
{
    int i;
    for(i=0 ; i<nombre_vendeur ; i++)
        saisirVendeur(F, &TAB[i]);
}
void ajouterVendeur(void)
{
    vendeur v;
    FILE *F=fopen(FILE_VENDEUR, "a");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s", FILE_VENDEUR);
        exit(-1);
    }
    printf("Entrez le matricule du vendeur : ");
    scanf("%s", v.matricule_vendeur);
    printf("Entrez le nom du vendeur : ");
    scanf("%s", v.nom_vendeur);
    printf("Entrez le salaire du vendeur : ");
    scanf("%d", &v.salaire);
    saisirVendeur(F, &v);
    fclose(F);
}
void modifierVendeur(void)
{
    vendeur TAB[SIZE];
    char matricule[MAX];
    bool trouver;
    int nombre_vendeur;

    FILE* F=fopen(FILE_VENDEUR, "r");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ", FILE_VENDEUR);
        exit(-1);
    }
    nombre_vendeur = getVendeurs(F , TAB);
    fclose(F);
    printf("Entrez le maricule du vendeur : ");
    scanf("%s", matricule);
    int i=0;
    trouver = false;
    while((i<nombre_vendeur) && (!trouver))
    {
        if(strcmp(TAB[i].matricule_vendeur , matricule) == 0&&(!trouver))
            trouver = true;
        else
            i++;
    }
    if(trouver)
    {
        printf("Modifier les donneees du vendeur %s \n\n", TAB[i].matricule_vendeur);
        printf("Entrer le matricule du vendeur : ");
        scanf("%s", TAB[i].matricule_vendeur);
        printf("Entrez le nom du vendeu : ");
        scanf("%s", TAB[i].nom_vendeur);
        printf("Entrez le salaire du vendeur : ");
        scanf("%d", &TAB[i].salaire);
    }
    else    
        printf("Aucun vendeur n'est desiggner par ce matricule\n");
    F=fopen(FILE_VENDEUR , "w");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ", FILE_VENDEUR);
        exit(-1);
    } 
    saveVendeurs(F, TAB,nombre_vendeur);
    fclose(F);
}
void supprimerVendeur(void)
{
    vendeur TAB[SIZE];
    char matricule[MAX];
    int nombre_vendeur;
    FILE* F=fopen(FILE_VENDEUR, "r");
    if(F==NULL)
    {
        printf("Erreur d'ouverture : %s\n", FILE_VENDEUR);
        exit(-1);
    }
    nombre_vendeur = getVendeurs(F, TAB);
    fclose(F);
    printf("Entrez le matricule du vendeur : ");
    scanf("%s", matricule);
    int i;
    F = fopen(FILE_VENDEUR , "w");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ", FILE_VENDEUR);
        exit(-1);
    }
    for(i=0 ; i<nombre_vendeur ; i++)
        if(strcmp(TAB[i].matricule_vendeur , matricule)!=0)
            saveVendeurs(F, TAB,nombre_vendeur);
    fclose(F);
}