#include <iostream>
#include <algorithm> // Для функций std::min и std::max

int main()
{
    int one_worker, two_worker, three_worker;

    std::cout << "Введите зарплату первого сотрудника: ";
    std::cin >> one_worker;
    std::cout << "Введите зарплату второго сотрудника: ";
    std::cin >> two_worker;
    std::cout << "Введите зарплату третьего сотрудника: ";
    std::cin >> three_worker;

    std::cout << "-----Считаем-----\n";

    // Нахождение максимальной и минимальной зарплаты
    int maxSalary = std::max({one_worker, two_worker, three_worker});
    int minSalary = std::min({one_worker, two_worker, three_worker});

    // Разница между самой высокой и самой низкой зарплатой
    int salaryDifference = maxSalary - minSalary;

    // Средняя зарплата
    double avgSalary = (one_worker, two_worker, three_worker) / 3.0;

    std::cout << "Самая высокая зарплата в отделе: " << maxSalary << " рублей\n";
    std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << salaryDifference << " рублей\n";
    std::cout << "Средняя зарплата в отделе: " << avgSalary << " рублей\n";
}