#include <iostream>

int main()
{
    std::string depTime, arrTime;
    int depHours, depMinutes, arrHours, arrMinutes;

    std::cout << "Введите время отправления (HH:MM): ";
    while (true)
    {
        std::cin >> depTime;
        if (depTime.size() == 5 && depTime[2] == ':' &&
            isdigit(depTime[0]) && isdigit(depTime[1]) &&
            isdigit(depTime[3]) && isdigit(depTime[4]))
        {
            depHours = (depTime[0] - '0') * 10 + (depTime[1] - '0');
            depMinutes = (depTime[3] - '0') * 10 + (depTime[4] - '0');
            if (depHours >= 0 && depHours < 24 && depMinutes >= 0 && depMinutes < 60)
                break;
        }
        std::cout << "Некорректный формат. Попробуйте снова: ";
    }

    std::cout << "Введите время прибытия (HH:MM): ";
    while (true)
    {
        std::cin >> arrTime;
        if (arrTime.size() == 5 && arrTime[2] == ':' &&
            isdigit(arrTime[0]) && isdigit(arrTime[1]) &&
            isdigit(arrTime[3]) && isdigit(arrTime[4]))
        {
            arrHours = (arrTime[0] - '0') * 10 + (arrTime[1] - '0');
            arrMinutes = (arrTime[3] - '0') * 10 + (arrTime[4] - '0');
            if (arrHours >= 0 && arrHours < 24 && arrMinutes >= 0 && arrMinutes < 60)
                break;
        }
        std::cout << "Некорректный формат. Попробуйте снова: ";
    }

    int depTotalMinutes = depHours * 60 + depMinutes;
    int arrTotalMinutes = arrHours * 60 + arrMinutes;
    int durationMinutes = arrTotalMinutes - depTotalMinutes;
    if (durationMinutes < 0)
        durationMinutes += 1440;

    std::cout << "Поездка составила " << durationMinutes / 60 << " ч. " << durationMinutes % 60 << " мин." << std::endl;
}
