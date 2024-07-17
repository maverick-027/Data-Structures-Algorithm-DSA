/*
Problem Statement: Given n, calculate F(n) using recursion.
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence (0 1 1 2 3 5 8 13 21 ...), such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.

Example 1:
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

Example 2:
Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.

Constraints: 0 <= n <= 30
*/

#include<bits/stdc++.h>
using namespace std;

int printFibonacci(int n){
    if(n <= 1) return n;

    // Nth Fibonacci number can be written as a sum of (N-1)th and (N-2)th Fibonacci numbers.
    return printFibonacci(n-1) + printFibonacci(n-2);
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int answer = printFibonacci(n);
    cout << n << "th fibonacci number is: " << answer << endl;
}

// Time Complexity: O(2^N) {This problem involves two function calls for each iteration which further expands to 4 function calls and so on which makes worst-case time complexity to be exponential in nature}.
