#include <iostream>

int main()
{
    int ticket_number;
    std::cout << "Введите номер билета: ";
    std::cin >> ticket_number;
    int sum_first = 0, sum_last = 0;
    int digits_count = 0;
    int ticket_copy = ticket_number;
    while (ticket_copy > 0)
    {
        ticket_copy /= 10;
        digits_count++;
    }

    if (digits_count % 2 != 0)
    {
        std::cout << "Неверный номер билета! Номер должен быть четным количеством цифр.";
        return 0;
    }
    for (int i = 0; i < digits_count; ++i)
    {
        int digit = ticket_number % 10;
        ticket_number /= 10;

        if (i < digits_count / 2)
        {
            sum_first += digit;
        }
        else
        {
            sum_last += digit;
        }
    }
    if (sum_first == sum_last)
    {
        std::cout << "Билет счастливый!";
    }
    else
    {
        std::cout << "Повезёт в следующий раз!";
    }
}
