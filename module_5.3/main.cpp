#include <iostream>

int main()
{
    int credit, debt;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Введите сумму долга: ";
    std::cin >> credit;
    if (credit < 0)
    {
        std::cout << "неправильно введенное значение";
    }
    while (credit > 0)
    {
        std::cout << " Вы должны: " << credit << "\nВнесите деньги: ";
        std::cin >> debt;
        credit -= debt;
    }
    if (credit < 0)
    {
        credit = -credit;
    }
    std::cout << "Поздравляю, вы выплатили кредит, \nостаток по счету: " << credit;
}
