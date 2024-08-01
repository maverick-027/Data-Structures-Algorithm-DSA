/*
Problem Statement: Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

Note: You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

Example 2:
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
*/
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int target){
    if(low > high) return -1; // base condition

    int mid = low + (high-low)/2; 

    if(arr[mid] == target) return mid;

    else if(arr[mid] > target) return binarySearch(arr, low, mid-1, target);

    return binarySearch(arr, mid+1, high, target);
}

int main(){
    int arr[] = {-1,0,3,5,9,12};
    int size = sizeof(arr)/sizeof(int);
    int target = 2;

    // recursive approach
    int index = binarySearch(arr, 0, size-1, target);
    cout << index << endl;

    // iterative approach
    /*
    int low = 0;
    int high = size-1;

    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[mid] == target) return mid;

        else if(arr[mid] > target) high = mid - 1;

        else low  = mid + 1;
    }
    return -1; // element doesn't exists
    */
}
// Time Complexity: O(log N) {where N is the size of array}