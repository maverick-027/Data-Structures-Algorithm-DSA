/*
Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

Example 1:
Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

Example 2:
Input: 1,2,0,1,0,4,0
Output: 1,2,1,4,0,0,0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
*/
#include<bits/stdc++.h>
using namespace std;

void moveZerosToEnd(int arr[], int N){
    // Optimal Approach (Two pointer) - Time Complexity: O(N) and Space Complexity: O(1)
    // The pointer i will point to the first 0 in the array and j will point to the next index.
    int i;
    for(i = 0; i < N; i++){
        if(arr[i] == 0) break;
    }
    
    if(i == -1) return;

    for(int j = i+1; j < N; j++){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
    }

    /*
    // Brute Force Approach - Time Complexity: O(2*N) and Space Complexity: O(k) {where k is number of non-zeros element, in the worst case: O(N) - when there is no zero element is present in array.}
    vector<int> v;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] != 0) v.push_back(arr[i]);
        else cnt++;
    }

    for(int i = 0; i < N-cnt; i++){
        arr[i] = v[i];
    }

    for(int i = N-cnt; i < N; i++){
        arr[i] = 0;
    }
    */
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

    moveZerosToEnd(arr, size);
    cout << "After moving zeros to end: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}