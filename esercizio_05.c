/*Stampare i numeri da 1 a num*/

#include<stdio.h>

int main()
{
    int num, count;
    count=0;

    printf("\nInserire la quantità di numeri da scrivere (MAX 100): ");
    scanf("%d", &num);

    if(num>100) printf("\nERROR! \nQuantita' superiore a 100\n");

    while(count<=num && num<=100)
    {
        printf("\n%d", count);
        ++count;
    }

    return 0;
}