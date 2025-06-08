/*In questo esercizio accederemo a un'array tramite puntatori.
Un array non è nient'altro che un insieme di indirizzi.*/

#include<stdio.h>

int main()
{
    int arr[4]={1,2,3,4};
    int *p_arr, sum;

    for(int i=0;i<4;++i)
    {
        p_arr=&arr[i];
        sum+=*p_arr;
    }

    printf("\nLa somma e': %d", sum);

    return 0;
}
