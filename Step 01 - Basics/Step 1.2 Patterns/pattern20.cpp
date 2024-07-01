#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-20 // n = 5
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    */

   int n;
   cin >> n;

   // printing the upper half to middle
   for(int i = 1; i <= n; i++){
    // printing stars
    for(int j = 1; j <= i; j++){
        cout << "*";
    }

    // printing spaces
    for(int k = 1; k <= 2*(n-i); k++){
        cout << " ";
    }

    // printing stars
    for(int l = i; l >= 1; l--){
        cout << "*";
    }
    cout << endl;
   }

   // printing the lower half
   for(int i = 1; i <= n; i++){
    // printing stars
    for(int j = 1; j <= (n-i); j++){
        cout << "*";
    }

    // printing spaces
    for(int k = 1; k <= (2*i); k++){
        cout << " ";
    }

    // printing stars
    for(int l = 1; l <= (n-i); l++){
        cout << "*";
    }
    cout << endl;
   }

    return 0;
}