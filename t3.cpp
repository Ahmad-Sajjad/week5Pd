
#include <iostream>
using namespace std;
float vehiclePrice(char code, float price);
main()
{
    char code;
    float price;
    cout << "Enter the vehicle type code (M,E,S,V,T): ";
    cin >> code;
    cout << "Enter the price of the vehicle: $";
    cin >> price;
    vehiclePrice(code, price);
    float last = vehiclePrice(code, price);
    cout << "The final price of a vehicle of type " << code << " after adding the tax is $" << last<<".";
}
float vehiclePrice(char code, float price)
{
    if (code == 'M')
    {
        float tax = price * 6 / 100;
        float total = price + tax;
        return total;
    }
    if (code == 'E')
    {
        float tax = price * 8 / 100;
        float total = price + tax;
        return total;
    }
    if (code == 'S')
    {
        float tax = price * 10 / 100;
        float total = price + tax;
        return total;
    }
    if (code == 'V')
    {
        float tax = price * 12 / 100;
        float total = price + tax;
        return total;
    }
    if (code == 'T')
    {
        float tax = price * 15 / 100;
        float total = price + tax;
        return total;
    }
}