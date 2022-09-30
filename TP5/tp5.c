#include <stdio.h>
#include <stdlib.h>

struct list
{
    struct cell *firstCell;
};

struct cell
{
    int valeur;
    struct cell *next; // pourquoi met on un struct ? pour mettre un pointeur de cellule vers la cellule suivante.
};


void push(struct list* pList,int value)
{
    // on met en début de liste pour l'instant
    // Etape 2
    struct cell *pc; // il faut un pointeur de cellule pour le retrouver après la sortie de la fonction.
    pc=malloc(sizeof(struct cell));
    // Etape 3
    pc->valeur=value;
    pc->next=pList->firstCell;
    // Etape 4
    pList->firstCell=pc;
}

int pop(struct list* pList)
{
    // Etape 1
    int result;
    struct cell *pc;
    pc=pList->firstCell;
    pList->firstCell=pc->next;
    // Etape 2
    result=pc->valeur;
    free(pc);
    return result;
}



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
    push(&l,5);
    printf(pop);

    return 0;
}
