#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-10
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
    */

   int n;
   cin >> n;
   
   int a = n/2 +1; // spitting the pattern into two parts

   // above half pattern (middle line included)
   for(int i = 1; i <= a; i++){
    // printing stars
    for(int j = 1; j <= i; j++){
        cout << "*";
    }

    // printing space
    for(int k = 1; k <= (n/2 - i + 1); k++){
        cout << " ";
    }
    cout << endl;
   }

   // below half pattern (middle line not included)
   for(int i = a+1; i <= n; i++){
    // printing stars
    for(int j = 1; j <= (n-i+1); j++){
        cout << "*";
    }

    // printing space
    for(int k = 1; k <= (i-a); k++){
        cout << " ";
    }
    cout << endl;
   }

    return 0;
}