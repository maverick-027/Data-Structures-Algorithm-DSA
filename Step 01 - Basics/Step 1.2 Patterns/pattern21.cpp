#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-21 Square (n = 4)
    ****
    *  *
    *  *
    ****
    */

   int n;
   cin >> n;

   for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        if(i == 1 || i == n || j == 1 || j == n){
            cout << "*";
        } else cout << " ";
    }
    cout << endl;
   }


    return 0;
}