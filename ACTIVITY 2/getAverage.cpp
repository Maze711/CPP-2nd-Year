#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int y[4];
    // int sum = 0, divisor = 4;

    // cout << "Enter 4 integers\n";

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Integers: ";
    //     cin >> y[i];
    //     sum += y[i];
    // }

    // int average = sum / divisor;

    // cout << "Sum: " << sum << endl;
    // cout << "Average: " << average << endl;

    // return 0;

    int useAsDivisors, x;
    cout << "How many numbers you want to divided?: ";
    cin >> useAsDivisors;
    
    float average;
    int OriginalDivisor = useAsDivisors;
    int sum = 0;

    do
    {
        cout << "Enter a positive integer: ";
        cin >> x;
        sum += x;
        useAsDivisors = useAsDivisors - 1;

    } while (useAsDivisors > 0);
    
    average = sum / OriginalDivisor;

    cout << "The Sum is: " << sum << endl;
    cout << "The Average is: " << average << endl;

}

