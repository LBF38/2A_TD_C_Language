#include <stdio.h>
#include <string.h>

int avec_while(int valeur)
{
    int i,somme;
    somme=0;
    i=0; // indice de départ, i est une copie de l'argument passé depuis le main
    // passage par valeur pas par adresse
    while (i<=valeur) // condition d'arrêt
    {
        somme+=i++; //cumul et l'incrément de i (post increment)
    }
    // printf("hello world %d\n",somme);
    return somme;
}

int avec_for(int valeur)
{
    int i,somme;
    somme=0;
    for(i=0;i<=valeur;i++)
    {
        somme +=i;
    }
    // printf("hello world %d\n",somme);
    return somme;
}


int main()
{
    int choix, valeur;
    int (*pointeur_fonction)(int); // un pointeur de fonction
    printf("1 pour while, 2 pour for");
    scanf("%d",&choix);
    printf("valeur   ");
    scanf("%d",&valeur);
    if (choix==1){
        pointeur_fonction=& avec_while;
    } else {
        pointeur_fonction=& avec_for;
    }
    printf("resultat : %d\n", pointeur_fonction(valeur));
    return 0;
}