/*
Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

Example 1:
Input Format: arr[] = {2,2,1}
Output: 1
Explanation: In this array, only the element 1 appear once and so it is the answer.

Example 2:
Input Format: arr[] = {4,1,2,1,2}
Output: 4
Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.
*/
#include<bits/stdc++.h>
using namespace std;

int singleNumber(int arr[], int N){
    // Optimal Solution
    int ans = 0;
    for(int i = 0; i < N; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {4, 2, 2, 1, 1};
    int size = sizeof(arr)/ sizeof(int);

    int single = singleNumber(arr, size);
    cout << "Single Number: " << single << endl;
}
// Time Complexity: O(N)
// Space Complexity: O(1)