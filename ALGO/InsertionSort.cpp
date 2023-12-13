#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
}

void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; ++step)
    {
        int key = array[step];
        int j = step - 1;

        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

void elementsArray(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    } 
}

int main()
{
    int data[] = {0, -2, -5, 8, 6, 10, 15, 99, 33, -9, -12, 8, -2};
    int size = sizeof(data) / sizeof(data[0]);

    insertionSort(data, size);

    cout << "Sorted array in ascending order: ";
    printArray(data, size);

    reverse(data, data + size);

    cout << "\nReversed Array: ";
    elementsArray(data, size);

    return 0;
}