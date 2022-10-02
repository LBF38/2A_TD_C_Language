#include <stdio.h>


int main()
{
    int i, somme;
    somme=0;
    for (i=0;i<10;i++)
    {
        somme+=i;
    }
    printf("hello world %d\n",somme);
    return 0;
}