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
    dessiner(' ',(longuer - 2 - 15)/2);
    printf("%15s",titre);
    dessiner(' ',(longuer - 2 - 15)/2);
    printf("|\n");
    printf("+");
    dessiner('#',longuer - 2);
    printf("+\n");
    
}