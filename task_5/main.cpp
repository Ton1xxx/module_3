#include <iostream>

const int SIZE = 12;

void initializeBubbleWrap(bool bubbleWrap[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            bubbleWrap[i][j] = true;
}

void displayBubbleWrap(const bool bubbleWrap[SIZE][SIZE])
{
    bool allPopped = true;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (bubbleWrap[i][j])
                allPopped = false;
            std::cout << (bubbleWrap[i][j] ? 'o' : 'x') << " ";
        }
        std::cout << "\n";
    }
    if (allPopped)
    {
        std::cout << "All bubbles are popped! Exiting...\n";
        exit(0);
    }
}

void popBubbles(bool bubbleWrap[SIZE][SIZE], int x1, int y1, int x2, int y2)
{
    if (x1 < 0 || x1 >= SIZE || y1 < 0 || y1 >= SIZE ||
        x2 < 0 || x2 >= SIZE || y2 < 0 || y2 >= SIZE)
    {
        std::cout << "Invalid coordinates!\n";
        return;
    }

    if (x1 > x2)
        std::swap(x1, x2);
    if (y1 > y2)
        std::swap(y1, y2);

    for (int i = x1; i <= x2; i++)
    {
        for (int j = y1; j <= y2; j++)
        {
            if (bubbleWrap[i][j])
            {
                bubbleWrap[i][j] = false;
                std::cout << "Pop!\n";
            }
        }
    }
}

int main()
{
    bool bubbleWrap[SIZE][SIZE];
    initializeBubbleWrap(bubbleWrap);

    while (true)
    {
        displayBubbleWrap(bubbleWrap);
        int x1, y1, x2, y2;
        std::cout << "Enter coordinates to pop (x1 y1 x2 y2): ";
        std::cin >> x1 >> y1 >> x2 >> y2;
        popBubbles(bubbleWrap, x1, y1, x2, y2);
    }

    return 0;
}
