/*
Problem Statement: Print numbers from 1 to n without the help of loops, prints number from 1 to N recursively.

Example 1:
Input:10
Output:1 2 3 4 5 6 7 8 9 10

Example 2:
Input:5
Output:1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

void printNumber(int count, int n){
    if(count > n) return;

    cout << count << " ";
    // count++;
    printNumber(count+1, n);
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    printNumber(1,n);
}

// Time Complexity: O(n) {Since the function is being called n times}