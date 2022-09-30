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



