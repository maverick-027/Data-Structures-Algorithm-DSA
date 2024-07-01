#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-12
    1      1
    12    21
    123  321
    12344321
    */

   int n;
   cin >> n;

   for(int i = 1; i <= n; i++){
    // printing numbers
    for(int j = 1; j <= i; j++){
        cout << j;
    }

    // printing space
    for(int k = 1; k <=2*(n-i); k++){
        cout << " ";
    }

    // printing numbers from end
    for(int l = i; l >= 1; l--){
        cout << l;
    }
    cout << endl;
   }

    return 0;
}