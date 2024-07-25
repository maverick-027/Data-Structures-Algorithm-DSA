/*
Problem Statement: Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:
Input: nums = [1,0,1,1,0,1]
Output: 2
Explanation: The maximum number of consecutive 1s is 2.
*/
#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int arr[], int N){
    int count = 0;
    int maxi = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] != 0){
            count += 1;
        } else{
            maxi = max(maxi, count);
            count = 0;
        }
    }
    return maxi;
    // Time Complexity: O(N) and Space Complexity: O(1)
    /*
    int hash[N] = {0};
    int temp = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] != 0){
            hash[temp] += 1;
        } else temp++;
    }
    int max = hash[0];
    for(int i = 0; i < N; i++){
        if(hash[i] > max) max = hash[i];
    }
    return max;
    */
}

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array(0 or 1 only): ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    int max = maxConsecutiveOnes(arr, size);
    cout << max << endl;
}
// Time Complexity: O(N)
// Space Complexity: O(1)