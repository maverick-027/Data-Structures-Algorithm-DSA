#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    // selection sort algorithm
    for(int i = 0; i < n-2; i++){
        int mini = i; // assuming i index as minimum
        for(int j = i; j <= n-1; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        // swap the values of the index
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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

    selectionSort(arr, size);

    // printing the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Time Complexity (Selection Sort): O(N*N) {where N is the size of array. TC: O(N*N) - Best, Average, Worst}