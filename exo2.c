#include <stdio.h>
#include <stdlib.h>

void sumTab(){
    int i,somme;
    int n =5;
    int tab[5]={1,5,7,8,9};
    for (i=0,somme=0; i<n;i++){
        somme+=tab[i];
    }
    printf("La somme du tableau est %d \n",somme);

}

void sumTabAvoidNeg(){
    int i,somme;
    int n =5;
    int tab[5]={1,5,-7,8,9};
    for (i=0,somme=0; i<n;i++){
        if (tab[i]>=0)
        {
            somme+=tab[i];
        }        
    }
    printf("La somme du tableau sans négatif est %d \n",somme);
}

void sumTabStopNeg(){
    int i,somme;
    int n =5;
    int tab[5]={1,5,-7,8,9};
    i=0;
    somme=0;
    while (i<n && tab[i]>=0)
    {
        somme+=tab[i++];
    }
    printf("La somme du tableau en s'arrêtant au premier négatif est %d \n",somme);
}

void reverseTab(){
    int taille=7;
    char tab[]="Bonjour";
    int i;
    char tabReversed[taille];
    for ( i = 0; i < taille; i++)
    {
        tabReversed[i]=tab[taille-i-1];
    }
    printf("Voici le message de départ %s \n Voici le message à l'envers %s \n",tab,tabReversed);    
}

void afficheRectangle(){
    int a,b;
    a=10;
    int i,k;
    for(i=a;i>0;i--){
        b=a-i;
        for (k=0;k<b;k++){
            printf("*");
        }
        printf("\n");
        system("sleep 1");
        system("clear");
    }
}

void afficheRectangleAvecPointeur(){
    int a,b;
    a=10;
    int *pa;
    pa=&a;
    int i,k;
    for(i=a;i>0;i--){
        b=a-i;
        for (k=0;k<b;k++){
            printf("*");
        }
        printf("\n");
        system("sleep 1");
        system("clear");
    }
}

int main(){
    printf("This is exo2!\n");
    sumTab();
    sumTabAvoidNeg();
    sumTabStopNeg();
    reverseTab();
    afficheRectangle();
    return 0;
}

