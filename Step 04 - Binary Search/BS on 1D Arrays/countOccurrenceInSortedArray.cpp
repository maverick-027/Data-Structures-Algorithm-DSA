/*
Problem Statement: You are given a sorted array containing N integers and a number X, you have to find the occurrences of X in the given array.

Example 1:
Input: N = 7,  X = 3 , array[] = {2, 2, 3, 3, 3, 3, 4}
Output: 4
Explanation: 3 is occurring 4 times in the given array so it is our answer.

Example 2:
Input: N = 8,  X = 2 , array[] = {1, 1, 2, 2, 2, 2, 2, 3}
Output: 5
Explanation: 2 is occurring 5 times in the given array so it is our answer.
*/
#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] == x){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] > x) high = mid - 1;
        else low = mid + 1;
    }
    return ans;
}
int lastOccurrence(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] == x){
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] > x) high = mid - 1;
        else low = mid + 1;
    }
    return ans;
}

int countOccurrence(int arr[], int n, int x){
    // Approach 1 - Traverse in the array with a count variable and increase the count by 1 each time when x is found. Linear Search TC: O(N) and SC: O(1)
    // Intitution - Given a sorted array and we have to count the number of times element present or not (searching) - Binary Search
    // Approach 2 - Binary Search

    int first = firstOccurrence(arr, n, x); // find the first occurence when the x is present.
    int last = lastOccurrence(arr, n, x); // find the last occurence when the x is present.

    // edge case - when element is not present as if we go with the formula (-1 - -1 + 1) = 1 which should be 0.
	if(first == -1 && last == -1) return 0;

    int count = last - first + 1; 
    return count;
}

int main(){
    int arr[] = {2, 2, 3, 3, 3, 3, 4};
    int n = sizeof(arr)/sizeof(int);
    int x = 3;

    int count = countOccurrence(arr, n, x);
    cout << "Counting: " << count << endl;
}
// Time Complexity: O(2*logN)
// Space Complexity: O(1)