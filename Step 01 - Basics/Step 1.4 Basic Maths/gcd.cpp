/*
Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

GCD/HCF: The Greatest Common Divisor of any two integers is the largest number that divides both integers.

Example 1:
Input:N1 = 9, N2 = 12            
Output:3
Explanation:Factors of 9: 1, 3, 9 and Factors of 12: 1, 2, 3, 4, 6, 12
Common Factors: 1, 3 out of which 3 is the greatest hence it is the GCD.

Example 2:
Input:N1 = 20, N2 = 15           
Output: 5
Explanation:Factors of 20: 1, 2, 4, 5 and Factors of 15: 1, 3, 5
Common Factors: 1, 5 out of which 5 is the greatest hence it is the GCD.
*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    // Optimal Approach
    while(a > 0 && b > 0){
        if(a > b) a = a % b;
        else b = b % a;
    }
    if(a == 0) return b;
    return a;
    // Time Complexity: O(logx(min(a,b)))

    /*
    // Brute Force Approach
    int gcd = 0;
    for(int i = 1; i <= min(a, b); i++){
        if(a%i == 0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
    // Time Complexity: O(min(a,b))
    */
}

int main(){
   int num1, num2;
   cout << "Enter two numbers: ";
   cin >> num1 >> num2;

   int answer = gcd(num1, num2);
   cout << "GCD of two numbers: " << answer << endl;
}