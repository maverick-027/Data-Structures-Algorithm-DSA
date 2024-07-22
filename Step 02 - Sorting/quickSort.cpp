#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low]; // taking pivot element as the first element
    int i = low;
    int j = high;
    
    while(i < j){
        // finds the first element from the left which is samller than pivot
        while(arr[i] <= pivot && i <= high-1) i++; 
        // finds the first element from the right which is greater than pivot
        while(arr[j] > pivot && j >= low+1) j--;
        // after finding the first greater and smaller element than pivot, if i did not cross j then swap the elements
        if(i < j) swap(arr[i], arr[j]);
    }
    // if i crossed j then swap the following elements
    swap(arr[low], arr[j]);
    return j; // returning partition index
}

void quickSort(int arr[], int low, int high){
    // there is more than one element in the array
    if(low < high){
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex-1); // sort the left part from the pivot
        quickSort(arr, partitionIndex+1, high); // sort the right part from the pivot
    }
}

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, size-1);

    // printing the sorted array
    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
// Time Complexity: O(n*log(n)) {At every step, we divide the whole array, for that logN and n steps are taken for the partition() function, so overall time complexity will be N*logN.}
// Space Complexity: O(1)