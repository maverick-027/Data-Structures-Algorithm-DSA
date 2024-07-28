/*
Problem Statement: Given an array nums of size n, return the majority element.
Majority Element - is the element that appears more than ⌊n / 2⌋ times (that is not equal to n/2). You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/
#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int N){
    // Optimal Solution - Moore's Voting Algorithm
    int count = 0;
    int ele;
    for(int i = 0; i < N; i++){
        if(count == 0){
            count = 1;
            ele = arr[i];
        } 
        else if(arr[i] == ele) count++;
        else count--;
    }
    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] == ele) cnt++;
    }
    if(cnt > (N/2)) return ele;

    return -1;

    /*
    // Better Solution - TC: O(N*log(N)) + O(N) and SC: O(N) {in the worst case when the array consists of all unique element}
    map<int, int> mpp; // key - element and value - count/ occurence
    // iterating in the array
    for(int i = 0; i < N; i++){
        mpp[arr[i]]++;
    }
    // iterating in the map
    for(auto it: mpp){
        if(it.second > (N/2)) return it.first;
    }
    // if the majority element doesn't exists
    return -1;
    */
}

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    int answer = majorityElement(arr, size);
    cout << "Majority Element: " << answer << endl;
}

// Time Complexity: O(N) {O(N) for iterating in the array for Moore's Algo, O(N) only when - they state that there exists a majority element in the array}
// Time Complexity: O(N) + O(N) {O(N) for iterating in the array for Moore's Algo and another O(N) for counting the number of occurence of element, the another O(N) is only for - when they state that there might exits a majority element or might not}
// Space Complexity: O(1)