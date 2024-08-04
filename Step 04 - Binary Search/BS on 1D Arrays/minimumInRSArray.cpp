/*
Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. 
Find the minimum element in the array. 

Example 1:
Input: arr = [4,5,6,7,0,1,2,3]
Result: 0
Explanation: Here, the element 0 is the minimum element in the array.

Example 2:
Input: arr = [3,4,5,1,2]
Result: 1
Explanation: Here, the element 1 is the minimum element in the array.
*/
#include<bits/stdc++.h>
using namespace std;

int minimumElement(int arr[], int n){
    int low = 0;
    int high = n-1;
    int ans = INT_MAX;
    while(low <= high){
        int mid = (low+high)/2;

        // search space is already sorted - no need to perfrom BS
        if(arr[low] <= arr[high]){
            ans = min(ans, arr[low]);
            break;
        }

        // left half is sorted - may have the answer
        if(arr[low] <= arr[mid]){
            ans = min(ans, arr[low]);
            low = mid + 1; // eliminate the left half
        } 
        // right half is sorted - may have the answer
        else{
            ans = min(ans, arr[mid]);
            high = mid - 1; // eliminate the right half
        }
    }
    return ans;
}


int main(){
    int arr[] = {5,6,7,0,1,2,3,4};
    int n = sizeof(arr)/sizeof(int);

    int minimum = minimumElement(arr, n);
    cout << "Minimum Element: " << minimum << endl;
}
// Time Complexity: O(log N)
// Space Complexity: O(1)