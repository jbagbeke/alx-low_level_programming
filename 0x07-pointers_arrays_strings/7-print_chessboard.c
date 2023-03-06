#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function to print chessboard
 * @(*a)[8]): Chessboard character
 * Return: void
 */
void print_chessboard(char (*a)[8]) {
    char row, col;

    for (row = '8'; row >= '1'; row--) {
        printf("%c ", row);
        for (col = 'a'; col <= 'h'; col++) {
            printf("%c ", a[row - '1'][col - 'a']);
        }
        printf("\n");
    }
    printf("  a b c d e f g h\n");
}
