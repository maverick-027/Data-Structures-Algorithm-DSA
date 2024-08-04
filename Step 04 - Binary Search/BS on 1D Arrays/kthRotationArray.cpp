/*
Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. 
Find how many times the array has been rotated. 

Example 1:
Input: arr = [4,5,6,7,0,1,2,3]
Result: 4
Explanation: The original array should be [0,1,2,3,4,5,6,7]. So, we can notice that the array has been rotated 4 times.

Example 2:
Input: arr = [3,4,5,1,2]
Result: 3
Explanation: The original array should be [1,2,3,4,5]. So, we can notice that the array has been rotated 3 times.
*/
#include<bits/stdc++.h>
using namespace std;

int kTimesRotation(int arr[], int n){
    int low = 0;
    int high = n-1;
    int ans = INT_MAX;
    int index = -1;
    while(low <= high){
        int mid = (low+high)/2;

        if(arr[low] <= arr[mid]){
            if(arr[low] < ans){
                //ans = arr[low];
                index = low;
            }
            low = mid + 1;
        } 
        else{
            if(arr[mid] < ans){
                //ans = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;
}


int main(){
    int arr[] = {4,5,6,7,0,1,2,3};
    int n = sizeof(arr)/sizeof(int);

    int rotation = kTimesRotation(arr, n);
    cout << "Rotated times: " << rotation << endl;
}
// Time Complexity: O(log N)
// Space Complexity: O(1)