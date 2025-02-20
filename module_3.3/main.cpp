#include <iostream>

int main()
{
    int height = 100;
    int fade = 20;
    int growth = 50;
    int result = height + (growth - fade) * 2 + growth / 2;
    std::cout << "высота бамбука к середине 3 дня: " << result << "см";
}