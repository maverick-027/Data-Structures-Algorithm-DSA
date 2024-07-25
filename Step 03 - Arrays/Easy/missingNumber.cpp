/*
Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

Example 1:
Input Format: N = 5, array[] = {1,2,4,5}
Result: 3
Explanation: In the given array, number 3 is missing. So, 3 is the answer.

Example 2:
Input Format: N = 3, array[] = {1,3}
Result: 2
Explanation: In the given array, number 2 is missing. So, 2 is the answer.
*/
#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int N){
    // Optimal Solution 1 - Sum Method
    /*
    int sum1 = N*(N+1)/2;
    int sum2 = 0;
    for(int i = 0; i < N-1; i++){
        sum2 += arr[i];
    }
    return (sum1-sum2);
    */
    // Optimal Solution 2 - XOR Gate
    int xor1 = 0;
    int xor2 = 0;
    for(int i = 0; i < N-1; i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor2 = xor2 ^ N;
    return (xor1 ^ xor2);
}

int main(){
    int arr[] = {1, 2, 4, 5};
    int N = 5;

    int missing = missingNumber(arr, N);
    cout << "Missing Number: " << missing << endl;
}
// Time Complexity: O(N)
// Space Complexity: O(1)