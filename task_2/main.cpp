#include <iostream>
#include <vector>

int main()
{
    std::vector<float> prices{2.5, 4.25, 3.0, 10.0};
    std::vector<int> items{1, 1, 0, 3};

    float total_cost = 0.0;
    for (int index : items)
    {
        if (index >= 0 && index < prices.size())
        {
            total_cost += prices[index];
        }
        else
        {
            std::cerr << "Error: Invalid item index " << index << "\n";
        }
    }

    std::cout << "Total cost: " << total_cost << std::endl;
    return 0;
}
