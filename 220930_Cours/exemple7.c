#include <stdio.h>


int main()
{
    int i, somme;
    somme=0;
    i=0; // indice de départ
    while (i<10) // condition d'arrêt
    {
        somme+=i++; //cumul et l'incrément de i (post increment)
    }
    printf("hello world %d\n",somme);
    return 0;
}