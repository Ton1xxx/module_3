#include <iostream>

int main()
{
    int current_day, current_month, current_year;
    int birth_day, birth_month, birth_year;

    std::cout << "Введите сегодняшнюю дату (день месяц год): ";
    std::cin >> current_day >> current_month >> current_year;

    std::cout << "Введите дату рождения покупателя (день месяц год): ";
    std::cin >> birth_day >> birth_month >> birth_year;

    int age_years = current_year - birth_year;

    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day))
    {
        age_years--;
    }

    if (age_years >= 18)
    {
        if (age_years > 18 || (current_month > birth_month || (current_month == birth_month && current_day > birth_day)))
        {
            std::cout << "Можно";
        }
        else
        {
            std::cout << "Нельзя";
        }
    }
    else
    {
        std::cout << "Нельзя";
    }
}
