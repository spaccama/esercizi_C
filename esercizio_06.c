/*Stampare il fattoriale di un numero*/
#include<stdio.h>

int main()
{
    int num, res, i;

    printf("Inserire un numero intero <=10: ");
    scanf("%d", &num);

    res=num;
    i=1;

    while(i<num && num<=10) 
    {
        res=res*i;
        ++i;
        
    }

    if(num>10) printf("\nERROR! Numero > 10\n");
    else printf("\nil fattoriale di %d e' %d\n", num, res);

    

    return 0;
}