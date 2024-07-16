/*
Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.

Armstrong number: An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Example 1:
Input:N = 153
Output:True
Explanation: 1*(3 times) + 5*(3 times)+ 3*(3 times) = 1 + 125 + 27 = 153

Example 2:
Input:N = 371
Output: True
Explanation: 3*(3 times) + 7*(3 times)+ 1*(3 times) = 27 + 343 + 1 = 371
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int count = to_string(n).length(); // length of number n 
    int sum = 0;
    int originalNum = n;

    while(n > 0){
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit, count);
        n /= 10;
    }

    
    if(sum == originalNum){
        cout << "Armstrong Number" << endl;
    } else{
        cout << "Not Armstrong Number" << endl;
    }

    // Time Complexity: O(log10(n) + 1) where n is the input number. 
}