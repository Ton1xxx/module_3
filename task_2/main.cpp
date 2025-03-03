#include <iostream>
#include <string>

bool is_letter_or_digit(char ch)
{
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
}

bool is_valid_local(const std::string &local)
{
    std::string allowed_chars = "!#$%&'*+-/=?^_`{|}~.";

    if (local.empty() || local.size() > 64)
        return false;
    if (local.front() == '.' || local.back() == '.')
        return false;

    for (size_t i = 0; i < local.size(); ++i)
    {
        char ch = local[i];
        if (!(is_letter_or_digit(ch) || allowed_chars.find(ch) != std::string::npos))
            return false;
        if (ch == '.' && i > 0 && local[i - 1] == '.')
            return false;
    }

    return true;
}

bool is_valid_domain(const std::string &domain)
{
    if (domain.empty() || domain.size() > 63)
        return false;
    if (domain.front() == '.' || domain.back() == '.')
        return false;

    for (char ch : domain)
    {
        if (!(is_letter_or_digit(ch) || ch == '-' || ch == '.'))
            return false;
    }

    return true;
}

bool is_valid_email(const std::string &email)
{
    size_t at_pos = email.find('@');
    if (at_pos == std::string::npos || email.find('@', at_pos + 1) != std::string::npos)
        return false;

    std::string local = email.substr(0, at_pos);
    std::string domain = email.substr(at_pos + 1);

    return is_valid_local(local) && is_valid_domain(domain);
}

int main()
{
    std::string email;

    std::cout << "Enter email: ";
    std::getline(std::cin, email);

    std::cout << (is_valid_email(email) ? "Yes" : "No") << std::endl;

    return 0;
}
