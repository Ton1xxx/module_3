#include <iostream>

int main()
{
    int day;

    std::cout << "Введите номер дня месяца мая (1-31): ";
    std::cin >> day;

    if (day < 1 || day > 31)
    {
        std::cout << "Неверный номер дня. Введите число от 1 до 31: ";
    }
    if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10) || day % 7 == 6 || day % 7 == 0)
    {
        std::cout << "День " << day << " мая - выходной.";
    }
    else
    {
        std::cout << "День " << day << " мая - рабочий.";
    }
}