#include <iostream>

int main()
{
    int startDay, day;
    std::cout << "Введите номер дня недели, с которого начинается май (1 - понедельник, 7 - воскресенье): ";
    std::cin >> startDay;
    if (startDay < 1 || startDay > 7)
    {
        std::cout << "Неверный номер дня недели. Введите число от 1 до 7.";
    }
    std::cout << "Введите номер дня месяца мая (1-31): ";
    std::cin >> day;
    if (day < 1 || day > 31)
    {
        std::cout << "Неверный номер дня. Введите число от 1 до 31.";
    }
    if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10) || (day % 7 == (startDay + 5) % 7) || (day % 7 == (startDay + 6) % 7))
    {
        std::cout << "День " << day << " мая - выходной.";
    }
    else
    {
        std::cout << "День " << day << " мая - рабочий.";
    }
}
