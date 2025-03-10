#include <iostream>
#include <vector>

void findMaxSubarray(const std::vector<int> &arr)
{
    int maxSum = arr[0], currentSum = arr[0];
    int start = 0, end = 0, tempStart = 0;

    for (int i = 1; i < arr.size(); i++)
    {
        if (currentSum < 0)
        {
            currentSum = arr[i];
            tempStart = i;
        }
        else
        {
            currentSum += arr[i];
        }

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }
    }

    std::cout << "Max sum: " << maxSum << std::endl;
    std::cout << "Start index: " << start << ", End index: " << end << std::endl;
}

int main()
{
    std::vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    findMaxSubarray(arr);
    return 0;
}
