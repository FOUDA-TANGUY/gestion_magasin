#include <stdio.h>
#include <stdlib.h>
#include <outil.h>
#include <produit.h>
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