#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-7
        *
       ***
      *****
     *******
    *********
    */

   int n;
   cin >> n;

   for(int i = 1; i <= n; i++){
    // printing space
    for(int j = 1; j <= (n-i); j++){
        // cout << "_";
        cout << " ";
    }

    // printing stars
    for(int k = 1; k <= (2*i-1); k++){
        cout << "*";
    }

    // printing space
    for(int l = 1; l <= (n-i); l++){
        // cout << "_";
        cout << " ";
    }
    cout << endl;
   }


    return 0;
}