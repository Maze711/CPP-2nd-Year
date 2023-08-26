// Activity 1 (Selection)
#include <iostream>
#include <windows.h>
using namespace std;
//Badlon, Maze Clarion L. CS2C

int main() {
    char ansPlay;
    cout << "\tGood Day Player!\n";
    cout << "==================================\n";
    cout << "Do you wanna play (Y/N): ";
    cin >> ansPlay;
    cout << "Wait 5 seconds\n";
    cout << "==================================\n";
    Sleep(5000);
    system("cls");

    switch(ansPlay){
        case 'Y':
        cout << "==================================\n";
        cout << "So you wanna play my heart then?\n";
        cout << "A person like you should be in dungeon\n";
        cout << "==================================\n";
        break;
        case 'N':
        cout << "==================================\n";
        cout << "Goodbye Player\n";
        cout << "HAVE A GREAT DAY!\n";
        cout << "==================================\n";
        break;
        default:
        cout << "==================================\n";
        cout << "Please type capitilize Y and N only\n";
        cout << "Wait for 3 seconds to try again\n";
        Sleep(3000);
        system("cls");
        main();
        cout << "==================================\n";
        break;
    }
    return 0;
}