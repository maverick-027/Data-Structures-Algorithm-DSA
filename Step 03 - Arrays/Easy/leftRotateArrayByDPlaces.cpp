/*
Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2
Output: 3 4 5 6 7 1 2
Explanation: array is rotated to left by 2 position.

Example 2:
Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 
Output: 9 10 11 3 7 8
Explanation: Array is rotated to left by 3 position.
*/
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotateByD(int arr[], int N, int d){
    if(d > N) d = d % N; // if the rotation value is greater than size of array

    // Optimal Approach - Observation based, Time Complexity: O(N) and Space Complexity: O(1)
    reverse(arr, 0, d-1); // Reverse first k elements
    reverse(arr, d, N-1); // Reverse last n-k elements
    reverse(arr, 0, N-1); // Reverse whole array

    /*
    // Brute Force Approach - Time Complexity: O(N) and Space Complexity: O(d)
    vector<int> v;
    for(int i = 0; i < d; i++){
        v.push_back(arr[i]);
    }

    for(int i = d; i < N; i++){
        arr[i-d] = arr[i];
    }

    int temp = 0;
    for(int i = N-d; i < N; i++){
        arr[i] = v[temp];
        temp++;
    }
    */
   
}

void rightRotateByD(int arr[], int N, int d){
    if(d > N) d = d % N;
    
    // Optimal Approach - Observation, Time Complexity: O(N) and Space Complexity: O(1)
    reverse(arr, 0, N-d-1); // Reverse first n-k elements
    reverse(arr, N-d, N-1); // Reverse last k elements
    reverse(arr, 0, N-1);  // Reverse whole array

    /*
    // Brute Force Approach - Time Complexity: O(N) and Space Complexity: O(d)
    vector<int> v;
    for(int i = N-d; i < N; i++){
        v.push_back(arr[i]);
    }

    for(int i = N-d-1; i >= 0; i--){
        arr[i+d] = arr[i];
    }

    for(int i = 0; i < d; i++){
        arr[i] = v[i];
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

    int pos;
    cout << "Enter rotation value: ";
    cin >> pos;

    // leftRotateByD(arr, size, pos);
    // cout << "Array after left rotated by " << pos << " places: ";

    rightRotateByD(arr, size, pos);
    cout << "Array after right rotated by " << pos << " places: ";

    // printing the array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}