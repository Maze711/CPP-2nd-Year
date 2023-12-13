//Activity 7 2. Using C++, create a program that will only accept even numbers in array.
#include <iostream>
using namespace std;
// Badlon, Maze Clarion L, BSCS 2C
int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int numbers[n];
    int evenCount = 0;

    cout << "Enter " << n << " Even numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            break;
        }
    }

    cout << "Even numbers in the array: ";
    for (int i = 0; i < evenCount; ++i) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
