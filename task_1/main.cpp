#include <iostream>
#include <cstdio>

int main()
{
    char buffer[20];
    double speed_delta;
    double speed;
    do
    {
        std::cout << "Speed delta: ";
        std::cin >> speed_delta;
        speed += speed_delta;
        std::sprintf(buffer, "Speed: %.1f km/h,", speed);
        std::cout << buffer << std::endl;
    } while (speed > 0);
}