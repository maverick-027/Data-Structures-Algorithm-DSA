#include<bits/stdc++.h>
using namespace std;

int main(){
    // Hashing Introduction - count frequency of elements in array (number array)
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int hash[13] = {0}; // say atmax elements is 12, so hash[atmax+1]
    // pre-computation
    for(int i = 0; i < size; i++){
        hash[arr[i]] += 1;
    }

    int q; // q - no. of queries
    cout << "Enter number of queries: ";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter number: ";
        cin >> number;

        // fetch
        cout << number << " appears " << hash[number] << " times in the array." << endl;
    }
}