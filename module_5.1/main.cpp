#include <iostream>

int main()
{
    int speed;
    int height;
    std::cout << "Введите скорость самолета: ";
    std::cin >> speed;
    std::cout << "введите высоту самолета: ";
    std::cin >> height;
    if ((speed >= 750 && speed <= 850) && (height >= 9000 && height <= 9500))
    {
        std::cout << "Правильный эшелон" << "\n";
    }
    else if ((speed < 750 || speed > 850) && (height < 9000 || height > 9500))
    {
        std::cout << "Необходима корректировка высоты и скорости" << "\n";
    }
    else if (speed < 750 || speed > 850)
    {
        std::cout << "Необходима корректировка скорости" << "\n";
    }
    else
    {
        std::cout << "Необходима корректировка высоты" << "\n";
    }
}
