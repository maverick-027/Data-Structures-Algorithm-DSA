/*
Problem Statement: Given an integer N, return all divisors of N.

A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

Example 1:
Input:N = 36
Output:[1, 2, 3, 4, 6, 9, 12, 18, 36]
Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.

Example 2:
Input:N =12
Output: [1, 2, 3, 4, 6, 12]
Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.
*/

#include<bits/stdc++.h>
using namespace std;

void printDivisors(int N){

    // Optimal Approach Time Complexity: O(sqrt(N)) + O(n log n) + O(n)
    vector<int> ls;
    for(int i = 1; i*i <= N; i++){
        if(N%i==0){
            ls.push_back(i);
            if((N/i)!=i) ls.push_back(N/i);
        }
    }
    // O(sqrt(N)) here is N is the input number

    sort(ls.begin(), ls.end()); // O(n log n) here n is no. of factors

    for(auto it: ls) cout << it << " "; // O(n) here n is no. of factors

    // if you don't required to print divisors in an ascending order then no need to sort or store in a list/ vector data structure.
    // In that case, TC: O(sqrt(N))
    // all the factors can be found in O(srqt(N))



    /*
    // Brute Force Approach
    for(int i = 1; i <= n; i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
    cout << endl;
    // Time Complexity: O(n) where n is the input number.
    */
}


int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;

    printDivisors(n);

    return 0;
}