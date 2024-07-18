#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;

    int hash[255] = {0};
    // pre-computation
    for (int i = 0; i < s.length(); i++){
        hash[s[i]] += 1;
    }

    /* 
    // printing hash array
    for(int i = 0; i < 255; i++){
        cout << hash[i] << " ";
    }
    */

    int q;
    cout << "Number of queries: ";
    cin >> q;
    while (q--){
        char ch;
        cout << "Enter character: ";
        cin >> ch;

        // fetch
        cout << ch << " appears " << hash[ch] << " times in the string." << endl;
    }
}