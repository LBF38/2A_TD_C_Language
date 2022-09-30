// Premier programme

// Imports
#include <stdio.h>
#include <stdlib.h>

int main() // avec ou sans paramètre
{
    char nom[100]; //equivalent à précédemment mais sans pointeur
    printf("Entrez votre nom\n");
    scanf("%s",nom);
    printf("hello world %s\n",nom); // nom = &(nom[0])
    return 0; // convention pour dire que tout s'est bien passé
}




