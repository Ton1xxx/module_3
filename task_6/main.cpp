#include <iostream>

int main()
{
    int totalLength, exclamations;
    std::cout << "Введите общую длину колонтитула: ";
    std::cin >> totalLength;
    std::cout << "Введите количество восклицательных знаков: ";
    std::cin >> exclamations;
    if (exclamations > totalLength)
    {
        std::cout << "Количество восклицательных знаков не может быть больше общей длины." << std::endl;
        return 1;
    }
    int spacesBefore = (totalLength - exclamations) / 2;
    int spacesAfter = totalLength - exclamations - spacesBefore;
    std::string colontitul = std::string(spacesBefore, '~') + std::string(exclamations, '!') + std::string(spacesAfter, '~');
    std::cout << colontitul << std::endl;
}
