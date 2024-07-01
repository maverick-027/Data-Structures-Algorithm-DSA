#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-18 // n = 5
    E
    D E
    C D E
    B C D E
    A B C D E
    */

   int n;
   cin >> n;
      for(int i = 0 ; i < n; i++){
          // Inner loop for printing the alphabets from
          // A + N -1 -i (i is row no.) to A + N -1 ( E in this case).
          for(char ch = ('A'+n-1)-i; ch <= ('A'+n-1); ch++){
              cout << ch << " ";
          }
          cout << endl;
      }

}