/*Questo esercizio sposta tutti gli zeri in fondo all'array*/
#include<stdio.h>

int main()
{
    int arr[10]={1,32,3,3,0,8,0,2,98,12};
    int j, i;

    printf("\nPrima di ordinare: \n");

    for(i=0;i<10;++i)
    {
        printf("\t%d", arr[i]);
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            ++j;
        }
    }

    while(j<10)
    {
        arr[j]=0;
        ++j;    
    }

    printf("\nDopo aver ordinato: \n");

    for(i=0;i<10;++i)
    {
        printf("\t%d", arr[i]);
       
    }

    return 0;
}
