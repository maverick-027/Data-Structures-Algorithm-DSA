/*
Problem Statement: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Note: You can return the answer in any order.
Variety 1: return "YES" if the sum exits == target and if not then return "NO"
Variety 2: return the indices of the element if the sum exists == target and if not then return {-1, -1};

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]
Explanation: Because nums[1] + nums[2] == 6, we return [1, 2].
*/

#include<bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int N, int k){
    // Better/ Optimal Approach for Variety 2
    map<int, int> mpp;
    for(int i = 0; i < N; i++){
        int a = arr[i];
        int needed = k - a;
        if(mpp.find(needed) != mpp.end()){
            return "YES";
            // return {mpp[needed], i}; // for variety 2
        }
        mpp[a] = i;
    }
    return "NO";
    // return {-1, -1}; // for variety 2 

    /*
    // Brute Force Approach - TC: O(N*N) and SC: O(1) {we are using to return the answer, not to solve the problem.}
    vector<int> ans;
    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++){
            if(arr[i] + arr[j] == k){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        if(!ans.empty()) break;
    }

    for(auto it: ans) cout << it << " ";
    */
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

    twoSum(arr, size, target);
}
// Time Complexity: O(N) - using unordered map {O(N) - best and average case, O(N*N) - worst case}
// Time Complexity: O(N * log(N)) - using map
// Space Complexity: O(N)