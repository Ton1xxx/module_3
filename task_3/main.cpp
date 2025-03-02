#include <iostream>

int main()
{
    std::string input;
    std::cout << "Enter string: ";
    std::getline(std::cin, input);

    int count = 0;
    bool inWord = false;

    for (char c : input)
    {
        if (c != ' ')
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    std::cout << "Ответ: " << count << std::endl;
}
