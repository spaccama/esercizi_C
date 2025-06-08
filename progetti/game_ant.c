#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ROW 30
#define COL 30

#define BIANCO '.'
#define NERO '-'
#define FORMICA 'A'

enum { NORD, EST, SUD, OVEST };

char grid[ROW][COL];
int x = ROW / 2;
int y = COL / 2;
int dir = NORD;
int gen = 0;

void inizializza() {
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            grid[i][j] = BIANCO;
}

void stampa() {
    printf("\033[H\033[J"); // Pulisce schermo
    printf("Generazione %d\n", gen);
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (i == x && j == y)
                printf("🟥");  // formica
            else if (grid[i][j] == BIANCO)
                printf("⬜");
            else
                printf("⬛");
        }
        printf("\n");
    }
}

void aggiorna() {
    // gira a destra o sinistra e cambia colore
    if (grid[x][y] == BIANCO) {
        dir = (dir + 1) % 4;     // gira a destra
        grid[x][y] = NERO;
    } else {
        dir = (dir + 3) % 4;     // gira a sinistra
        grid[x][y] = BIANCO;
    }

    // muovi la formica
    switch (dir) {
        case NORD: x = (x - 1 + ROW) % ROW; break;
        case EST:  y = (y + 1) % COL; break;
        case SUD:  x = (x + 1) % ROW; break;
        case OVEST: y = (y - 1 + COL) % COL; break;
    }

    gen++;
}

int main() {
    inizializza();
    while (1) {
        stampa();
        aggiorna();
        usleep(20000);
    }
    return 0;
}
