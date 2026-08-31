//https://cses.fi/problemset/task/1660
//https://cses.fi/problemset/task/1661
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    ll x;cin>>x;
    ll prefix [n+1]={};

    for (int i = 1; i <= n; i++)
    {
        cin >> prefix[i];
        prefix[i] +=  prefix[i-1]; 
    }
    map <ll,ll> m;
    ll ans =0;
    for (int i = 0; i <= n; i++)
    {
        ll need = prefix[i] - x;
        ans += m[need];
        m[prefix[i]]++;
    }
    cout << ans << '\n';
    
    return 0;
}