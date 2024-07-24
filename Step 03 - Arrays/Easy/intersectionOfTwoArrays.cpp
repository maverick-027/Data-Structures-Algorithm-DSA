/*
Problem statement: You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(int arr1[], int arr2[], int n, int m){
    // Optimal Approach - Two pointer
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i < j){
        if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] > arr2[j]) j++;
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    int n = 10;
    int m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    vector<int> ans = intersectionArray(arr1, arr2, n, m);
    cout << "Intersection of array1 and array2: ";
    for(auto &it: ans){
        cout << it << " ";
    }
}
// Time Complexity: O(n+m)
// Space Complexity: O(n+m) {in worst case to store and return ans} or O(1) {when return thing is not included}