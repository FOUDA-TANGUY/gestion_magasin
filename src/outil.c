#include <stdio.h>
#include <stdlib.h>
#include <outil.h>

// partie implementation des fonction du client

void dessiner(const char carract,int nombre)
{
    for(int i = 0; i < nombre; i++)
        printf("%c",carract);
}

void entete(const char* titre,int longuer)
{
    printf("+");
    dessiner('#',longuer - 2);
    printf("+\n");
    printf("|");
    dessiner(' ',(longuer - 2 - 20)/2);
    printf("%20s",titre);
    dessiner(' ',(longuer - 2 - 20)/2);
    printf("|\n");
    printf("+");
    dessiner('#',longuer - 2);
    printf("+\n");
}

void option(const char* num,const char* titre, int taille)
{
    printf("|");
    dessiner(' ',30);
    printf("%5s",num);
    printf("%25s",titre);
    dessiner(' ',taille - 62);
    printf("|\n");
}