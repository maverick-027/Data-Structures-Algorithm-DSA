#include<iostream>
using namespace std;

int main(){

    /*
    Pattern-4
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    */

   int n;
   cin >> n;
   
   int num = 1;
   for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout << num << " ";
    }
    num++;
    cout << endl;
   }

    return 0;
}