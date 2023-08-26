// Activity 1 Jump Statement
#include <iostream>
using namespace std;
// Badlon, Maze Clarion L. CS2C

int main()
{
    for (int i = 0; i <= 100; i++){
        if (i == 10)
        {
            continue;
        }
    cout << i << " " << endl;
    }
    cout << "Only the number 10 will not show";
    return 0;
}