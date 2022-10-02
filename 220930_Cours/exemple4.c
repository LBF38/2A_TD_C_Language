// Premier programme

// Imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() // avec ou sans paramètre
{
    char *nom, *nom_court;
    int longueur;
    nom=(char*) malloc(10);
    
    printf("Entrez votre nom\n");
    scanf("%s",nom);


    longueur = strlen(nom); // longueur de la chaîne réelle.
    nom_court=(char*) malloc(longueur);

    strcpy(nom_court,nom);
    printf("hello world %s\n",nom_court);

    free(nom);
    free(nom_court);
    return 0; // convention pour dire que tout s'est bien passé
}




