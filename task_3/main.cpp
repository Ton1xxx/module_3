#include <iostream>
#include <sstream>

int main()
{
    std::string buffer;
    std::cout << "Enter an expression in the format <number1><operator><number2> (without spaces): ";
    std::cin >> buffer;

    double a, b;
    char operation;
    std::stringstream buffer_stream(buffer);

    buffer_stream >> a >> operation >> b;

    double result;
    switch (operation)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        std::cout << "Error: unknown operation!" << std::endl;
        return 1;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}