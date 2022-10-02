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
    int choix, valeur, resultat;
    printf("1 pour while, 2 pour for");
    scanf("%d",&choix);
    printf("valeur   ");
    scanf("%d",&valeur);
    if (choix==1){
        resultat=avec_while(valeur);
    } else {
        resultat=avec_for(valeur);
    }
    printf("resultat : %d\n", resultat);
    return 0;
}