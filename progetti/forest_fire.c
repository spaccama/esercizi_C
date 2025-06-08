#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

#define ROW 10      //definizione dimensione della griglia
#define COL 20

char world[ROW][COL], next_world[ROW][COL];     //usiamo due array poichè sarà necessario sovrascrivere i dati aggiornati

void genera()
{
    int choice;             //la generazione è inizialmente casuale
    srand(time(NULL));

    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            choice=rand()%3;

            if(choice==0)
            {
                world[i][j]='T';           //T=Albero

            }else if(choice==1)
            {
                world[i][j]='F';        //F=Fuoco

            }else
            {
                world[i][j]='.';        //.=Vuoto
            }

        }
    }
}

void stampa(char stmp[ROW][COL])
{
    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            if(world[i][j]=='T')printf("🌳");
            if(world[i][j]=='F')printf("🔥");
            if(world[i][j]=='.')printf("  ");
        }
        printf("\n");
    }
}

void copia(char ori[ROW][COL], char dest[ROW][COL])     //funzione per copiare l'array originale nella copia
{
    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            dest[i][j]=ori[i][j];

        }
    }
}

void aggiorna(char world[ROW][COL], char next_world[ROW][COL])
{
    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            if(world[i][j]=='T')            //facciamo un controllo solo su 4 direzioni, se c'è fuoco su una delle 4 allora la prossima generazione l'albero sparirà e sarà sostituito da fuoco
            {
                if(world[i][j+1]=='F')next_world[i][j]='F';
                if(world[i][j-1]=='F')next_world[i][j]='F';
                if(world[i+1][j]=='F')next_world[i][j]='F';
                if(world[i-1][j]=='F')next_world[i][j]='F';
            }

            if(world[i][j]=='.')
            {
                int poss=rand()%100;
                if(poss<=30)next_world[i][j]='T';        //se c'è il terreno vuoto avviamo il 30% di probabilità che nasca un albero
                if(poss>=70)next_world[i][j]='F';       //se c'è il terreno vuoto avviamo il 30% di probabilità che nasca un incendio
                
            }

            if(world[i][j]=='F')next_world[i][j]='.';       //dopo una generazione il fuoco si spegne
        }
    }
}

int main()
{
    genera();

    while(1)
    {
        copia(world, next_world);
        aggiorna(world, next_world);
        copia(next_world, world);
        stampa(next_world);

        sleep(1);
        system("clear");

    }
}
