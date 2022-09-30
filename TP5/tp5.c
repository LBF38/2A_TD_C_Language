#include <stdio.h>

struct list
{
    struct cell *firstCell;
};

struct cell
{
    int valeur;
    struct cell *next; // pourquoi met on un struct ? pour mettre un pointeur de cellule vers la cellule suivante.
};


int main()
{
    struct list l;
    struct cell c1,c2,c3;
    c1.valeur=3;
    c1.next=&c2;
    c2.valeur=15;
    c2.next=&c3;
    c3.valeur=7;
    c3.next=NULL;
    l.firstCell=&c1;

    return 0;
}
