#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-16
    A
    A B
    A B C
    A B C D
    A B C D E
    */

   int n;
   cin >> n;

   for(int i = 1; i <= n; i++){
    char ch = 'A';
    for(int j = 1; j <= i; j++){
        cout << ch << " ";
        ch++;
    }
    cout << endl;
   }


    return 0;
}