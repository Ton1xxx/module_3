#include <iostream>

int main()
{
    std::string num;
    std::cout << "Enter number: ";
    std::cin >> num;

    if (num.empty())
    {
        std::cout << "No\n";
    }

    int start = (num[0] == '-') ? 1 : 0;
    if (start == 1 && num.size() == 1)
    {
        std::cout << "No\n";
    }

    bool hasDigit = false, hasDot = false;
    for (int i = start; i < num.size(); ++i)
    {
        if (isdigit(num[i]))
        {
            hasDigit = true;
        }
        else if (num[i] == '.')
        {
            if (hasDot)
            {
                std::cout << "No\n";
                return 0;
            }
            hasDot = true;
        }
        else
        {
            std::cout << "No\n";
        }
    }

    std::cout << (hasDigit ? "Yes\n" : "No\n");
}
