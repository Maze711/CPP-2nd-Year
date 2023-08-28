// Activity 4
// 1. Create a program that will display even numbers from 1 to 15.
// 2. Create a program that will display odd numbers from 1 to 15.
#include <iostream>
using namespace std;
// Badlon, Maze Clarion L. CS2C

int main(){
    for (int i = 1; i <= 15; i++) {
        if (i % 2 == 0) {
            goto Even;
        } else {
            goto Odd;
        }
    Even:
        cout << i << " Even Number\n";
        continue;
    Odd:
        cout << i << " Odd Number\n";
    }
    return 0;
}