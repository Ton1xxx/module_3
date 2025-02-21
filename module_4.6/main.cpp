#include <iostream>

int main()
{
    int mansCount;
    int barbersCount;

    std::cout << "************** Барбершоп-калькулятор **************\n";
    std::cout << "Введите число мужчин в городе: ";
    std::cin >> mansCount;

    std::cout << "Сколько уже барберов удалось нанять?";
    std::cin >> barbersCount;

    // Сколько человек может постричь один барбер за одну смену?
    const int mansPerBarber = 8; // один человек в час, смена 8 часов
    // Сколько человек успеет постричь барбер за месяц?
    const int daysInMonth = 30;
    int mansPerBarberPerMonth = mansPerBarber * daysInMonth;
    std::cout << "Один барбер стрижет столько клиентов в месяц " << mansPerBarberPerMonth << "\n";

    // Сколько нужно барберов, чтобы постричь mansCount человек?
    int requiredBarbersCount = mansCount / mansPerBarberPerMonth;
    if (mansCount % mansPerBarberPerMonth != 0)
    {
        requiredBarbersCount += 1; // Округление вверх, если есть остаток
    }

    std::cout << "Необходимое число барберов: " << requiredBarbersCount << "\n";

    // Сколько человек успеют постричь requiredBarbersCount за месяц?
    std::cout << requiredBarbersCount << " барбера могут постричь "
              << requiredBarbersCount * mansPerBarberPerMonth << " мужчин за месяц.\n";

    // Сравниваем с количеством имеющихся барберов
    if (requiredBarbersCount > barbersCount)
    {
        std::cout << "Нужно больше барберов!!!\n";
    }
    else if (requiredBarbersCount == barbersCount)
    {
        std::cout << "Барберов ровно столько, сколько нужно!!!\n";
    }

    if (barbersCount > requiredBarbersCount * 2)
    {
        std::cout << "У вас работает в два раза больше барберов, чем это нужно!!!\n";
    }
}
