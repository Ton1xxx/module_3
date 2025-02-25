#include <iostream>

int main()
{
    int X, Y, P;
    int years = 0;
    std::cout << "Введите размер вклада: ";
    std::cin >> X;
    std::cout << "Введите процентную ставку: ";
    std::cin >> P;
    std::cout << "Введите желаемую сумму: ";
    std::cin >> Y;

    while (X < Y)
    {
        X += (X * P) / 100;
        years++;
    }
    std::cout << "Придётся подождать: " << years << " лет";
}
