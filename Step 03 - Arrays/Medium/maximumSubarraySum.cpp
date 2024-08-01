/*
Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.

Example 1:
Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 
Output: 6 
Explanation: [4,-1,2,1] has the largest sum = 6. 

Examples 2:
Input: arr = [1] 
Output: 1 
Explanation: Array has only one element and which is giving positive sum of 1. 
*/
#include<bits/stdc++.h>
using namespace std;

int maximumSubarraySum(int arr[], int n){
    // Optimal Approach - Kadane's Algorithm
    // Time Complexity: O(N) and Space Complexity: O(1)
    int sum = 0;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += arr[i];

        if(sum > maxi) maxi = sum;

        if(sum < 0) sum = 0;
    }
    // if(maxi < 0) return 0; // Find the sum of the subarray (including empty subarray) having maximum sum among all subarrays. The sum of an empty subarray is 0. If the maxi is negative so return 0.

    return maxi;
}

void printMaximumSubarraySum(int arr[], int n){
    // Kadane's Algorithm - TC: O(N) and SC: O(1)
    int maxi = INT_MIN;
    int sum = 0;
    int start, ansStart, ansEnd;
    for(int i = 0; i < n; i++){
        if(sum == 0) start = i;
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0) sum = 0;
    }
    //printing the subarray
    for(int i = ansStart; i <= ansEnd; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(int);
    
    int answer = maximumSubarraySum(arr, n);
    cout << "Maximum sum is: " << answer << endl;

    // follow-up Qs
    cout << "The maximum sum subarray: ";
    printMaximumSubarraySum(arr, n);
}