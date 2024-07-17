/*
Problem Statement: Print GFG n times without the loop.

Example 1:
Input:5
Output:GFG GFG GFG GFG GFG

Example 2:
Input:3
Output:GFG GFG GFG
*/

#include<bits/stdc++.h>
using namespace std;

void printName(int count, int n){
    if(count > n) return;
    
    cout << "GFG ";
    // count++;
    printName(count+1, n);
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    printName(1, n);
}

// Time Complexity: O(n) {Since the function is being called n times}