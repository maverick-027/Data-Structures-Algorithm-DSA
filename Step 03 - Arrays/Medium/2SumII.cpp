/*
Problem Statement: Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.
Note: Your solution must use only constant extra space.

Example 1:
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

Example 2:
Input: numbers = [2,3,4], target = 6
Output: [1,3]
Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSumII(int arr[], int N, int target){
    // Two pointer approach - input array is sorted
    // TC: O(N) and SC: O(1)
    int i = 0;
    int j = N - 1;
    while(i < j){
        if(arr[i] + arr[j] == target){
            break;
        }
        else if(arr[i] + arr[j] > target) j--;
        else i++;
    }
    return {i+1, j+1};
}


int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    int target;
    cout << "Enter target value: ";
    cin >> target;

    twoSumII(arr, size, target);
}