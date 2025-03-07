#include <iostream>
#include <vector>

int main()
{
    int n, x;
    std::cout << "Input vector size: ";
    std::cin >> n;

    std::vector<int> vec(n);
    std::cout << "Input numbers: ";
    for (int i = 0; i < n; ++i)
    {
        std::cin >> vec[i];
    }

    std::cout << "Input number to delete: ";
    std::cin >> x;

    int i = 0;
    for (int j = 0; j < vec.size(); ++j)
    {
        if (vec[j] != x)
        {
            vec[i++] = vec[j];
        }
    }

    while (vec.size() > i)
    {
        vec.pop_back();
    }

    std::cout << "Result: ";
    for (int num : vec)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
