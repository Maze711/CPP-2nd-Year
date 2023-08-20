#include <iostream>

using namespace std;

int main()
{
    int y[4];
    int sum = 0, divisor = 4;

    cout << "Enter 4 integers\n";

    for (int i = 0; i < 4; i++)
    {
        cout << "Integers: ";
        cin >> y[i];
        sum += y[i];
    }

    int average = sum / divisor; 
    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
