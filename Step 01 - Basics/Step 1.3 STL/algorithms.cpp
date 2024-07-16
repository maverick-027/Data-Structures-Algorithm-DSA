#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same

    if(p1.first > p2.first) return true;
    return false;
}


void explainExtras(){
    // sort(a, a+n); 

    // v.sort(v.begin(), v.end());

    // sort(a+2, a+4);

    // sort(a, a+n, greater<int>); // descending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4,1}};
    /*
    sort it according to second element,
    if second element is same, the sort
    it according to first element but in descending order
    */

   // whenever there is my way or some particular sorting is to be done then we use comp
   // sort(a, a+n, comp);

   int num = 7;
   int cnt = __builtin_popcount(num); // returns number of set bits
   cout << cnt << endl;

   long long num = 1657859856234;
   int cnt = __builtin_popcountll(num);
   cout << cnt << endl;


    // printing all the permutations of a value - it does it in dictionary fashion

   string s = "123";

   do{
    cout << s << endl; // 123 132 213 231 312 321
   } while(next_permutation(s.begin(), s.end()));

   string s = "231";

   do{
    cout << s << endl; // 231 312 321
   } while(next_permutation(s.begin(), s.end()));


    string s = "321";
    sort(s.begin(), s.end());

   do{
    cout << s << endl; // 123 132 213 231 312 321
   } while(next_permutation(s.begin(), s.end()));


   // max element
   // int maxi = *(max_element(a, a+n));
}


int main(){
    
    return 0;
}