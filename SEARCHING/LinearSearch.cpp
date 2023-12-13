#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[15];
    string searchName;
    bool found = false;

    // User input for 15 names
    for (int i = 0; i < 15; i++) {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }

    // User input for search name
    cout << "Enter name to search: ";
    cin >> searchName;

    // Linear search for the name
    for (int i = 0; i < 15; i++) {
        if (names[i] == searchName) {
            found = true;
            cout << "Name found in index number " << i << endl;
            break;
        }
    }

    if (!found) {
        cout << "Name not found in array" << endl;
    }

    return 0;
}