#include <stdio.h>

int main(void)
{
    char checker_board[8][8] = {'B'};
    int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
            printf("%c ",checker_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}