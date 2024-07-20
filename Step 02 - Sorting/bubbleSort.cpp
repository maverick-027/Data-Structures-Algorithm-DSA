#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    // bubble sort algorithm
    for(int i = n-1; i >= 1 ; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                // swap the values
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubbleSortOp(int arr[], int n){
    for(int i = n-1; i >= 1 ; i--){
        int didSwap = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                // swap the values
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
        cout << "runs\n";
    }
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

    // bubbleSortOp(arr,size); // Time Complexity (Bubble Sort): O(N) - Best Case
    // Best case happens when the given array is in sorted order.

    // printing the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}