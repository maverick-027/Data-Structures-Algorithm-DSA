#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    // insertion sort algorithm
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, size);

    // printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Time Complexity: O(N*N) {where N is the size of array. TC: O(N*N) - Worst and Average Case, TC: O(N) - Best Case}
// Best case happens when the input array is in sorted order.