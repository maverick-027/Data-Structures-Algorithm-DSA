/*
Problem Statement: Given an array, we have to find the largest element in the array.

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2:
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array. 
*/
#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int N){
    int largest = arr[0];
    for(int i = 0; i < N; i++){
        if(arr[i] > largest) largest = arr[i];
    }

    return largest;
    // Time Complexity: O(N) {where N is the size of array.}
    // Space Complexity: O(1)
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

    int ans = largestElement(arr, size);
    cout << "Largest element in array: " << ans << endl;
}