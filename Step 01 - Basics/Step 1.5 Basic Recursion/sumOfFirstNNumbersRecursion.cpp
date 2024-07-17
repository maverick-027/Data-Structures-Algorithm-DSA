/*
Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers using recursion.

Example 1:
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Example 2:
Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15
*/

#include<bits/stdc++.h>
using namespace std;

void printSum(int sum, int n){
    if(n < 0){
        cout << sum << endl;
        return;
    }

    printSum(sum+n, n-1);
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    printSum(0, n);
}
// Time Complexity: O(n) {Since the function is being called n times}