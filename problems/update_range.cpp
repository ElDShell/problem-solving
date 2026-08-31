//https://codeforces.com/group/wNS3GwuHOE/contest/435607/problem/E
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;cin>>n>>q;
    ll s[n+1]={};
    for (int i = 1; i <= n; i++)
    {
        cin>>s[i];
    }
    ll par[n+1]={};
    while (q--)
    {
        ll l,r,v;cin>>l>>r>>v;
        par[l] +=v;
        par[r+1] -= v;    
    }
    for (int i = 1; i <= n; i++)
    {
        par[i] += par[i-1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << s[i] + par[i] << ' ';
    }cout << '\n';
    
    
    return 0;
}