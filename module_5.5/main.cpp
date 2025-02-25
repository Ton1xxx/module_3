#include <iostream>

int main()
{
    int A, B, C, M, N, K;

    std::cout << "Введите размеры первой коробки (A B C): ";
    std::cin >> A >> B >> C;

    std::cout << "Введите размеры второй коробки (M N K): ";
    std::cin >> M >> N >> K;

    if ((A <= M && B <= N && C <= K) || (A <= M && B <= K && C <= N) ||
        (A <= N && B <= M && C <= K) || (A <= N && B <= K && C <= M) ||
        (A <= K && B <= M && C <= N) || (A <= K && B <= N && C <= M))
    {
        std::cout << "Первая коробка помещается во вторую.";
    }
    else
    {
        std::cout << "Первая коробка не помещается во вторую.";
    }
}
