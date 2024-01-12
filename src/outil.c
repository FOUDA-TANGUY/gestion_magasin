#include <stdio.h>
#include <stdlib.h>
#include <outil.h>

// partie implementation des fonction du client

void dessiner(const char carract,int nombre)
{
    for(int i = 0; i < nombre; i++)
        printf("%c",carract);
}