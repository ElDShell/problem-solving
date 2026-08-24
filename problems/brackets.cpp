#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    stack<char> st;
    string str;cin>>str;
    for (char c:str){
        if (c == '(' || c=='{' || c=='['){
            st.push(c);
        }else{
            if (st.empty()){
                cout <<"no\n";
                return 0;
            }
            else if(c == ')' && st.top() == '(')st.pop();
            else if (c== '}' && st.top() == '{')st.pop();
            else if (c== ']' && st.top() == '[')st.pop();
            else{
                cout <<"no" <<"\n";
                return 0;
            }
        }
    }
    if (st.empty())
    {
        cout<<"yes"<<"\n";
        return 0;
    }
    cout <<"no" <<"\n";
    return 0;
}