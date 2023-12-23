#include <stdio.h>
#include <stdlib.h>
#include <outil.h>
#include <produit.h>

void saisirProduit(FILE* F,produit* p)
{
    fprintf(F, "%s ; %s ; %d ; %d ; %d\n",p->code,p->nom_produit,p->qte_stock,p->qte_seuil,p->prix_unitaire);
}
void lireProduit(FILE* F, produit* p)
{
    fscanf(F, "%s ; %s ; %d ; %d ; %d\n",p->code,p->nom_produit,&p->qte_stock,&p->qte_seuil,&p->prix_unitaire);
}
int getProduits(FILE* F,produit* TAB)
{
    int nombre_produit=0;
    while(!feof(F))
    {
        lireProduit(F, &TAB[nombre_produit]);
        nombre_produit++;
    }
    return nombre_produit--;
}
void saveProduits(FILE* F, produit* TAB,int nombre_produit)
{
    int i;
    for(i=0 ; i<nombre_produit ; i++)
        saisirProduit(F , &TAB[i]);
}
void ajouterProduit(void)
{
    produit p;
    FILE *F=fopen(FILE_PRODUIT, "a");
    if(F==NULL)
    {
        printf("Erreur d'ouverture : %s\n", FILE_PRODUIT);
        exit(-1);
    }
    printf("Entrez le code du produit : ");
    scanf("%s", p.code);
    printf("Entrez le nom du produit : ");
    scanf("%s", p.nom_produit);
    printf("Entrez la quantite en stock : ");
    scanf("%d", &p.qte_stock);
    printf("Entrez la quantite seuil : ");
    scanf("%d", &p.qte_seuil);
    printf("Entrez le prix du produit ; ");
    scanf("%d", &p.prix_unitaire);
    saisirProduit(F, &p);
    fclose(F);
}
void modifierProduit(void)
{
    produit TAB[SIZE];
    bool trouver;
    int nombre_produit;
    FILE* F=fopen(FILE_PRODUIT, "r");
    if(F==NULL)
    {
        printf("Erreue d'ouverture : %s\n", FILE_PRODUIT);
        exit(-1);
    }
    nombre_produit = getProduits(F, TAB);
    fclose(F);


}

// partie implementation des fonction du client