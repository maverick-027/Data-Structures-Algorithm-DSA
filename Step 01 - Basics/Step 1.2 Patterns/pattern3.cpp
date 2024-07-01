#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-3
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */

   int n;
   cin >> n;

   for(int i = 1; i <= n; i++){
    int num = 1;
    for(int j = 1; j <= i; j++){
        cout << num << " ";
        num++;
    }
    cout << endl;
   }

    return 0;
}