#include <iostream>

void quickSort(float arr[], int low, int high)
{
    if (low < high)
    {
        float pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (arr[j] > pivot)
            {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    const int size = 15;
    float numbers[size];

    std::cout << "Enter 15 float numbers: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> numbers[i];
    }

    quickSort(numbers, 0, size - 1);

    std::cout << "Sorted numbers: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
