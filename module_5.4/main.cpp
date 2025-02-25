#include <iostream>

int main()
{
    int N;
    int bill5000 = 0, bill2000 = 0, bill1000 = 0, bill500 = 0, bill200 = 0, bill100 = 0;

    std::cout << "Введите сумму, которую хотите снять (от 100 до 150000): ";
    std::cin >> N;

    if (N < 100 || N > 150000)
    {
        std::cout << "Ошибка: Невозможно выдать такую сумму.";
        return 1;
    }

    if (N % 100 != 0)
    {
        std::cout << "Ошибка: Сумма должна быть кратна 100.";
        return 1;
    }

    for (int i = 0; i < 1 && N >= 5000; N -= 5000)
        bill5000++;
    for (int i = 0; i < 1 && N >= 2000; N -= 2000)
        bill2000++;
    for (int i = 0; i < 1 && N >= 1000; N -= 1000)
        bill1000++;
    for (int i = 0; i < 1 && N >= 500; N -= 500)
        bill500++;
    for (int i = 0; i < 1 && N >= 200; N -= 200)
        bill200++;
    for (int i = 0; i < 1 && N >= 100; N -= 100)
        bill100++;

    if (N != 0)
    {
        std::cout << "Ошибка: Невозможно выдать такую сумму.";
    }
    else
    {
        if (bill5000 > 0)
            std::cout << "Купюры по 5000 рублей: " << bill5000 << '\n';
        if (bill2000 > 0)
            std::cout << "Купюры по 2000 рублей: " << bill2000 << '\n';
        if (bill1000 > 0)
            std::cout << "Купюры по 1000 рублей: " << bill1000 << '\n';
        if (bill500 > 0)
            std::cout << "Купюры по 500 рублей: " << bill500 << '\n';
        if (bill200 > 0)
            std::cout << "Купюры по 200 рублей: " << bill200 << '\n';
        if (bill100 > 0)
            std::cout << "Купюры по 100 рублей: " << bill100 << '\n';
    }
}
