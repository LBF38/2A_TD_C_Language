// Premier programme

// Imports
#include <stdio.h>
#include <stdlib.h>

int main() // avec ou sans paramètre
{
    char *nom;
    nom=(char*) malloc(100);
    printf("Entrez votre nom\n");
    scanf("%s",nom);
    printf("hello world %s\n",nom);
    free(nom);
    return 0; // convention pour dire que tout s'est bien passé
}




