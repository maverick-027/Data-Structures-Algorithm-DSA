/*
Problem Statement: You are given an array. The task is to reverse the array using recursion and print it.

Example 1:
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

Example 2:
Input: N=4, arr[] = {10,20,30,40}
Output: {40,30,20,10}
Explanation: Since the order of elements gets reversed the first element will occupy the fourth position, the second element occupies the third position and so on.
*/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i, int j, int arr[]){
    
    if(i >= j) return; 
    swap(arr[i], arr[j]);

    reverseArray(i+1, j-1, arr);
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

    // using two pointer, can be done using single pointer as well
    reverseArray(0, size-1, arr);

    cout << "Reversed array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

// Time Complexity: O(n) {where n is the size of of array.}