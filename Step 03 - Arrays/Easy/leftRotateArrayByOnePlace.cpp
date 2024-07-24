/*
Problem Statement: Given an array of N integers, left rotate the array by one place.

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 2,3,4,5,1
Explanation: Since all the elements in array will be shifted toward left by one so ‘2’ will now become the first index and and ‘1’ which was present at first index will be shifted at last.

Example 2:
Input: N = 1, array[] = {3}
Output: 3
Explanation: Here only element is present and so the element at first index will be shifted to last index which is also by the way the first index.
*/

#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int N){
    // Optimal Approach
    int temp = arr[0]; // storing the first element of array in a variable temp
    for(int i = 0; i < N-1; i++){
        arr[i] = arr[i+1];
    }
    arr[N-1] = temp; // assigned the value of variable temp at the last index
}

void rightRotateByOne(int arr[], int N){
    // Optimal Approach
    int temp = arr[N-1]; // storing the last element of array in a variable temp
    for(int i = N-2; i >= 0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp; // assigned the value of variable temp at the first index
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

    leftRotateByOne(arr, size);
    cout << "Array after left rotated by one place: ";

    // rightRotateByOne(arr, size);
    // cout << "Array after right rotated by one place: ";

    // printing the array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Time Complexity: O(N) {where N is the size of array.}
// Space Complexity: O(1) {no extra space is used.}