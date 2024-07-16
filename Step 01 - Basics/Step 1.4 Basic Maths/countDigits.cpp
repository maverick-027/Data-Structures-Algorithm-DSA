/*
Problem Statement: Given an integer N, return the number of digits in N.

Example 1:
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.

Example 2:
Input:N = 7789
Output: 4
Explanation: The number 7789 has 4 digits.
*/

#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = 0;
    while(n != 0){
        count++;
        n /= 10;
    }

    return count;
    // Time Complexity: O(log10(n) + 1) where n is the input number. 
    
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int digits = countDigits(n);
    cout << "Number of digits in number: " << digits << endl;

    return 0;
}