#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-9
        *
       ***
      *****
     *******
    *********
    *********
     *******
      *****
       ***
        *
    */


   int n;
   cin >> n;

   // Above half pattern (1 to <= n/2 row)
   for(int i = 1; i <= n/2; i++){
    // printing space
    for(int j = 1; j <= (n-i); j++){
        cout << " ";
    }

    // printing stars
    for(int k = 1; k <= (2*i-1); k++){
        cout << "*";
    }

    // priting space
    for(int l = 1; l <= (n-i); l++){
        cout << " ";
    }
    cout << endl;
   }

   // Next Half pattern (start from n/2 + 1 row to n)
   for(int i = n/2 + 1; i <= n; i++){
    // printing space
    for(int j = 1; j <= (i-1); j++){
        cout << " ";
    }

    // printing stars
    for(int k = 1; k <= 2*(n-i)+1; k++){
        cout << "*";
    }

    // printing space
    for(int l = 1; l <= (i-1); l++){
        cout << " ";
    }
    cout << endl;
   }


    return 0;
}