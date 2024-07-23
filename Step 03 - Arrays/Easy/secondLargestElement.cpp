/*
Problem Statement: Given an array, find the second smallest and second largest element in the array. 
Print ‘-1’ in the event that either of them doesn’t exist.

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest: 2 and Second Largest: 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

Example 2:
Input: [1]
Output: Second Smallest: -1 and Second Largest: -1
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.
*/
#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int N){
    // Optimal Approach
    int largest = INT_MIN;
    int sLargest = INT_MIN;

    if(N == 0 || N == 1) return -1; //the array consist of no or only one element, so second Smallest doesn't exits.

    for(int i = 0; i < N; i++){
        if(arr[i] > INT_MIN){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > sLargest && arr[i] != largest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int secondSmallest(int arr[], int N){
    // Optimal Approach
    int smallest = INT_MAX;
    int sSmallest = INT_MAX;

    if(N == 0 || N == 1) return -1; //the array consist of no or only one element, so second Smallest doesn't exits.

    for(int i = 0; i < N; i++){
        if(arr[i] < INT_MIN){
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < sSmallest && arr[i] != smallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
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

    int secondLar = secondLargest(arr, size);
    int secondSma = secondSmallest(arr, size);

    cout << "Second Smallest: " << secondSma << " and Second Largest: " << secondLar << endl;
}

// Time Complexity: O(N) {where N is the size of array.}
// Space Complexity: O(1)
