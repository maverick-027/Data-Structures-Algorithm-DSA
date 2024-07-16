/*
Problem Statement: Given an integer N return the reverse of the given number.

Example 1:
Input:N = 12345
Output:54321
Explanation: The reverse of 12345 is 54321.

Example 2:
Input:N = 7789
Output: 9877
Explanation: The reverse of number 7789 is 9877.
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int reverseNum = 0;
    while(n != 0){
        int lastDigit = n % 10;
        reverseNum = (reverseNum*10) + lastDigit;
        n /= 10;
    }
    cout << "Reverse of given number: " << reverseNum << endl;

    // Time Complexity: O(log10(n) + 1) where n is the input number.
}