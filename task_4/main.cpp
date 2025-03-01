#include <iostream>
#include <cmath>

int main()
{
    double file_size, connection_speed;
    std::cout << "Укажите размер файла для скачивания: ";
    std::cin >> file_size;
    std::cout << "Какова скорость вашего соединения? ";
    std::cin >> connection_speed;
    if (file_size <= 0 || connection_speed <= 0)
    {
        std::cout << "Ошибка: размер файла и скорость соединения должны быть положительными числами." << std::endl;
    }
    double downloaded = 0;
    int seconds = 0;
    while (downloaded < file_size)
    {
        downloaded += connection_speed;
        seconds++;
        if (downloaded > file_size)
        {
            downloaded = file_size;
        }
        int percent = static_cast<int>((downloaded / file_size) * 100);
        std::cout << "Прошло " << seconds << " сек. Скачано "
                  << static_cast<int>(downloaded) << " из "
                  << static_cast<int>(file_size) << " МБ ("
                  << percent << "%)." << std::endl;
    }
    std::cout << "Загрузка завершена. Время скачивания: " << seconds << " сек." << std::endl;
}
