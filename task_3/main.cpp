#include <iostream>
#include <cmath>

int main()
{
    double x, y, z;
    const int cube_size = 5;
    std::cout << "Введите размеры бруска (X Y Z): ";
    while (!(std::cin >> x >> y >> z) || x < cube_size || y < cube_size || z < cube_size)
    {
        std::cout << "Ошибка! Введите корректные размеры (не меньше 5 см): ";
        std::cin.clear();
        while (std::cin.get() != '\n')
            ;
    }
    int count_x = static_cast<int>(x) / cube_size;
    int count_y = static_cast<int>(y) / cube_size;
    int count_z = static_cast<int>(z) / cube_size;
    int total_cubes = count_x * count_y * count_z;
    int max_set_size = 0;
    for (int i = 1; i * i * i <= total_cubes; i++)
    {
        max_set_size = i * i * i;
    }
    std::cout << "Из этого бруска можно изготовить " << total_cubes << " кубиков.\n";
    std::cout << "Из них можно составить набор из " << max_set_size << " кубиков." << std::endl;
}