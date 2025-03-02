#include <iostream>

int main()
{
    std::string secret, guess;
    std::cout << "Enter first number: ";
    std::cin >> secret;
    std::cout << "Enter second number: ";
    std::cin >> guess;

    int bulls = 0, cows = 0;
    bool counted_secret[4] = {false}, counted_guess[4] = {false};

    for (int i = 0; i < 4; i++)
    {
        if (secret[i] == guess[i])
        {
            bulls++;
            counted_secret[i] = counted_guess[i] = true;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (!counted_guess[i])
        {
            for (int j = 0; j < 4; j++)
            {
                if (!counted_secret[j] && guess[i] == secret[j])
                {
                    cows++;
                    counted_secret[j] = true;
                    break;
                }
            }
        }
    }

    std::cout << "bulls: " << bulls << ", cows: " << cows << std::endl;
}
