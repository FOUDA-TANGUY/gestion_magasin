#include <stdio.h>
#include <stdlib.h>
#include <outil.h>
#include <client.h>
#include<string.h>

// partie implementation des fonction du client
void saisirClient(FILE* F,client* c)
{
    fprintf(F, "%s ; %s ; %s\n", c->numero_client,c->nom_client,c->adresse);
}
lireClient(FILE* F, client* c)
{
    fscanf(F, "%s ; %s ; %s", c->numero_client,c->nom_client,c->adresse);
}
int getClients(FILE* F,client* TAB)
{
    int nombre_client=0;
    while(!feof(F))
    {
        lireClient(F, &TAB[nombre_client]);
        nombre_client++;
    }
    return nombre_client--;
}
void saveClients(FILE* F, client* TAB,int nombre_client)
{
    int i;
    for(i=0 ; i<nombre_client ; i++)
        saisirClient(F, &TAB[i]);
}
void ajouterClient(void)
{
    client c;
    FILE* F=fopen(FILE_CLIENT, "a");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ", FILE_CLIENT);
        exit(-1);
    }
    printf("Entrez le numero du client : ");
    scanf("%s", c.numero_client);
    printf("Entrez le nom du client : ");
    scanf("%s", c.nom_client);
    printf("%s", c.adresse);
    saisirClient(F,&c);
    fclose(F);
}
void modifierCLient(void)
{
    client TAB[SIZE];
    char numero[MAX];
    bool trouver;
    int nombre_client;

    FILE* F=fopen(FILE_CLIENT , "r");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ", FILE_CLIENT);
        exit(-1);
    }
    nombre_client = getClients(F , TAB);
    fclose(F);
    printf("Entrez le numero du client : ");
    scanf("%s", numero);
    F=fopen(FILE_CLIENT , "w");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ", FILE_CLIENT);
        exit(-1);
    }
    int i=0;
    trouver = false;
    while((i<nombre_client)&&(!trouver))
    {
        if(strcmp(TAB[i].numero_client , numero)==0)
            trouver = true;
        else
            i++;
    }
    if(trouver)
    {
        printf("Modifier les donnees du client %s\n\n", TAB[i].nom_client);
        printf("Entrer le numero du client : ");
        scanf("%s", TAB[i].numero_client);
        printf("Entrer le nom du client : ");
        scanf("%s", TAB[i].nom_client);
        printf("Entrez l'adresse du client : ");
        scanf("%s", TAB[i].adresse);
        saveClients(F, TAB,nombre_client);
    }
    else
        printf("Ce numero ne designe aucun de nos clients :( \n");
}
void supprimerClient(void)
{
    client TAB[SIZE];
    char numero[MAX];
    int nombre_client;
    FILE* F=fopen(FILE_CLIENT, "r");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ", FILE_CLIENT);
        exit(-1);
    }
    nombre_client = getClients(F, TAB);
    fclose(F);
    printf("Entrez le numero du client a modifier : ");
    scanf("%s", numero);
    int i;
    F=fopen(FILE_CLIENT, "w");
    if(F==NULL)
    {
        printf("Erreur d'ouverture %s ",FILE_CLIENT);
        exit(-1);
    }
    for(i=0 ; i<nombre_client ; i++)
    {
        if(strcmp(TAB[i].numero_client , numero)==0)
            saveClients(F, TAB , nombre_client);
    }
    fclose(F);
}