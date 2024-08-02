/*
Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the lower bound of x.

Description: The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.
The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not found, the lower bound algorithm returns n i.e. size of the given array.

Example 1:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 1
Explanation: Index 1 is the smallest index such that arr[1] >= x.

Example 2:
Input Format: N = 5, arr[] = {3,5,8,15,19}, x = 9
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] >= x.
*/

#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int N, int x){
    // Approach 1 - Linear Search TC: O(N) and SC: O(1)
    // Approach 2 - Binary Search TC: O(log N) and SC: O(1)
    // STL: lb = lower_bound(arr, arr + N, x) - arr;
    int low = 0;
    int high = N-1;
    int index = N;

    while(low <= high){
        int mid = low + (high-low)/2;

        // maybe the answer
        if(arr[mid] >= x){
            int index = mid;
            high = mid - 1; // look for smaller index on the left 
        }
        else{
            low = mid + 1; // look for right
        }
    }
    return index;
}

int main(){
    int arr[] = {3,5,8,15,19};
    int N = sizeof(arr)/sizeof(int);
    int x = 20;

    int indexLB = lowerBound(arr, N, x);
    cout << "Index: " << indexLB << endl;
}