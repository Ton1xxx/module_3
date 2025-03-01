#include <iostream>

int main()
{
    float health, resistance, damage;
    std::cout << "Введите количество здоровья орка (0-1): ";
    while (!(std::cin >> health) || health < 0 || health > 1)
    {
        std::cout << "Ошибка! Введите число от 0 до 1: ";
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
    }
    std::cout << "Введите сопротивляемость магии орка (0-1): ";
    while (!(std::cin >> resistance) || resistance < 0 || resistance > 1)
    {
        std::cout << "Ошибка! Введите число от 0 до 1: ";
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
    }
    while (health > 0)
    {
        std::cout << "Введите мощность огненного шара (0-1): ";
        while (!(std::cin >> damage) || damage < 0 || damage > 1)
        {
            std::cout << "Ошибка! Введите число от 0 до 1: ";
            std::cin.clear();
            while (std::cin.get() != '\n')
                ;
        }
        float actual_damage = damage * (1 - resistance);
        health -= actual_damage;
        if (health <= 0)
        {
            std::cout << "Орк погиб!" << std::endl;
            break;
        }
        std::cout << "Урон: " << actual_damage << ", оставшееся здоровье: " << health << std::endl;
    }
}
