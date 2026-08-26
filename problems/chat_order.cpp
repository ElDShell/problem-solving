#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;
    stack <string> st;
    set<string> s;
    while (n--)
    {
        string name;cin>>name;
        st.push(name);
    }
    while (!st.empty()){
        auto x = st.top();
        st.pop();
        if(s.find(x) != s.end())continue;
        s.insert(x);
        cout << x << '\n';
    }
    
}