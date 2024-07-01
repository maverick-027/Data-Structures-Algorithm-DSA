#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-17
       A
      ABA
     ABCBA
    ABCDCBA
    */

   int n;
   cin >> n;

   for(int i = 1; i <= n; i++){
    char ch = 'A';
    // printing space
    for(int j = 1; j <= (n-i); j++){
        cout << " ";
    }

    // printing characters
    int breakpoint = (2*i-1)/2;
    for(int k = 1; k <= (2*i-1); k++){
        cout << ch;
        if(k <= breakpoint) ch++;
        else ch--;
    }

    // printing space
    for(int l = 1; l <= (n-i); l++){
        cout << " ";
    }

    cout << endl;
   }


    return 0;
}