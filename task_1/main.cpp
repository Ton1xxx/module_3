#include <iostream>

int main()
{

    int first, second, third;
    std::string village[] = {"SidorovA", "IvanovA", "PetrovA", "SidorovB", "IvanovB", "PetrovB", "SidorovC", "IvanovC", "PetrovC", "SidorovD"};
    std::cout << "Enter 3 apartments (1- 10): " << std::endl;
    std::cin >> first >> second >> third;
    if ((first > 0 && first <= 10) && (second > 0 && second <= 10) && (third > 0 && third <= 10))
    {
        std::cout << "Select villages\n"
                  << "First village: " << village[first - 1] << ", "
                  << "second village: " << village[second - 1] << ", "
                  << "third village: " << village[third - 1] << ".";
    }
    else
    {
        std::cout << "Invalid number apartments!";
    }
}
