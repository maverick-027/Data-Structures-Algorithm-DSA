/*
Problem Statement: Given an integer N, check whether it is prime or not. 

A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

Example 1:
Input:N = 2
Output:True
Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).

Example 2:
Input:N =10
Output: False
Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.
*/

#include<iostream>
using namespace std;

void checkPrime(int n){

    // Optimal Approach
    int count = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i==0){
            count++;
            if((n/i)!= i) count++;
        }   
    }
    if(count == 2) cout << "Prime Number" << endl;
    else cout << "Not a prime number" << endl;
    // Time Complexity: O(sqrt(n))


    /*
    // Brute Force Approach
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0) count++;
    }

    if(count == 2) cout << "Prime Number" << endl;
    else cout << "Not a prime number" << endl;

    // Time Complexity: O(n) where n is the input number.
    */
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    checkPrime(n);

    return 0;
}