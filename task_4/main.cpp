#include <iostream>

int main()
{
    int width, height;
    std::cout << "Введите ширину и высоту рамки: ";
    std::cin >> width >> height;
    for (int i = 0; i < width; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
    for (int i = 0; i < height - 2; i++)
    {
        std::cout << "|";
        for (int j = 0; j < width - 2; j++)
        {
            std::cout << " ";
        }
        std::cout << "|" << std::endl;
    }
    if (height > 1)
    {
        for (int i = 0; i < width; i++)
        {
            std::cout << "-";
        }
        std::cout << std::endl;
    }

    return 0;
}
