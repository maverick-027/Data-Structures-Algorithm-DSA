#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;

    unordered_map<char, int> mpp;
    // pre-computation
    for(int i = 0; i < s.length(); i++){
        mpp[s[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while(q--){
        char ch;
        cout << "Enter character: ";
        cin >> ch;
        // fetch
        cout << ch << " appears " << mpp[ch] << " times in the string." << endl;
    }
    
}