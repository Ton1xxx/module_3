#include <iostream>

int main()
{
    int income = 0;
    int tax = 0;

    std::cout << "Введите ваш доход: ";
    std::cin >> income;

    if (income < 0)
    {
        std::cout << "Ошибка: доход не может быть отрицательным.\n";
        return 1;
    }

    std::cout << "-----Считаем налог-----\n";

    if (income > 50000)
    {
        tax += (income - 50000) * 30 / 100;
        income = 50000;
    }
    if (income > 10000)
    {
        tax += (income - 10000) * 20 / 100;
        income = 10000;
    }
    tax += income * 13 / 100;

    std::cout << "Сумма налога: " << tax << " рублей\n";
}