#include <iostream>
#include <cmath>
int main()
{
    float force, mass, time;
    std::cout << "Введите силу тяги (Н): ";
    while (!(std::cin >> force) || force <= 0)
    {
        std::cout << "Ошибка! Введите положительное число: ";
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
    }
    std::cout << "Введите массу корабля (кг): ";
    while (!(std::cin >> mass) || mass <= 0)
    {
        std::cout << "Ошибка! Введите положительное число: ";
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
    }
    std::cout << "Введите время работы двигателя (с): ";
    while (!(std::cin >> time) || time <= 0)
    {
        std::cout << "Ошибка! Введите положительное число: ";
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
    }
    float acceleration = force / mass;
    float distance = 0.5f * acceleration * std::pow(time, 2);
    std::cout << "Космический корабль окажется на расстоянии " << distance << " метров." << std::endl;
}
