#include <iostream>
using namespace std;

int main(){
    double nums[10];
    string numName[10] = {"First", "Second", "Third", "Fourth", "Fifth", "Sixth", "Seventh", "Eighth", "Ninth", "Tenth"};
    double sum = 0;
    double average;
    
    cout << "Enter 10 Integers\n";
        
        for (int i = 0; i < 10; i++){
            cout << "Enter Number " << (i + 1) << ": ";
            cin >> nums[i];
            sum += nums[i];
         }

    cout << "You Entered the following integer\n";

        for(int j = 0; j < 10; j++){
            cout << "The " << numName[j] << " Number " << ": " << nums[j] << "\n";
        }

    average = sum / 10;
    cout << "Sum of Integers: " << sum <<endl;
    cout << "Average of Integers: " << average <<endl;

    return 0;
}