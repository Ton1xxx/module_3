#include <iostream>
#include <string>

std::string encrypt_caesar(const std::string &text, int shift)
{
    std::string result;

    for (char ch : text)
    {
        if (std::isalpha(ch))
        {
            char base = std::isupper(ch) ? 'A' : 'a';
            result += (ch - base + shift) % 26 + base;
        }
        else
        {
            result += ch;
        }
    }

    return result;
}

int main()
{
    std::string text;
    int shift;

    std::cout << "Enter text: ";
    std::getline(std::cin, text);

    std::cout << "Enter the shift: ";
    std::cin >> shift;

    std::cout << "Encrypted text: " << encrypt_caesar(text, shift) << std::endl;

    return 0;
}