/*
Problem Statement: Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively. (Expected: Single pass-O(N) and constant space)

Note: You must solve this problem without using the library's sort function.


Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]
*/
#include<bits/stdc++.h>
using namespace std;

void sortColors(int arr[], int N){
    // Optimal Solution - DNF Algorithm (Dutch National Flag Algo.)
    // Time Complexity: O(N) and Space Complexity: O(1)
    int low = 0;
    int mid = 0;
    int high = N-1;  
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) mid++;
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
      
    /*
    // Better Solution - TC: O(2*N) and SC: O(1)
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }
    // manually filling the array
    for(int i = 0; i < cnt0; i++) arr[i] = 0;
    for(int i = cnt0; i < (cnt0 + cnt1); i++) arr[i] = 1;
    for(int i = (cnt0 + cnt1); i < N; i++) arr[i] = 2;
    */

   // Brute - Use Sorting Technique - Merge Sort or Quick Sort
}

int main(){
    int size; 
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elemments of array: ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    sortColors(arr, size);

    // printng the array
    cout << "Output: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
