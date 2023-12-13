#include<iostream>
#include<vector>
#include<bitset>
#include<algorithm>

using namespace std;

void sortedArray(int arr[], int arrSize){
    sort(arr, arr + arrSize);
    
    for (int i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    }
}

void elementsArray(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    } 
}

int main()
{
    int arrayList[] = {-3, -10, 5, 8, 7, 12, 45, 16, 20, -2, 0, -8,-1};
    int arraySize = sizeof(arrayList) / sizeof(arrayList[0]);
    
    cout << "Unsorted Array: ";
    elementsArray(arrayList, arraySize);
    
    cout << "\nSorted Array(Ascending): ";
    sortedArray(arrayList, arraySize);
    
    reverse(arrayList, arrayList + arraySize);
    
    cout << "\nReversed Array: ";
    elementsArray(arrayList, arraySize);
    
}