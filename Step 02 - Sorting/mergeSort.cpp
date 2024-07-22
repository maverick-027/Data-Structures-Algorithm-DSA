#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int> temp; // created an empty list to add elements in sorted manner
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    // if the right part is exhausted
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    // if the left part is exhausted
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    // copying the elements into original array from temp
    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }

}

void mergeSort(int arr[], int low, int high){
    if(low == high) return; // base condition

    int mid = (low + high)/2;
    mergeSort(arr, low, mid); // divide left part
    mergeSort(arr, mid+1, high); // divide right part
    merge(arr, low, mid, high); // merge both part in sorted manner
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

    mergeSort(arr, 0, size-1);
    // printing the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexity: O(n*log2(n)) {At every step, we divide the whole array, for that logn and we assume n steps are taken to get sorted array, so overall time complexity will be nlogn}
// Space Complexity (auxillary space): O(n) {We are using a temporary array temp to store elements in sorted order.}