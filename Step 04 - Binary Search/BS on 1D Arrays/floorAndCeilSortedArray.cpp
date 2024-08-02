/*
Problem Statement: You're given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1].

Description: The floor of x is the largest element in the array which is smaller than or equal to x.
The ceiling of x is the smallest element in the array greater than or equal to x.

Example 1:
Input Format: n = 6, arr[] = {3, 4, 4, 7, 8, 10}, x = 5
Result: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

Example 2:
Input Format: n = 6, arr[] = {3, 4, 4, 7, 8, 10}, x = 8
Result: 8 8
Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.
*/
#include<bits/stdc++.h>
using namespace std;

int floorValue(int arr[], int N, int x){
    // Approach - Modified the binary search TC: O(log N)
    // here we are returning the element not the index as asked in the question
    int low = 0;
    int high = N-1;
    int floor = -1;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] <= x){
            floor = arr[mid]; // can be the answer
            low = mid + 1; // look for the larger value
        } else high = mid - 1; // look on the left side
    }
    return floor;
}

int ceilValue(int arr[], int N, int x){
    // Approach - Implemented the lower bound (modified binary search) TC: O(log N)
    // here we are returning the element not the index as asked in the question
    
    int low = 0;
    int high = N-1;
    int ceil = -1;

    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] >= x){
            ceil = arr[mid]; // can be the answer
            high = mid - 1; // look for the smaller value
        } else low = mid + 1; // look on the right half
    }
    return ceil;
}

int main(){
    int arr[] = {3, 4, 4, 7, 8, 10};
    int N = sizeof(arr)/sizeof(int);
    int x = 8;

    int floor = floorValue(arr, N, x);
    int ceil = ceilValue(arr, N, x);

    cout << "Floor Value: " << floor << " and Ceil Value: " << ceil << endl;
}