#include <iostream>
using namespace std;
string projectTimeCalculation(int hours, int days, int workers);

main()
{
    int hours, days, workers;
    cout << "Enter the needed hours: ";
    cin >> hours;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> workers;
    projectTimeCalculation(hours, days, workers);
    string result = projectTimeCalculation(hours, days, workers);
    cout << result;
}
string projectTimeCalculation(int hours, int days, int workers)
{
    float workingDays = days - (days * 0.1);
    float totalWorkingHours = workingDays * workers * 10;
    int final = totalWorkingHours - hours;
    if (final > 1)
    {
        string f = to_string(final);
        string r = "Yes!" + f + " hours left.";
        return r;
    }
    if (final < 1)
    {
        int final1 = hours - totalWorkingHours;
        string f = to_string(final1);
        string r = "Not enough time! " + f + " hours needed.";
        return r;
    }
}