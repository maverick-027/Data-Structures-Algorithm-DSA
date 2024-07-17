/*
Problem Statement: Print numbers from N to 1 (space separated) without the help of loops.

Example 1:
Input:10
Output:10 9 8 7 6 5 4 3 2 1

Example 2:
Input:3
Output:3 2 1
*/

#include<bits/stdc++.h>
using namespace std;

void printNumber(int n){
    if(n <= 0) return;

    cout << n << " ";
    // n--;
    // printnumber(n);
    printNumber(n-1);
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    printNumber(n);
}

// Time Complexity: O(n) {Since the function is being called n times}