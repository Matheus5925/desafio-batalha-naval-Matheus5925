#include <stdio.h>
#include <string.h>

#define LINES 10
#define COLUMNS 10

// desenha uma linha horizontal
void drawHorizontal(int table[LINES][COLUMNS], int row, int col, int shape[], int size) {
    for (int i = 0; i < size; i++) {
        if (col + i < COLUMNS) { // evita sair do limite
            table[row][col + i] = shape[i];
        }
    }
}

// desenha uma linha vertical
void drawVertical(int table[LINES][COLUMNS], int row, int col, int shape[], int size) {
    for (int i = 0; i < size; i++) {
        if (row + i < LINES) { // evita sair do limite
            table[row + i][col] = shape[i];
        }
    }
}

int main() {
    int table[LINES][COLUMNS] = {0};

    int sharp[3] = {3, 3, 3}; // shape do caractere #

    // desenha horizontal em (1,2)
    drawHorizontal(table, 1, 2, sharp, 3);

    // desenha vertical em (5,3)
    drawVertical(table, 5, 3, sharp, 3);

    // imprime a matriz
    for (int i = 0; i < LINES; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
