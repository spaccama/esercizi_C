#include<stdio.h>
#include<string.h>

#define MAX_LIBRI 100

typedef struct 
{
    int anno;
    char nome[20];
    char autore[20];
    
}Libro;

int main()
{
    Libro libreria[MAX_LIBRI];
    int quant;

    printf("\nInserire quantità di libri da registrare: ");
    scanf("%d", &quant);

    if(quant>100){printf("\nTROPPI LIBRI!"); return -1;}
    else{
        for(int i=0;quant>=i;++i)
        {
            printf("\nInserire tiolo: ");
            scanf("%s", libreria[i].nome);

            printf("\nInserire autore: ");
            scanf("%s", libreria[i].autore);

            printf("\nInserire anno: ");
            scanf("%d", &libreria[i].anno);
        }
    }

    return 0;
}
