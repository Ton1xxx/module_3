#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> numbers;
    int num;

    while (true)
    {
        std::cout << "Enter number: ";
        std::cin >> num;

        if (num == -2)
        {
            std::cout << "shutdown";
            break;
        }

        if (num == -1)
        {
            if (numbers.size() < 5)
            {
                std::cout << "Not enough numbers." << std::endl;
            }
            else
            {
                std::sort(numbers.begin(), numbers.end());
                std::cout << "number: " << numbers[4] << std::endl;
            }
        }
        else
        {
            if (numbers.size() < 5)
            {
                numbers.push_back(num);
            }
            else
            {
                if (num < numbers[4])
                {
                    numbers.push_back(num);
                    std::sort(numbers.begin(), numbers.end());
                    numbers.pop_back();
                }
            }
        }
    }

    return 0;
}
