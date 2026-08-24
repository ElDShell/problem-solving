#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    stack<int> st;
    st.push(5);
    st.push(3);
    st.push(2);
    cout<<st.top()<<'\n';
    st.pop();
    cout<<st.top()<<'\n';
    cout<<st.empty()<<'\n';
    cout<<st.size()<<'\n';
    return 0;
}