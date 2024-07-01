#include<iostream>
using namespace std;

int main(){


    /*
    Pattern-16
    A
    B B
    C C C
    D D D D
    E E E E E
    */

   int n;
   cin >> n;

   char ch = 'A';
   for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout << ch << " ";
    }
    ch++;
    cout << endl;
   }

    return 0;
}