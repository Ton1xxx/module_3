#include <iostream>
#include <vector>
#include <algorithm>

bool find_sum(std::vector<int> &vec, int target)
{
    std::sort(vec.begin(), vec.end());
    int left = 0, right = vec.size() - 1;
    while (left < right)
    {
        int sum = vec[left] + vec[right];
        if (sum == target)
        {
            std::cout << "Numbers " << vec[left] << " and "
                      << vec[right] << " add up to " << target;
            return 1;
        }
        else if (sum > target)
        {
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
    }
    return 0;
}
int main()
{
    std::vector<int> vec = {1, 45, 7, 43, 8, 2, 4, 3, 9};
    int target = 16;
    if (!find_sum(vec, target))
    {
        std::cout << "Numbers not found";
    }
}