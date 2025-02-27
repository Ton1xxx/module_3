#include <iostream>

int main()
{
    int water, milk;
    int americanoCount = 0, latteCount = 0;

    std::cout << "Введите количество воды в мл: ";
    std::cin >> water;
    std::cout << "Введите количество молока в мл: ";
    std::cin >> milk;

    while (true)
    {
        int choice;
        std::cout << "Выберите напиток (1 — американо, 2 — латте): ";
        std::cin >> choice;
        if (choice == 1)
        {
            if (water >= 300)
            {
                water -= 300;
                americanoCount++;
                std::cout << "Ваш напиток готов.\n";
            }
            else
            {
                std::cout << "Не хватает воды.\n";
            }
        }
        else if (choice == 2)
        {
            if (water >= 30 && milk >= 270)
            {
                water -= 30;
                milk -= 270;
                latteCount++;
                std::cout << "Ваш напиток готов.\n";
            }
            else if (water < 30)
            {
                std::cout << "Не хватает воды.\n";
            }
            else if (milk < 270)
            {
                std::cout << "Не хватает молока.\n";
            }
        }
        if (water < 30 || milk < 270 && water < 300)
        {
            std::cout << "***Отчёт***\n";
            std::cout << "Ингредиентов осталось:\n";
            std::cout << "    Вода: " << water << " мл\n";
            std::cout << "    Молоко: " << milk << " мл\n";
            std::cout << "Кружек американо приготовлено: " << americanoCount << "\n";
            std::cout << "Кружек латте приготовлено: " << latteCount << "\n";
            break;
        }
    }
}
