#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define ROW 20
#define COL 40

char mat_ini[ROW][COL], mat_cop[ROW][COL];

int gen=0;

void genera()
{
    int choice;  
    srand(time(NULL));

    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            choice=rand()%100;

            if(choice<50) mat_ini[i][j]='-';
            if(choice>=50)mat_ini[i][j]='#';
        }
    }
}

void stampa(int *gen, char str_stamp[ROW][COL])
{
    printf("\nGen %d\n", *gen);

    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            if (str_stamp[i][j] == '#')
                printf("⬜");

            else
                printf("⬛"); 
        }
            
        printf("\n");
    }
}

void copia(char dest[ROW][COL], char scr[ROW][COL]) //l'array in cui voglio copiare e l'array dalla quale prendere i dati
{
    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            dest[i][j]=scr[i][j];
        }
            
    }
}

int conta_vicini(char mat[ROW][COL], int x, int y) 
{
    int count = 0;

    for (int i = -1; i <= 1; i++) {

        for (int j = -1; j <= 1; j++) {
            
            if (i == 0 && j == 0) continue; // ignora la cella centrale

            int ni = x + i, nj = y + j;
            if (ni >= 0 && ni < ROW && nj >= 0 && nj < COL) 
            {
                if (mat[ni][nj] == '#') count++;
            }
        }
    }
    return count;
}


void aggiorna(char mat_ini[ROW][COL], char mat_cop[ROW][COL])
{
    int vicini;

    for(int i=0;i<ROW; ++i)
    {
        for(int j=0; j<COL;++j)
        {
            vicini=conta_vicini(mat_ini, i, j);

           
            if (mat_ini[i][j] == '#' && (vicini < 2 || vicini > 3))
                mat_cop[i][j] = '-'; // muore

            else if (mat_ini[i][j] == '#' && (vicini == 2 || vicini == 3))
                mat_cop[i][j] = '#'; // sopravvive

            else if (mat_ini[i][j] == '-' && vicini == 3)
                mat_cop[i][j] = '#'; // nasce

            else
                mat_cop[i][j] = mat_ini[i][j]; // rimane com'è
        }
    }

}

int main()
{
    genera();

    while(1)
    {
        stampa(&gen, mat_ini);
        copia(mat_cop, mat_ini);
        aggiorna(mat_ini, mat_cop);
        copia(mat_ini, mat_cop);

        ++gen;
        sleep(1);
        system("clear");
    }

    return 0;
}
