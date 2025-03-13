#include <iostream>
#include <string>

enum Note
{
    DO = 1 << 0,
    RE = 1 << 1,
    MI = 1 << 2,
    FA = 1 << 3,
    SOL = 1 << 4,
    LA = 1 << 5,
    SI = 1 << 6
};

int main()
{
    std::string input;
    std::cout << "Enter chord (numbers 1-7): ";
    std::cin >> input;

    int notes = 0;
    for (char ch : input)
    {
        if (ch >= '1' && ch <= '7')
        {
            notes |= (1 << (ch - '1'));
        }
    }

    std::cout << "Notes played: ";
    if (notes & DO)
        std::cout << "DO ";
    if (notes & RE)
        std::cout << "RE ";
    if (notes & MI)
        std::cout << "MI ";
    if (notes & FA)
        std::cout << "FA ";
    if (notes & SOL)
        std::cout << "SOL ";
    if (notes & LA)
        std::cout << "LA ";
    if (notes & SI)
        std::cout << "SI ";

    std::cout << std::endl;
    return 0;
}