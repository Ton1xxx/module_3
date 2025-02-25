
#include <iostream>

int main()
{
    int n;
    std::cout << "Введите номер последовательности: ";
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Номер должен быть положительным числом.";
        return 0;
    }
    int a = 1, b = 1, fib;
    if (n == 1 || n == 2)
    {
        std::cout << "Число в последовательности: " << a;
    }
    else
    {
        for (int i = 3; i <= n; ++i)
        {
            fib = a + b;
            a = b;
            b = fib;
            if (fib < 0)
            {
                std::cout << "Результат выходит за пределы 32-битного целого числа.";
                return 0;
            }
        }
        std::cout << "Число в последовательности: " << fib;
    }
}
