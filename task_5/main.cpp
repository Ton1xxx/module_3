#include <iostream>
#include <cmath>
int main()
{
    int num_kilometers;
    std::cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
    std::cin >> num_kilometers;
    if (num_kilometers <= 0)
    {
        std::cout << "Ошибка: количество километров должно быть положительным числом." << std::endl;
    }

    int total_time = 0;
    int tempo;
    for (int i = 1; i <= num_kilometers; ++i)
    {
        std::cout << "Какой у тебя был темп на километре " << i << "? ";
        std::cin >> tempo;
        if (tempo <= 0)
        {
            std::cout << "Ошибка: темп должен быть положительным числом." << std::endl;
        }
        total_time += tempo;
    }
    int average_time = total_time / num_kilometers;
    int minutes = average_time / 60;
    int seconds = average_time % 60;
    std::cout << "Твой средний темп за тренировку: "
              << minutes << " минуты " << seconds << " секунд." << std::endl;
}
