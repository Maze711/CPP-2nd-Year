// Activity 7 1. Using C++, create a program that will accept 10 integer values that will be inputted to the array and then display the odd numbers and even numbers from the array. 
#include <iostream>
using namespace std;
// Badlon, Maze Clarion L. BSCS 2C
int main()
{
    const int arraySize = 10;
    int tenNum[arraySize];
    int storedValue;
    cout << "Odd and Even Integers\n";
    cout << "Enter 10 Numbers: \n";

    for (int i = 0; i < arraySize; i++)
    {
        cin >> tenNum[i];
    }
    cout << "Odd Numbers: \n";
    for (int j = 0; j < arraySize; j++)
    {
        if (tenNum[j] % 2 != 0)
        {
            cout << tenNum[j] << ", ";
        }
    }
    cout << "\nEven Numbers: \n";
    for (int j = 0; j < arraySize; j++)
    {
        if (tenNum[j] % 2 == 0)
        {
            cout << tenNum[j] << ", ";
        }
    }
}