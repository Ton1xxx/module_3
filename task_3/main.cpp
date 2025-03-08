#include <iostream>

const int SIZE = 4;

bool compareMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (A[i][j] != B[i][j])
                return false;
    return true;
}

void toDiagonal(int A[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (i != j)
                A[i][j] = 0;
}

void printMatrix(int A[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            std::cout << A[i][j] << " ";
        std::cout << "\n";
    }
}

int main()
{
    int A[SIZE][SIZE], B[SIZE][SIZE];

    std::cout << "Enter matrix A (4x4):\n";
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            std::cin >> A[i][j];

    std::cout << "Enter matrix B (4x4):\n";
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            std::cin >> B[i][j];

    if (!compareMatrices(A, B))
    {
        std::cout << "Matrices are not equal.\n";
        return 0;
    }

    std::cout << "Matrices are equal.\n";

    toDiagonal(A);

    std::cout << "Diagonal matrix:\n";
    printMatrix(A);

    return 0;
}
