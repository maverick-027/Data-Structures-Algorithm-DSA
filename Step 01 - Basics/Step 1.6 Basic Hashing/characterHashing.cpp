#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter string: "; // only lowercase letters
    cin >> s;

    int hash[25] = {0}; // we took size of hash array as 25 because the code is for only lowercase letters
    // pre-computation
    for (int i = 0; i < s.length(); i++){
        // hash[s[i] - 97] += 1
        hash[s[i] - 'a'] += 1;
    }

    /* 
    // printing hash array
    for(int i = 0; i < 25; i++){
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
        // cout << ch << " appears " << hash[ch - 97] << " times in the string." << endl;
        cout << ch << " appears " << hash[ch - 'a'] << " times in the string." << endl;
    }
}