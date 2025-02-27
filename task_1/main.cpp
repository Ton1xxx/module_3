#include <iostream>

int main()
{
    int hour, sum_hour;
    std::cout << "Введите, который час: ";
    std::cin >> hour;
    if (hour < 1 || hour > 12)
    {
        std::cout << "На циферблате всего 12 значений! \n";
    }
    while (sum_hour < hour)
    {
        std::cout << "Ку- ку! \n";
        ++sum_hour;
    }
}
