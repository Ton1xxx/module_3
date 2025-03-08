#include <iostream>

const int SIZE = 4;

void multiplyMatrixVector(float matrix[SIZE][SIZE], float vector[SIZE], float result[SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        result[i] = 0;
        for (int j = 0; j < SIZE; j++)
            result[i] += matrix[i][j] * vector[j];
    }
}

void printVector(float vector[SIZE])
{
    for (int i = 0; i < SIZE; i++)
        std::cout << vector[i] << " ";
    std::cout << "\n";
}

int main()
{
    float matrix[SIZE][SIZE], vector[SIZE], result[SIZE];

    std::cout << "Enter 4x4 matrix:\n";
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            std::cin >> matrix[i][j];

    std::cout << "Enter 4-element vector:\n";
    for (int i = 0; i < SIZE; i++)
        std::cin >> vector[i];

    multiplyMatrixVector(matrix, vector, result);

    std::cout << "Resulting vector:\n";
    printVector(result);

    return 0;
}
