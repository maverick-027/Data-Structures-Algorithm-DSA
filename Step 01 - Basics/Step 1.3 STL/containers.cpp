#include<bits/stdc++.h>
using namespace std;

// pair - lies inside the utility library
void explainPair(){
    pair<int, int> p = {2, 4};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> a = {1, {8, 9}};
    cout << a.first << " " << a.second.first << " " << a.second.second << endl;

    // pair can be treated as datatype 
    pair<int, int> arr[] = {{2, 4}, {6, 8}, {12, 14}};
    cout << arr[0].first << " " << arr[0].second << endl;
}

// vector - is a container, dynamic in nature, stores element same as array
void explainVector(){
    vector<int> v; // creates an empty container named v = {}

    v.push_back(1); // v = {1}
    v.emplace_back(2); // v = {1, 2}
    // generally, emplace_back() is faster than push_back()

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // defining a vector with already some values, like for example size 5 and values 100
    vector<int> vect(5, 100); // {100, 100, 100, 100, 100}

    vector<int> vecto(5); // creates a vector of size 5 with 0 or any garbage value, but even after this (declaring the size) you can increase the size
    vecto.push_back(1);

    // copy the elements of one vector into another
    vector<int> v1(5, 20);
    vector<int> v2(v1); // v2 will be another container with a copy of v1

    // Accessing the elements of vector - similar like array that is with index
    // {10, 20, 30, 40, 50}
    vector<int> a = {10, 20, 30, 40, 50};
    cout << a[0] << " " << a.at(0) << endl;
    cout << a.back() << endl; // last element
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;
    
    // Accessing the elements of vector - using iterator (iterator points to the memory address, not to the element)
    vector<int>::iterator it = a.begin();

    it++;
    cout << *(it) << endl; // to access element we use *(<iterator_name>)

    it = it + 2; 
    cout << *(it) << endl;

    // some more iterators other than a.begin()
    // vector<int>::iterator it = a.end(); // end points to the right after the last memory address, not to the last memory address of the list
    // vector<int>::iterator it = a.rend(); // reverse end
    // vector<int>::iterator it = a.rbegin(); // reverse begin

    // printing the vector - loop using indexes
    // printing the vector - loop using iterators
    for(vector<int>::iterator it = a.begin(); it != a.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for(auto it = a.begin(); it != a.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // for each loop
    for(auto it: a){
        cout << it << " ";
    }
    cout << endl;

    // deletion in a vector 
    // delete one element {10, 20, 30, 40, 50}
    a.erase(a.begin()+1); // {10, 30, 40, 50}

    // delete multiple element {10, 20, 30, 40, 50} => .erase(starting pos, end pos +1) => [start, end)
    a.erase(a.begin()+1, a.begin()+3); // {10, 40, 50}

    // insert function
    vector<int> ls(2, 100); // {100, 100}

    ls.insert(ls.begin(), 30); // {30, 100, 100}
    ls.insert(ls.begin()+1, 5); // {30, 5, 100, 100}
    ls.insert(ls.begin()+2, 2, 500); // {30, 5, 500, 500, 100, 100}

    vector<int> cpy(2, 50);// {50, 50}
    ls.insert(ls.begin(), cpy.begin(), cpy.end()); // {50, 50, 30, 5, 500, 500, 100, 100}

    // other functions in vector
    // {10, 20}
    cout << v.size() << endl; // 2

    // {10, 20}
    v.pop_back(); // pops out the last element {10}

    // v1 -> {10, 20} v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40} v2-> {10, 20}

    v.clear(); // clears the entire vector

    cout << v.empty(); // true or false


}

// list - exactly similar to vector, is a container, dynamic in nature but in list it gives you front operation as well
void explainList(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5) ; // {5, 2, 4}
    ls.emplace_front(7); // {7, 5, 2, 4}

    // rest all functions same as vectors
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// deque - similar to list and vector
void explainDeque(){
    deque<int> dq;

    dq.push_back(2); // {2}
    dq.emplace_back(4); // {2, 4}

    dq.push_front(5) ; // {5, 2, 4}
    dq.emplace_front(7); // {7, 5, 2, 4}

    dq.pop_back(); // {7, 5, 2}
    dq.pop_front(); // {5, 2}

    // rest all functions same as vectors and list
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// stack - LIFO (Last In First Out), is a data structure, push pop top generic 3 functions
void explainStack(){
    stack<int> st;
    st.push(1); // {1} in a stack fashion
    st.push(2); // {2, 1} in a stack fashion
    st.push(3); // {3, 2, 1} in a stack fashion
    st.push(4); // {4, 3, 2, 1} in a stack fashion
    st.emplace(5); // {5, 4, 3, 2, 1} in a stack fashion

    cout << st.top() << endl; // prints 5 "** st[2] is invalid, that is no indexing thing exists here **"

    st.pop(); // {4, 3, 2, 1}

    cout << st.top() << endl; // prints 4
    cout << st.size() << endl; // 4
    cout << st.empty() << endl; // false

    stack<int> st1, st2;
    st1.swap(st2);


}

// queue - FIFO (First In First Out), similar to stack, is a data structure, push pop generic functions
void explainStack(){
    queue<int> q;
    q.push(1); // {1} 
    q.push(2); // {1, 2} 
    q.push(3); // {1, 2, 3} 
    q.push(4); // {1, 2, 3, 4}
    q.emplace(5); // {1, 2, 3, 4, 5} 

    q.back() += 4; // {1, 2, 3, 4, 9}

    cout << q.back() << endl; // prints 9
    cout << q.front() << endl; // prints 1

    q.pop(); // {2, 3, 4, 9}

    cout << q.front() << endl; // prints 2
    cout << q.size() << endl; // prints 4
    cout << q.empty() << endl; // false

    queue<int> q1, q2;
    q1.swap(q2);

    // rest all functions same as stack
}

// priority_queue - (max heap), the largest element stays at the top
void expalinPQ(){
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top() << endl; // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top() << endl; // prints 8

    // size swap empty functions remain same as others

    // minimum pq/ Minimum Heap - smallest element stays at the top
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(7); // {2, 5, 7}
    pq.emplace(1); // {1, 2, 5, 7}

    cout << pq.top() << endl; // prints 1

}

// set - is a container, stores in sorted order and unique elements only
void explainSet(){
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1 ,2}
    st.insert(1); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    // functionality of insert in vector can be used also, that only increases efficiency

    // begin() end() rbegin() rend() size() empty() swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // returns an iterator of element 3

    auto it = st.find(6); // return an iterator pointing to end(), that is right after the end element address

    st.erase(5); // deletes 5 and {1, 2, 3, 4}, takes logarithmic time

    int cnt = st.count(2); // 1, count() return 1 (if element is present) or 0 (if the element is not present)

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function works in the same way as in vector it does.
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}

// multiset - everything is same as set, only stores duplicate elements also
void explainMultiSet(){
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.insert(5); // {1, 1, 1, 5}

    ms.erase(1); // all 1's are erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));
}

// unordered set - everything is same as set, but stores in unordered fashion or randomised
void explainUSet(){
    unordered_set<int> st;


    /*
    lower_bound() and upper_bound() functions
    does not works, rest all the functions are same
    as above.
    it does not stores in any particular order, it has a better
    complexity than set in most cases, except spme when collision happens
    */
}

// map - is a ds or conatainer, stores in the form of key-value pair where key must be unique and values may be same.
void explainMap(){
    // map stores unique keys in a sorted manner, something similar to set ds
    map<int, int> mpp;
    mpp[1] = 2;
    
    mpp.emplace(3, 1);

    mpp.insert({5, 7});
    
    // map<int, pair<int, int>> mpp;
    // map<pair<int, int>, int> mpp;

    // printing or accessing elements of map
    for(auto it: mpp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl; // prints 5
    cout << mpp[5] << endl; // prints 0 or null, doesn't exists 

    auto it = mpp.find(3);
    // cout << *(it) << endl;

    // lower_bound(), upper_bound(), erase(), swap(), size(), empty() are same as above
}

// multimap - same as map, but you can store duplicate keys but in sorted manner
void explainMultiMap(){
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}


// unordered map - unique keys but in not sorted manner
void explainUnorderedMap(){
    // same as set and unordered_Set difference.
}

int main(){
    
    return 0;
}