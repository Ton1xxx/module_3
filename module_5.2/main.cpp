#include <iostream>

int main()
{
    int number, count = 0;
    std::cout << "Введите число: ";
    std::cin >> number;

    if (number == 0)
    {
        count = 1;
    }
    else
    {
        while (number > 0)
        {
            number = number / 10;
            ++count;
        }
    }
    std::cout << "Цифр в числе: " << count;
}