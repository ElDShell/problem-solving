#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    set <int> st;
    st.insert(5);
    st.insert(5); 
    st.insert(4);
    st.insert(3);
    st.insert(7);
    st.insert(2);
    // st[0] wrong 

    // st.erase(4); 
    // erase to something doesn't exists will return runtime error 
    //so you need to check first before erase() a good way to do this is use fine
    st.erase(st.find(4));


    for (auto it:st){
        cout << it << ' ';
    }cout << '\n';
    if (st.find(12)!=st.end()){ 
        /**
         * find() will return a pointer (since it uses a binary search ) so if 2 doesn't exists 
         * the .find() method will return a pointer to the end of the tree. so here we need to 
         * make sure that .find(val) != end() pointer to the end. 
         */
        cout << "found";
    }else{
        cout << "not found";
        
    }cout << '\n';

    multiset <int>mst; // same as set but it accept more than one value.
    mst.insert(5);
    mst.insert(5); 
    mst.insert(4);
    mst.insert(3);
    mst.insert(7);
    mst.insert(2);
    //using erase() on a value that exists more than once like
    //mst.erase(5); will remove all 5s in a the m set

    // to solve this we can use .erase(find(val))
    mst.erase(mst.find(5));
    for (auto i : mst)
    {
        cout << i << ' ';
    }cout << '\n';

    //sets and m sets are sorted by default.
    st.insert(12);
    cout << *st.begin() << '\n';  
    cout << *st.rbegin() << '\n';  
    cout << *--st.end() << '\n';  
    cout << "MORE" << '\n';
    cout << *st.upper_bound(5) << '\n';  
    if (*st.lower_bound(12) != *st.end()){
        cout << *st.lower_bound(12) << '\n';  
        cout << "found\n";
    }
    for (auto i = st.begin(); i != st.end(); i++)
    {
        cout << *i << ' ';
    }
    cout << '\n';
    auto it= st.upper_bound(5);
    if (it != st.end()){
        ++it;
        if (it != st.end()){
            cout << *it << '\n';
        }
    }
    auto it= st.upper_bound(5);
    if (it != st.begin()){
        ----it;
        if (it != st.begin()){
            cout << *it << '\n';
        }
    }
    return 0;

}
