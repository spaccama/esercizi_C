/*Questo esercizio serve a trovare il massimo e il minimo in un array*/
#include<stdio.h>
#include<stdlib.h>

int main()
{

    int arr[5]={1, 13, 450, 560, 600};
    int magg=arr[0];
    int min=arr[0];

    for(int i=0;i<5;++i)
    {
        if(arr[i]>=magg)magg=arr[i];
        if(arr[i]<=min)min=arr[i];

    }
  
    printf("\nNuero più grande della lista: %d", magg);
    printf("\nNuero più piccolo della lista: %d", min);

    return 0;
}
