/*
Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, else return False.

Note: Two consecutive equal values are considered to be sorted.

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: True
Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

Example 2:
Input: N = 5, array[] = {5,4,6,7,8}
Output: False
Explanation: The given array is Not sorted i.e Every element in the array is not smaller than or equal to its next values, So the answer is False.
Here element 5 is not smaller than or equal to its future elements.
*/

#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int N){
    for(int i = 0; i < N-1; i++){
        if(arr[i] <= arr[i+1]){}
        else return false;
    }
    return true;
}

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    if(checkSorted(arr, size)) cout << "True" << endl;
    else cout << "False" << endl;
}
// Time Complexity: O(N) {where N is the size of array.}
// Space Complexity: O(1)