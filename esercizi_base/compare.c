/*Esercizio per comparare delle stringhe*/

#include<stdio.h>
#include<string.h>

int main()
{
    char name1[10];
    char name2[10];

    printf("\nInserire nome alunno 1: ");
    fgets(name1, 10, stdin);

    printf("\nInserire nome alunno 2 ");
    fgets(name2, 10, stdin);

    if(strcmp(name1, name2)==0)printf("\nI nomi sono uguali!");
    if(strcmp(name1, name2)!=0)printf("\nI nomi sono diversi!");

    return 0;
}
