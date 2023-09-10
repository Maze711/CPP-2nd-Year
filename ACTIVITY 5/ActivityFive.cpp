// Activity 5
// 1. Create a calculator where the inputs are binary numbers only. Use input validation for binary numbers.
#include <iostream>
#include <string>
using namespace std;
// Badlon, Maze Clarion L. CS2C

bool isBinary(const string& str);
int binaryToDecimal(const string& binaryStr);
string decimalToBinary(int decimalValue);

int main() {
    cout << "Binary Calculator" << endl;

    string binaryNum1, binaryNum2;
    while (true) {
        cout << "Enter Binary number 1: ";
        cin >> binaryNum1;
        if (isBinary(binaryNum1)) {
            break;
        } else {
            cout << "Invalid input. Please enter a binary number." << endl;
        }
    }

    while (true) {
        cout << "Enter Binary number 2: ";
        cin >> binaryNum2;
        if (isBinary(binaryNum2)) {
            break;
        } else {
            cout << "Invalid input. Please enter a binary number." << endl;
        }
    }

    // Perform calculations
    int num1 = binaryToDecimal(binaryNum1);
    int num2 = binaryToDecimal(binaryNum2);

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    // Output
    cout << "\nResults:" << endl;
    cout << "Sum is: " << decimalToBinary(sum) << " (+)" << endl;
    cout << "Difference is: " << decimalToBinary(difference) << " (-)" << endl;
    cout << "Product is: " << decimalToBinary(product) << " (*)" << endl;

    if (num2 == 0) {
        cout << "Quotient: Division by zero is undefined" << endl;
        cout << "Modulus: Modulus by zero is undefined" << endl;
    } else {
        int quotient = num1 / num2;
        int modulus = num1 % num2;

        cout << "Quotient is: " << decimalToBinary(quotient) << " (/)" << endl;
        cout << "Modulus is: " << decimalToBinary(modulus) << " (%)" << endl;
    }

    return 0;
}

bool isBinary(const string& str) {
    for (char c : str) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}

int binaryToDecimal(const string& binaryStr) {
    int decimalValue = 0;
    for (char c : binaryStr) {
        decimalValue = decimalValue * 2 + (c - '0');
    }
    return decimalValue;
}

string decimalToBinary(int decimalValue) {
    string binaryStr;
    while (decimalValue > 0) {
        binaryStr = to_string(decimalValue % 2) + binaryStr;
        decimalValue /= 2;
    }
    return binaryStr;
}
