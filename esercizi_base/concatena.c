#include<string.h>
#include<stdio.h>

int main()
{
    char string1[20]="Ciao io sono mattia";
    char string2[20]=" tu come ti chiami?";

    int len=strlen(string1)+strlen(string2);

    char string3[len];

    strcat(string3, string1);
    strcat(string3, string2);

    printf("\nLa stringa concatenata e': %s", string3);

    return 0;
}
