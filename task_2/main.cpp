#include <iostream>
#include <string>

int main()
{
    std::string integer, fractional;

    std::cout << "Enter integer part: ";
    std::cin >> integer;
    std::cout << "Enter fractional part: ";
    std::cin >> fractional;

    std::string full_number = integer + "." + fractional;
    double result = std::stod(full_number);
    std::cout << "Number: " << result << std::endl;
}