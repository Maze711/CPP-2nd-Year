// Activity 1 (2 Function but I'm using 4)
#include <iostream>
using namespace std;
// Badlon, Maze Clarion L. CS2C

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

double divide(int num1, int num2) {
    if (num2 != 0) {
        return static_cast<double>(num1) / num2;
    } else {
        cerr << "Error: Division by zero" << endl;
        return 0.0;
    }
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum_result = add(num1, num2);
    int diff_result = subtract(num1, num2);
    int mult_result = multiply(num1, num2);
    double div_result = divide(num1, num2);

    cout << "Sum: " << sum_result << endl;
    cout << "Difference: " << diff_result << endl;
    cout << "Product: " << mult_result << endl;
    cout << "Division: " << div_result << endl;

    return 0;
}
