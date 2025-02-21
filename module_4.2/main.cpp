#include <iostream>

int main()
{
    int one_num;
    int second_num;
    int sum;
    std::cout << "Введите первое число: ";
    std::cin >> one_num;
    std::cout << "Введите второе число: ";
    std::cin >> second_num;
    std::cout << "Введите ответ: ";
    std::cin >> sum;
    if (sum == one_num + second_num)
    {
        std::cout << "Ответ верный";
    }
    else
    {
        std::cout << "Ответ неверный, правильный ответ: " << one_num + second_num;
    }
}