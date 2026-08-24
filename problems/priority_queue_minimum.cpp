#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    while (n--)
    {
        string str;cin>>str;
        if (str=="push")
        {
            int x; cin>>x;
            pq.push(x);
        }
        else if (str == "top"){
            cout<<pq.top()<<"\n";
        }
        else{
            pq.pop();
        }
    }
    return 0;
}