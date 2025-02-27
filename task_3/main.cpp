#include <iostream>

int main()
{
    int x = 6, y = 19;
    std::string command;

    while (true)
    {
        std::cout << "Марсоход находится на позиции " << x << ", " << y << ", введите команду: ";
        std::cin >> command;
        if (command == "W")
        {
            if (x > 1)
            {
                x--;
            }
            else
            {
                std::cout << "Марсоход не может двигаться на север. Столкновение со стеной!" << std::endl;
            }
        }
        else if (command == "S")
        {
            if (x < 15)
            {
                x++;
            }
            else
            {
                std::cout << "Марсоход не может двигаться на юг. Столкновение со стеной!" << std::endl;
            }
        }
        else if (command == "A")
        {
            if (y > 1)
            {
                y--;
            }
            else
            {
                std::cout << "Марсоход не может двигаться на запад. Столкновение со стеной!" << std::endl;
            }
        }
        else if (command == "D")
        {
            if (y < 20)
            {
                y++;
            }
            else
            {
                std::cout << "Марсоход не может двигаться на восток. Столкновение со стеной!" << std::endl;
            }
        }
        else
        {
            std::cout << "Ошибка ввода! Введите W, S, A или D." << std::endl;
            continue;
        }
        std::cout << "Марсоход находится на позиции " << x << ", " << y << std::endl;
    }
}