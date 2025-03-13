#include <iostream>
#include <sstream>
#include <string>

enum Switches
{
    LIGHTS_INSIDE = 1,
    LIGHTS_OUTSIDE = 2,
    HEATERS = 4,
    WATER_PIPE_HEATING = 8,
    CONDITIONER = 16
};

void processInput(int &temp_inside, int &temp_outside, bool &movement, bool &lights_on, int &switches_state, int hour)
{
    if (temp_outside < 0)
    {
        if (!(switches_state & WATER_PIPE_HEATING))
        {
            switches_state |= WATER_PIPE_HEATING;
            std::cout << "Water pipe heating ON!\n";
        }
    }
    else if (temp_outside > 5)
    {
        if (switches_state & WATER_PIPE_HEATING)
        {
            switches_state &= ~WATER_PIPE_HEATING;
            std::cout << "Water pipe heating OFF!\n";
        }
    }

    if (hour >= 16 || hour < 5)
    {
        if (movement)
        {
            if (!(switches_state & LIGHTS_OUTSIDE))
            {
                switches_state |= LIGHTS_OUTSIDE;
                std::cout << "Garden lights ON!\n";
            }
        }
        else
        {
            if (switches_state & LIGHTS_OUTSIDE)
            {
                switches_state &= ~LIGHTS_OUTSIDE;
                std::cout << "Garden lights OFF!\n";
            }
        }
    }
    else
    {
        if (switches_state & LIGHTS_OUTSIDE)
        {
            switches_state &= ~LIGHTS_OUTSIDE;
            std::cout << "Garden lights OFF!\n";
        }
    }

    if (temp_inside < 22)
    {
        if (!(switches_state & HEATERS))
        {
            switches_state |= HEATERS;
            std::cout << "Heaters ON!\n";
        }
    }
    else if (temp_inside >= 25)
    {
        if (switches_state & HEATERS)
        {
            switches_state &= ~HEATERS;
            std::cout << "Heaters OFF!\n";
        }
    }

    if (temp_inside >= 30)
    {
        if (!(switches_state & CONDITIONER))
        {
            switches_state |= CONDITIONER;
            std::cout << "Conditioner ON!\n";
        }
    }
    else if (temp_inside <= 25)
    {
        if (switches_state & CONDITIONER)
        {
            switches_state &= ~CONDITIONER;
            std::cout << "Conditioner OFF!\n";
        }
    }

    if (lights_on)
    {
        int color_temp = 5000;
        if (hour >= 16 && hour < 20)
        {
            color_temp = 5000 - ((hour - 16) * (2300 / 4));
        }
        else if (hour == 0)
        {
            color_temp = 5000;
        }
        std::cout << "Color temperature: " << color_temp << "K\n";
    }
}

int main()
{
    int switches_state = 0;
    for (int day = 0; day < 2; ++day)
    {
        for (int hour = 0; hour < 24; ++hour)
        {
            std::cout << "Hour " << hour << " - Enter: temp_inside temp_outside movement(yes/no) lights(on/off): ";
            std::string input;
            std::getline(std::cin, input);
            std::stringstream ss(input);
            int temp_inside, temp_outside;
            std::string movement_str, lights_str;
            ss >> temp_inside >> temp_outside >> movement_str >> lights_str;
            bool movement = (movement_str == "yes");
            bool lights_on = (lights_str == "on");
            processInput(temp_inside, temp_outside, movement, lights_on, switches_state, hour);
        }
    }
    return 0;
}
