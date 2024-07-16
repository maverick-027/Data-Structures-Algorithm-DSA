/*
Problem Statement: Given an integer N, return true if it is a palindrome else return false.

Palindrome Number: A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

Example 1:
Input:N = 4554
Output:Palindrome Number
Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number.

Example 2:
Input:N = 7789
Output: Not Palindrome Number
Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome number.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int originalNum = n;
    int reverseNum = 0;
    while(n > 0){
        int lastDigit = n % 10;
        reverseNum = (reverseNum * 10) + lastDigit;
        n /= 10;
    }

    if(originalNum == reverseNum){
        cout << "Palindrome Number" << endl;
    }
    else{
        cout << "Not Palindrome Number" << endl;
    }

    // Time Complexity: O(log10(n) + 1) where n is the input number.
    
}