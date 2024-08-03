/*
Problem Statement: You are given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array.
If the value is present in the array, then return its index. Otherwise, determine the index where it would be inserted in the array while maintaining the sorted order.

Example 1:
Input Format: arr[] = {1,2,4,7}, x = 6
Result: 3
Explanation: 6 is not present in the array. So, if we will insert 6 in the 3rd index(0-based indexing), the array will still be sorted. {1,2,4,6,7}.

Example 2:
Input Format: arr[] = {1,2,4,7}, x = 2
Result: 1
Explanation: 2 is present in the array and so we will return its index i.e. 1.
*/

#include<bits/stdc++.h>
using namespace std;

int insertPosition(int arr[], int N, int x){
    // Approach - lower bound
    int low = 0;
    int high = N-1;
    int index = N;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] >= x){
            index = mid;
            high = mid - 1;
        } 
        else low = mid + 1;
    }
    return index;
}

int main(){
    int arr[] = {3,5,8,15,19};
    int N = sizeof(arr)/sizeof(int);
    int x = 20;

    int pos = insertPosition(arr, N, x);
    cout << "Index: " << pos << endl;
}
// Time Complexity: O(log N)
// Space Complexity: O(1)