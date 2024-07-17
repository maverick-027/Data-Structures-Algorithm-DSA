/*
Problem Statement: Given a number X,  print its factorial.

To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.
Note: X is always a positive number. 

Example 1:
Input: X = 5
Output: 120
Explanation: 5! = 5*4*3*2*1

Example 2:
Input: X = 3
Output: 6
Explanation: 3!=3*2*1
*/

#include<bits/stdc++.h>
using namespace std;

int printFactorial(int n){
    if(n == 0) return 1;

    return n * printFactorial(n-1);
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int answer = printFactorial(n);
    cout << "factorial of " << n << " is: " << answer << endl;
}

// Time Complexity: O(n) {Since the function is being called n times}