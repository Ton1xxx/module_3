#include <iostream>

int main()
{
    std::string stop1 = "Улица программистов";
    std::string stop2 = "Проспект алгоритмов";
    std::string stop3 = "Бульвар кодеров";
    std::string stop4 = "Площадь тестировщиков";

    int passengers = 0;
    int total_money = 0;
    int entered, exited;

    std::cout << "Прибываем на остановку \"" << stop1 << "\". В салоне пассажиров: " << passengers << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> exited;
    passengers -= exited;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> entered;
    passengers += entered;
    total_money += entered * 20;
    std::cout << "Отправляемся с остановки \"" << stop1 << "\". В салоне пассажиров: " << passengers << "\n";
    std::cout << "-----------Едем---------\n";

    std::cout << "Прибываем на остановку \"" << stop2 << "\". В салоне пассажиров: " << passengers << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> exited;
    passengers -= exited;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> entered;
    passengers += entered;
    total_money += entered * 20;
    std::cout << "Отправляемся с остановки \"" << stop2 << "\". В салоне пассажиров: " << passengers << "\n";
    std::cout << "-----------Едем---------\n";

    std::cout << "Прибываем на остановку \"" << stop3 << "\". В салоне пассажиров: " << passengers << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> exited;
    passengers -= exited;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> entered;
    passengers += entered;
    total_money += entered * 20;
    std::cout << "Отправляемся с остановки \"" << stop3 << "\". В салоне пассажиров: " << passengers << "\n";
    std::cout << "-----------Едем---------\n";

    std::cout << "Прибываем на остановку \"" << stop4 << "\". В салоне пассажиров: " << passengers << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> exited;
    passengers -= exited;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> entered;
    passengers += entered;
    total_money += entered * 20;
    std::cout << "Отправляемся с остановки \"" << stop4 << "\". В салоне пассажиров: " << passengers << "\n";

    // Финансовый отчет
    std::cout << "\nВсего заработали: " << total_money << " руб.\n";
    std::cout << "Зарплата водителя: " << total_money / 4 << " руб.\n";
    std::cout << "Расходы на топливо: " << total_money / 5 << " руб.\n";
    std::cout << "Налоги: " << total_money / 5 << " руб.\n";
    std::cout << "Расходы на ремонт машины: " << total_money / 5 << " руб.\n";
    std::cout << "Итого доход: " << total_money - (total_money / 4 + total_money / 5 * 3) << " руб.\n";
}
