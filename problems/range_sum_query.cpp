//
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q; cin >>n>>q;
    ll prefix[n+1] = {};
    for (int i = 1; i <= n; i++)
    {
        cin >> prefix[i];
        prefix[i] += prefix[i-1];
    }
    while (q--)
    {
        int l,r;cin >>l>>r;
        cout<<prefix[r] - prefix[l-1]<<'\n';
    }
    return 0;
}