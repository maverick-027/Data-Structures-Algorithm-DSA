/*
Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.
The union of two arrays can be defined as the common and distinct elements in the two arrays.

NOTE: Elements in the union should be in ascending order.

Example 1:
Input: n = 5, m = 5, arr1[] = {1,2,3,4,5}, arr2[] = {2,3,4,4,5}
Output: {1,2,3,4,5}
Explanation: 
Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5} 

Example 2:
Input: n = 10, m = 7, arr1[] = {1,2,3,4,5,6,7,8,9,10}, arr2[] = {2,3,4,4,5,11,12}
Output: {1,2,3,4,5,6,7,8,9,10,11,12}
Explanation:
Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1,6,7,8,9,10
Distnict Elemennts in arr2 are : 11,12
Union of arr1 and arr2 is {1,2,3,4,5,6,7,8,9,10,11,12}
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> unionArray(int arr1[],int arr2[], int n, int m){
    // Optimal Approach - Two pointer
    vector<int> ans; // to store union of two arrays
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(arr1[i] <= arr2[j]){
            if(ans.size() == 0 || ans.back() != arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        } else{
            if(ans.size() == 0 || ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }
                j++;
        }
    }
    // if arr2 exhausted and arr1 is remaining
    while(i < n){
        if(ans.size() == 0 || ans.back() != arr1[i]){
            ans.push_back(arr1[i]);
        }
        i++;
    }
    // if arr1 exhausted and arr2 is remaining
    while(j < m){
        if(ans.size() == 0 || ans.back() != arr2[j]){
            ans.push_back(arr2[j]);
        }
        j++;
    }
        
    return ans;
}

int main(){
    int n = 10;
    int m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    vector<int> ans = unionArray(arr1, arr2, n, m);
    cout << "Union of array1 and array2: ";
    for(auto &it: ans){
        cout << it << " ";
    }   
}

// Time Complexity: O(m+n) 
// Space Complexity: O(m+n) {if space of Union ans is considered} or O(1) {if space of union ans is not considered}
// we have used ans vector ds to return the answer(union) not to solve the problem.