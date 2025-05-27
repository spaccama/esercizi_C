/*Creare la tabellina di un numero dato*/

#include<stdio.h>

int main()
{
    int num;

    printf("Inserire numero intero <=100: ");
    scanf("%d", &num);

    if(num<=100)
    {
        for(int i=0; i<=10; ++i) 
            printf("\n%d * %d = %d", num, i, num*i);
    }else{
        printf("\nERROR! Numero >100");
    }
    
    return 0;
}