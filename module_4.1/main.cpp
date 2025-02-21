#include <iostream>

int main()
{
    int one_num;
    int second_num;
    std::cout << "Введите первое число: ";
    std::cin >> one_num;
    std::cout << "Введите второе число: ";
    std::cin >> second_num;
    if (one_num > second_num)
    {
        std::cout << "Число " << one_num << " больше числа " << second_num << "\n";
    }
    else if (one_num < second_num)
    {
        std::cout << "Число " << one_num << " меньше числа " << second_num << "\n";
    }
    else
    {
        std::cout << "Числа равны";
    }
}
