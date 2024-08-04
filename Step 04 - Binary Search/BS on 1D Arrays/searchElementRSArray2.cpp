/*
Problem Statement: Given an integer array arr of size N, sorted in ascending order (may contain duplicate values) and a target value k. Now the array is rotated at some pivot point unknown to you.
Return True if k is present and otherwise, return False. 

Example 1:
Input: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 3
Result: True
Explanation: The element 3 is present in the array. So, the answer is True.

Example 2:
Input: arr = [7, 8, 1, 2, 3, 3, 3, 4, 5, 6], k = 10
Result: False
Explanation: The element 10 is not present in the array. So, the answer is False.
*/
#include<bits/stdc++.h>
using namespace std;

bool searchElement(int arr[], int n, int k){
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] == k) return true;

        // edge case: arr[low] == arr[mid] == arr[high] can occur as the array may have duplicates, it means that neither arr[low] nor arr[high] can be the target.
        if(arr[low] == arr[mid] == arr[high]){
            low++;
            high--;
            continue;
        }

        // identify the sorted half
        // left half is sorted
        if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k <= arr[mid]) high = mid - 1;
            else low = mid + 1;
        } 
        // right half is sorted
        else{
            if(arr[mid] <= k && k <= arr[high]) low = mid + 1;
            else high = mid - 1;
        }
    }
    return false;
}

int main(){
    int arr[] = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    int k = 3;

    bool check = searchElement(arr, n, k);
    if(check) cout << "True" << endl;
    else cout << "False" << endl;
}
// Time Complexity: O(log N) for the best and average case. O(N/2) for the average case.
// Space Complexity: O(1)