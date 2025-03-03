#include <iostream>
#include <string>

bool is_valid_octet(const std::string &octet)
{
    if (octet.empty() || (octet[0] == '0' && octet.length() > 1))
    {
        return false;
    }

    for (char c : octet)
    {
        if (c < '0' || c > '9')
        {
            return false;
        }
    }

    int num = std::stoi(octet);
    return num >= 0 && num <= 255;
}

std::string get_address_part(const std::string &address, int part)
{
    int start = 0;
    int end = address.find('.');

    for (int i = 0; i < part; i++)
    {
        start = end + 1;
        end = address.find('.', start);
    }

    return address.substr(start, end - start);
}

int main()
{
    std::string ip;
    std::cout << "Enter IP: ";
    std::cin >> ip;

    int dot_count = 0;
    for (char c : ip)
    {
        if (c == '.')
        {
            dot_count++;
        }
    }

    if (dot_count != 3)
    {
        std::cout << "Invalid" << std::endl;
        return 0;
    }

    for (int i = 0; i < 4; i++)
    {
        std::string octet = get_address_part(ip, i);
        if (!is_valid_octet(octet))
        {
            std::cout << "Invalid" << std::endl;
            return 0;
        }
    }

    std::cout << "Valid" << std::endl;
    return 0;
}
