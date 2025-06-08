/*Questo esercizio si propone di invertire un array usando solo puntatori*/

#include<stdio.h>

int main()
{
    int arr[]={6,12,7,0,9,5,4,1,9};
    int a=sizeof(arr)/sizeof(arr[0]);

    int arr_copy[a], j, i;

    for(i=a-1;i>=0;--i)
    {
        arr_copy[j]=arr[i];
        printf("\t%d", arr_copy[j]);

        ++j;        
    }


    return 0;
}
