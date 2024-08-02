/*
Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the upper bound of x.

Description: The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.
The upper bound is the smallest index, ind, where arr[ind] > x.

Example 1:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] > x.

Example 2:
Input Format: N = 6, arr[] = {3,5,8,9,15,19}, x = 9
Result: 4
Explanation: Index 4 is the smallest index such that arr[4] > x.
*/

#include<bits/stdc++.h>
using namespace std;

int upperBound(int arr[], int N, int x){
    // Approach 1 - Linear Search TC: O(N) and SC: O(1)
    // Approach 2 - Binary Search TC: O(log N) and SC: O(1)
    // STL: ub = upper_bound(arr, arr + N, x) - arr;
    int low = 0;
    int high = N-1;
    int index = N;

    while(low <= high){
        int mid = low + (high-low)/2;

        // may be the answer
        if(arr[mid] > x){
            index = mid;
            high = mid - 1; // look for smaller index on the left
        } 
        else low = mid + 1; // look for the right
    }
    return index;
}

int main(){
    int arr[] = {2, 3, 6, 7, 8, 8, 11, 11 ,11, 12};
    int N = sizeof(arr)/sizeof(int);
    int x = 6;

    int indexUB = upperBound(arr, N, x);
    cout << "Index: " << indexUB << endl;
}