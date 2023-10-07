#include <iostream>
using namespace std;
float pyramidVolume(float length, float width, float height, string output);
main()
{
    float length, width, height;
    string output;
    cout << "Enter the length of the pyramid (in meters):";
    cin >> length;
    cout << "Enter the width of the pyramid:";
    cin >> width;
    cout << "Enter the height of the pyramid:";
    cin >> height;
    cout << "Enter the desired output unit (millimeters,centimeters,meters,kilometers):";
    cin >> output;
    pyramidVolume(length, width, height, output);
    float final = pyramidVolume(length, width, height, output);
    cout << "The volume of the pyramid is: " << final << " cubic meters";
}
float pyramidVolume(float length, float width, float height, string output)
{
    float volume = (length * width * height) / 3;
    if (output == "millimeters")
    {
        double result = volume * 1000 * 1000 * 1000;
        return result;
    }
    if (output == "centimeters")
    {
        long double result = volume * 100 * 100 * 100;
        return result;
    }
    if (output == "meters")
    {
        float result = volume;
        return result;
    }
    if (output == "kilometers")
    {
        float result = volume / (1000 * 1000 * 1000);
        return result;
    }
}