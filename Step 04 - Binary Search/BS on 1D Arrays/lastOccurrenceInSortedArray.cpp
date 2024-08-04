/*
Problem Statement: Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1.

Note: Consider 0 based indexing

Example 1:
Input: N = 7, target=13, array[] = {3,4,13,13,13,20,40}
Output: 4
Explanation: As the target value is 13 , it appears for the last time at index number 4.

Example 2:
Input: N = 7, target=60, array[] = {3,4,13,13,13,20,40}
Output: -1
Explanation: Target value 60 is not present in the array 
*/
#include<bits/stdc++.h>
using namespace std;

int lastOccurrence(int arr[], int n, int target){
    // Approach 1 - Linear Search TC: O(N) and SC: O(1)
    // Intitution - Given a sorted array and we have to find the index (searching) - Binary Search
    // Approach 2 - Binary Search TC: O(log N) and SC: O(1)
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;

        // may be the answer
        if(arr[mid] == target){ 
            ans = mid;
            low = mid + 1; 
        }
        else if(arr[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return ans;
}

int main(){
    int arr[] = {3,4,13,13,13,20,40};
    int n = sizeof(arr)/sizeof(int);
    int target = 13;

    int index = lastOccurrence(arr, n, target);
    cout << "Index: " << index << endl;
}