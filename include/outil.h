#ifndef __OUTIL__H__
#define __OUTIL__H__
#define SIZE 5
#define MAX 15
#define MAX_SIZE 1000

// fonction et outil necessaire pour le projet
typedef enum bool
{
    false,true
}bool;

void dessiner(const char, int); 
void entete(const char*,int);
void option(const char*,const char*, int);

#endif