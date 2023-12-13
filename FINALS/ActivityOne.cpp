#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fname, mname, lname, fullName;

    cout << "=====CS2C=====" << endl;
    cout << "Enter your First Name: ";
    getline(cin, fname);
    cout << "Enter your Middle Name: ";
    getline(cin, mname);
    cout << "Enter your Last Name: ";
    getline(cin, lname);

    fullName = fname + " " + mname + " " + lname;

    cout << "\nHello " << fullName << " Good Day!" << endl;
    cout << "=====FULL NAME COUNTER==================" << endl;
    cout << "Your Name has: " << fullName.length() << " letters." <<endl;
    cout << "========================================" << endl;

    fullName.erase(fullName.find(mname), mname.length());
    cout << "\n=====FULL NAME COUNTER (No Middle)=====";
    cout << "\nYour Name has: " << fullName.length() << " letters if the Middle Remove" << endl;
    cout << "=======================================" << endl;

    return 0;
}