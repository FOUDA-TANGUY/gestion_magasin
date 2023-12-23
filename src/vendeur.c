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
    return nombre_vendeur--;
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
    FILE *F=fopen(FILE_VENDEUR, "w");
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
    
}