#include <iostream>

int main()
{
    int one_num;
    int second_num;
    std::cout << "Введите первое число: ";
    std::cin >> one_num;
    std::cout << "Введите второе число: ";
    std::cin >> second_num;
    if (one_num % second_num == 0)
    {
        std::cout << "Число " << one_num << " делится на число " << second_num << " без остатка";
    }
    else
    {
        std::cout << "Число " << one_num << "  не делится на число " << second_num << " без остатка";
    }
}