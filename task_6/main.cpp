#include <iostream>
#include <cmath>

int main()
{
    double initial_amplitude, final_amplitude;

    std::cout << "Введите начальную амплитуду колебания в см: ";
    std::cin >> initial_amplitude;

    std::cout << "Введите конечную амплитуду колебания в см (конец колебаний): ";
    std::cin >> final_amplitude;

    if (initial_amplitude <= 0 || final_amplitude <= 0)
    {
        std::cout << "Ошибка: амплитуды должны быть положительными числами." << std::endl;
    }

    if (initial_amplitude <= final_amplitude)
    {
        std::cout << "Ошибка: начальная амплитуда должна быть больше конечной." << std::endl;
    }

    int count = 0;
    double amplitude = initial_amplitude;

    while (amplitude > final_amplitude)
    {
        amplitude *= 0.916;
        count++;
    }

    std::cout << "Маятник качнется " << count << " раз, прежде чем его амплитуда станет меньше или равной конечной амплитуде." << std::endl;
}
