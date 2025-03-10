#include <iostream>
#include <vector>
#include <cmath>

void printSortedByAbs(const std::vector<int> &vec)
{
    int n = vec.size();
    int right = 0;
    while (right < n && vec[right] < 0)
    {
        right++;
    }

    int left = right - 1;

    while (left >= 0 || right < n)
    {
        if (left < 0)
        {
            std::cout << vec[right++] << " ";
        }
        else if (right >= n)
        {
            std::cout << vec[left--] << " ";
        }
        else if (std::abs(vec[left]) < std::abs(vec[right]))
        {
            std::cout << vec[left--] << " ";
        }
        else
        {
            std::cout << vec[right++] << " ";
        }
    }
}

int main()
{
    std::vector<int> vec = {-100, -50, -5, 1, 10, 15};
    printSortedByAbs(vec);
}
