#include <iostream>

int main()
{
    const int rows = 2, cols = 6;

    int utensils[rows][cols] = {{3, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 3, 3}};
    int plates[rows][cols] = {{2, 2, 2, 2, 2, 2}, {2, 2, 2, 2, 2, 2}};
    int chairs[rows][cols] = {{1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}};

    utensils[0][0]++;
    utensils[0][1]++;
    plates[0][0]++;
    plates[0][1]++;

    chairs[0][4]++;
    utensils[1][2]--;
    utensils[0][0]--;
    utensils[0][0]++;
    plates[0][0]--;

    std::cout << "Updated banquet table setup:\n";
    std::cout << "Utensils:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << utensils[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "Plates:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << plates[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "Chairs:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << chairs[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
