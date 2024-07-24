/*
Problem Statement: Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or if not then print -1.

Example 1:
Input: arr[]= 1 2 3 4 5, num = 3
Output: 2
Explanation: 3 is present in the 2nd index

Example 2:
Input: arr[]= 5 4 3 2 1, num = 5
Output: 0
Explanation: 5 is present in the 0th index
*/

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int N, int key){
    for(int i = 0; i < N; i++){
        if(arr[i] == key) return i; // element found
    }
    // element is not present in the array
    return -1;
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

    int num;
    cout << "Enter element to be searched: ";
    cin >> num;

    int index = linearSearch(arr, size, num);
    cout << num << " is present at the " << index << "th index." << endl;
}

// Time Complexity: O(N) {where N is the size of array.}
// Space Complexity: O(1)