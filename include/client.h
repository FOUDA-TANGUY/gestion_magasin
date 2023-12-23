#ifndef __HEAD__H__
#define __HEAD__H__

// structure et fonction en rapport avec le client
#define FILE_CLIENT "donnee/client.data"


typedef struct client
{
    char numero_client[MAX];
    char nom_client[MAX];
    char adresse[MAX];
}client;

void saisirClient(FILE*,client*);
void lireClient(FILE*, client*);
int getClients(FILE*,client*);
void saveClients(FILE*, client*,int);
void ajouterClient(void);
void modifierCLient(void);
void supprimerClient(void);
#endif