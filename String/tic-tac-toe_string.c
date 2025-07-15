#include<stdio.h>

int main()
{
    char board[3][3] = {
        {'X', 'O', 'X'},
        {'O', 'X', 'O'},
        {'O', 'O', 'X'}
    };

    //Using for loop to print the tic-tac-toe board

    printf("The tic-tac-toe board is:\n\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    //Using printf to print the tic-tac-toe board
    
    // printf("The tic-tac-toe board is:\n\n");
    // printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    // printf("---|---|---\n");
    // printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    // printf("---|---|---\n");
    // printf(" %c | %c | %c\n\n", board[2][0], board[2][1], board[2][2]);

    return 0;
}