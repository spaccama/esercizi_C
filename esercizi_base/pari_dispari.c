/*Questo programma conta quanti numeri sono pari e quanti sono dispari*/

#include<stdio.h>

int main()
{
    int pari, dispari;
    int arr[10]={2, 21, 7, 5, 78, 33, 12, 4, 55, 109};

    for(int i=0;i<10;++i)
    {
        if(arr[i]%2==0)++pari;
        if(arr[i]%2!=0)++dispari;
    }

    printf("\nNumeri pari: %d\nNumeri dispari: %d", pari, dispari);

    return 0;
}
