/*Dati due lati calcolare l'area del rettangolo*/

#include<stdio.h>

int main()
{
    int l1, l2, area;

    printf("\nInserire il primo lato: ");
    scanf("%d", &l1);

    printf("\nInserire il secondo lato: ");
    scanf("%d", &l2);

    area=l1*l2;

    printf("\nArea del rettangolo di lati %d x %d: %d\n", l1, l2, area);

    return 0;
}