//Activity 2
#include <iostream>
#include <string>
using namespace std;
// Badlon, Maze Clarion L. CS2C

int main()
{
    string studentName;
    int y[4];
    int sum = 0;
    float divisor = 4.0;
    float finalGrade;

    cout << "======================================================\n";
    cout << "Good Day, please enter student name:\n";
    getline(cin, studentName);
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter grade for Quarter " << i + 1 << ": ";
        cin >> y[i];
        sum += y[i];
    }

    cin.ignore();

    finalGrade = sum / divisor;

    cout << "\n\nHi " << studentName << "! Your final grade is: " << finalGrade << endl;

    if (finalGrade >= 90 && finalGrade <= 100)
    {
        cout << "You have a Outstanding rating!\n";
        cout << "Remarks: Passed";
    }
    else if(finalGrade >= 85 && finalGrade <= 89){
        cout << "You have a Very Satisfactory rating!\n";
        cout << "Remarks: Passed";
    }
    else if(finalGrade >= 80 && finalGrade <= 84){
        cout << "You have a Satisfactory rating!\n";
        cout << "Remarks: Passed";
    }
    else if(finalGrade >= 75 && finalGrade <= 79){
        cout << "You have a Fairly Satisfactory rating!\n";
        cout << "Remarks: Passed";
    }
    else{
        cout << "Did Not Meet Expectations\n";
        cout << "Remarks: Failed";
    }


    cout << "\n======================================================\n";

    return 0;
}