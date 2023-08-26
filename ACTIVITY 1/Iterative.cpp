// Badlon, Maze Clarion L.
#include <iostream>
using namespace std;
// CS2C

int main()
{
    int x = 1;
    cout << "\n=====================================================\n";
    cout << "This is Iterative function using While Loop: \n";
    while (x <= 5)
    {
        cout << x << " ";
        x++;
    }
    cout << "\n=====================================================\n";
    cout << "This is Iterative function using For Loop: \n";
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << "\n=====================================================";
    return 0;
}