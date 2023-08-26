// ACTIVITY 1 (All In ONE)
#include <iostream>
using namespace std;
// Badlon, Maze Clarion L. CS2C
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

void printFibonacci(int terms) {
    int first = 0, second = 1;
    cout << "Fibonacci Sequence: ";
    for (int i = 1; i <= terms; ++i) {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    cout << '\n';
}

int main() {
    int choice;
    
    while (true) {
        cout << "Menu:\n";
        cout << "1. Calculate Factorial\n";
        cout << "2. Print Fibonacci Sequence\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 1) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            int result = factorial(num);
            cout << "Factorial of " << num << " is: " << result << '\n';
        } else if (choice == 2) {
            int terms;
            cout << "Enter the number of terms: ";
            cin >> terms;
            printFibonacci(terms);
        } else if (choice == 3) {
            cout << "Exiting the program.\n";
            break;
        } else {
            cout << "Invalid choice. Please select a valid option.\n";
        }
    }
    
    return 0;
}
