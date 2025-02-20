#include <iostream>

int main()
{
    int a = 12;
    int b = 16;
    std::cout << "Старое значение а: " << a << ", старое значение b: " << b << "\n";
    a += b;
    b = a - b;
    a -= b;
    std::cout << "Новое значение а: " << a << ", новое значение b: " << b << "\n";
}