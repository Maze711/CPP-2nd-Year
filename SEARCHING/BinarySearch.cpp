#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const string names[], int n, const string& target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (names[mid] == target) {
            return mid;
        } else if (names[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Not found
}

// Cross-platform clear screen function
void clearScreen() {
    cout << "\033[2J\033[1;1H";  // ANSI escape codes to clear the screen
}

int main() {
    string originalNames[15];
    cout << "Enter 15 names:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> originalNames[i];
    }

    vector<string> sortedNames(originalNames, originalNames + 15);
    sort(sortedNames.begin(), sortedNames.end());

    string searchName;
    cout << "Enter the name to search for: ";
    cin >> searchName;

    int indexOriginal = -1;
    int indexSorted = binarySearch(sortedNames.data(), 15, searchName);

    if (indexSorted != -1) {
        // Find the index in the original unsorted array
        for (int i = 0; i < 15; i++) {
            if (originalNames[i] == sortedNames[indexSorted]) {
                indexOriginal = i;
                break;
            }
        }
    }

    clearScreen(); // Clear the terminal screen

    cout << "Names (not in alphabetical order):" << endl;
    for (int i = 0; i < 15; i++) {
        cout << originalNames[i] << endl;
    }

    if (indexOriginal != -1) {
        cout << "Name found at index number (not in alphabetical order): " << indexOriginal << endl;
    } else {
        cout << "Name not found in the original array." << endl;
    }

    cout << "Names (in alphabetical order):" << endl;
    for (int i = 0; i < 15; i++) {
        cout << sortedNames[i] << endl;
    }

    if (indexSorted != -1) {
        cout << "Name found at index number (in alphabetical order): " << indexSorted << endl;
    } else {
        cout << "Name not found in the sorted array." << endl;
    }

    return 0;
}
