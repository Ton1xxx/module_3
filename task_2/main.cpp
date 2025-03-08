#include <iostream>

const int SIZE = 3;

void printBoard(char board[SIZE][SIZE])
{
    std::cout << "  0 1 2\n";
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << i << " ";
        for (int j = 0; j < SIZE; j++)
        {
            std::cout << board[i][j] << " ";
        }
        std::cout << "\n";
    }
}

bool checkWin(char board[SIZE][SIZE], char player)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    return false;
}

int main()
{
    char board[SIZE][SIZE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player = 'X';
    int moves = 0;

    while (moves < SIZE * SIZE)
    {
        int row, col;
        printBoard(board);

        std::cout << "Player " << player << ", enter row and column (0-2): ";
        std::cin >> row >> col;

        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ')
        {
            std::cout << "Invalid move! Try again.\n";
            continue;
        }

        board[row][col] = player;
        moves++;

        if (checkWin(board, player))
        {
            printBoard(board);
            std::cout << "Player " << player << " wins!\n";
            return 0;
        }

        player = (player == 'X') ? 'O' : 'X';
    }

    printBoard(board);
    std::cout << "It's a draw!\n";
    return 0;
}
