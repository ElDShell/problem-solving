//https://codeforces.com/group/9QrbarK7qH/contest/449618/problem/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    ll l[n];
    ll r[n];
    vector<ll> idx;
    for (int i = 0; i < n; i++)
    {
        ll left,right;cin>>left>>right;
        l[i] = left;
        r[i] = right;
        idx.push_back(left);
        idx.push_back(right);
    }
    sort(idx.begin(),idx.end());
    idx.erase(unique(idx.begin(),idx.end()), idx.end());
    int par[n+n+1]={};
    for (int i = 0; i < n; i++)
    {
        l[i]= lower_bound(idx.begin(),idx.end(),l[i]) - idx.begin();
        r[i] = lower_bound(idx.begin(),idx.end(),r[i]) - idx.begin();
    }
    for (int i = 0; i < n; i++)
    {
        par[l[i]]++;
        par[r[i]+1]--;
    }
    for (int i = 1; i <= idx.size(); i++)
    {
        par[i] += par[i-1];
    }
    
    cout<<*max_element(par,par+idx.size())<<"\n";
    
    return 0;
}