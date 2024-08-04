/*
Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values) and a target value k.
Now the array is rotated at some pivot point unknown to you. Find the index at which k is present and if k is not present return -1.

Example 1:
Input Format: arr = [4,5,6,7,0,1,2,3], k = 0
Result: 4
Explanation: Here, the target is 0. We can see that 0 is present in the given rotated sorted array, nums. Thus, we get output as 4, which is the index at which 0 is present in the array.

Example 2:
Input Format: arr = [4,5,6,7,0,1,2], k = 3
Result: -1
Explanation: Here, the target is 3. Since 3 is not present in the given rotated sorted array. Thus, we get the output as -1.
*/
#include<bits/stdc++.h>
using namespace std;

int searchElement(int arr[], int n, int k){
    // Approach-1: iterate in the array and compare each element with target and if found return index and if not then return -1. Linear Search TC: O(N) and SC: O(1)
    // Intitution - since the array is sorted and we have to find the value or index from the array (searching) - Binary Search
    // Approach-2: Binary Search
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] == k) return mid;

        // left half is sorted
        if(arr[low] <= arr[mid]){
            // element exists in left half
            if(arr[low] <= k && k <= arr[mid]) high = mid - 1;
            // element doesn't exists in left half
            else low = mid + 1;
        } 
        // right half is sorted
        else{
            // element exists in right half
            if(arr[mid] <= arr[high]) low = mid + 1;
            // element doesn't exists in right half
            else high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,5,6,7,0,1,2,3};
    int n = sizeof(arr)/sizeof(int);
    int k = 0;

    int index = searchElement(arr, n, k);
    cout << "Index: " << index << endl;
}
// Time Complexity: O(log N)
// Space Complexity: O(1)