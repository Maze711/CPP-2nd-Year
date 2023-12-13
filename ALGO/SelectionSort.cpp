#include <iostream>
#include <string>
using namespace std;

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

void printArray(string array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(string array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx]) {
                min_idx = i;
            }
        }
        swap(array[min_idx], array[step]);
    }
}

int main() {
    string data[] = {"Clark", "Mark", "Eric", "Ericson", "Michael", "Joshua", "Ely", "Christof", "Alfie"};
    int size = sizeof(data) / sizeof(data[0]);

    selectionSort(data, size);

    cout << "Sorted array in Ascending Order: ";
    printArray(data, size);

    return 0;
}
