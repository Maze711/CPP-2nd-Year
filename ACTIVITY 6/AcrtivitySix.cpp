// Activity 6
// Create a program that will convert positive and negative  decimal numbers into binary number using signed magnitude method, 1's complement and 2's complement.
#include <iostream>
#include <bitset>
using namespace std;
// Badlon, Maze Clarion L. CS2C

void printBinary(int n);
void onesComplement(int n);
void twosComplement(int n);

int main() {

    int decNum;
    cout << "Enter Decimal Number (Positive or Negative): ";
    cin >> decNum;
    cout << endl;
    cout << "Binary Number of " << decNum << " is:" << endl;
    cout << "Signed-Magnitude: ";
    cout << (decNum < 0 ? "1" : "0");
    printBinary(abs(decNum));
    cout << endl;
    
    cout << "1's Complement: ";
    if (decNum < 0)
    {
        onesComplement(abs(decNum));
    }
    else
    {
        printBinary(decNum);
    }
    cout << endl;
    
    cout << "2's Complement: ";
    twosComplement(decNum);
    cout << endl;

    return 0;
}

void printBinary(int n) {
    bitset<16> binary(n);
    cout << binary;
}

void onesComplement(int n) {
    for (int i = 15; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        if (bit == 0)
            cout << "1";
        else
            cout << "0";
    }
}

void twosComplement(int n) {
    if (n < 0) {
        n = (1 << 16) + n;
    }
    printBinary(n);
}
