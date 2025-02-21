#include <iostream>

int main()
{
    int level = 1;
    int exp;
    std::cout << "Введите количество опыта: ";
    std::cin >> exp;
    std::cout << "----считаем----" << "\n";
    if (exp >= 1000 && exp < 2500)
    {
        int level = 2;
        std::cout << "Ваш уровень: " << level;
    }
    else if (exp >= 2500 && exp < 5000)
    {
        int level = 3;
        std::cout << "Ваш уровень: " << level;
    }
    else
    {
        int level = 4;
        std::cout << "Ваш уровень: " << level;
    }
}