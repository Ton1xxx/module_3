#include <iostream>
#include <vector>

int main()
{
    const int MAX_SIZE = 20;
    std::vector<int> db;
    int num;

    while (true)
    {
        std::cout << "input number: ";
        std::cin >> num;

        if (num == -1)
        {
            std::cout << "output: ";
            for (int val : db)
            {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
        else
        {
            if (db.size() < MAX_SIZE)
            {
                db.push_back(num);
            }
            else
            {
                db.erase(db.begin());
                db.push_back(num);
            }
        }
    }

    return 0;
}
