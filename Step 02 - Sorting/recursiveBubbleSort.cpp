// Recursive Bubble Sort
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    if (n == 1) return; // base condition

    for (int j = 0; j <= n - 2; j++){
        if (arr[j] > arr[j + 1]){
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    //Range reduced after recursion
    bubbleSort(arr, n - 1);
}

void bubbleSortOp(int arr[], int n){
    if (n == 1) return; // base condition

    int didSwap = 0;
    for (int j = 0; j <= n - 2; j++){
        if (arr[j] > arr[j + 1]){
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
    }

    // if no swapping happens.
    if (didSwap == 0) return;

    //Range reduced after recursion
    bubbleSort(arr, n - 1);
}

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, size); // Time Complexity (Bubble Sort): O(N*N) - Worst Case and Average Case

    // bubbleSortOp(arr,size); // Optimised Bubble Sort, Time Complexity (Bubble Sort): O(N) - Best Case {Best case happens when the given array is in sorted order.}

    // printing the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}