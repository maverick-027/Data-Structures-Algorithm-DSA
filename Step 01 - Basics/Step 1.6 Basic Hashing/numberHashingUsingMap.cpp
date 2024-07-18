#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    unordered_map<int, int> mpp;
    cout << "Enter elements: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    /*
    map<int, int> mpp;
    // pre-compuatation
    for(int i = 0; i < size; i++){
        mpp[arr[i]]++;
    }
    */

   /*
   // iterate in the map
   for(auto it: mpp){
        cout << it.first << "->" << it.second << endl;
    }
   */

    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter number: ";
        cin >> number;
        // fetch
        cout << number << " appear " << mpp[number] << " times in the list."<< endl;
    }
}