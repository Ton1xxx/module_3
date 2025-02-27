#include <iostream>

int main()
{
    int width, height;

    std::cout << "Введите ширину и высоту: ";
    std::cin >> width >> height;

    for (int y = height; y >= -height; --y)
    {
        for (int x = -width; x <= width; ++x)
        {
            if (x == 0 && y == 0)
            {
                std::cout << "+";
            }
            else if (x == 0 && y == height)
            {
                std::cout << "^";
            }
            else if (x == width && y == 0)
            {
                std::cout << ">";
            }
            else if (x == 0)
            {
                std::cout << "|";
            }
            else if (y == 0)
            {
                std::cout << "-";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
