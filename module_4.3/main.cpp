#include <iostream>

int main()
{
    int check_num;
    std::cout << "Введите число: ";
    std::cin >> check_num;
    if (check_num % 2 == 0)
    {
        std::cout << "Число четное";
    }
    else
    {
        std::cout << "Число нечетное";
    }
}