// Activity 4
// 3. Create a program that will display numbers from 1 to 5 and 10 to 15 only.
#include <iostream>
using namespace std;
// Badlon, Maze Clarion L. CS2C

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 10, 11, 12, 13, 14, 15};

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); ++i) {
        if (numbers[i] > 5 && numbers[i] < 10) {
            continue; // Skip numbers between 6 and 9
        }
        cout << numbers[i] << " ";
    }
}