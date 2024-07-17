/*
Problem Statement: "Given a string, check if the string is palindrome or not."
A string is said to be palindrome if the reverse of the string is the same as the string.

Example 1:
Input: Str =  "MADAM"
Output: Palindrome
Explanation: String when reversed is the same as string.

Example 2:
Input: Str = “TAKE U FORWARD”
Output: Not Palindrome
Explanation: String when reversed is not the same as string
*/

#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i, string s){
    if(i >= s.length()/2) return true;

    if(s[i] != s[s.length()-i-1]) return false;

    checkPalindrome(i+1, s);
}

int main(){
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    // using single pointer, can be done using two pointer as well
    bool answer = checkPalindrome(0, s);
    
    if(answer == 1) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
}

// Time Complexity: O(n/2) {because we compare the elements n/2 times, where n is length of string}