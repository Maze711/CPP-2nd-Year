// Activity 3
#include <iostream>
using namespace std;
// Badlon, Maze Clarion L. CS2C
int main()
{
    int number;
    int total = 0;

    cout << "Enter a number: ";
    cin >> number;

    int tempNumber = number;
    do
    {
        int digit = tempNumber % 10;
        total += digit;
        tempNumber /= 10;
    } while (tempNumber > 0);
    cout << "Sum of digits: " << total << endl;

    for (int divisor = 2; divisor <= 9; ++divisor)
    {
        if (number % divisor == 0)
        {
            cout << number << " is divisible by " << divisor << endl;
        }
        else
        {
            cout << number << " is not divisible by " << divisor << endl;
        }
    }

    return 0;
}
