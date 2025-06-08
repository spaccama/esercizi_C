/*Verificare se una parola è palindroma*/

#include<string.h>
#include<stdio.h>

int main()
{
    char string[10];
    char string_c[10];
    int j=0;

    printf("\nInserire parola: ");
    scanf("%s", string);

    for(int i=strlen(string)-1;i>=0;--i)
    {
        string_c[j]=string[i];
        ++j;
    }

    printf("\nParola 1: %s\nParola 2: %s", string,string_c);

    if(strcmp(string, string_c)==0)printf("\nParola palindroma");

}
