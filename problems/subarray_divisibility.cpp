//https://cses.fi/problemset/task/1662
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod(ll number, ll mod){
    return (number%mod + mod)%mod;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    ll p[n+1]={};
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        p[i] += p[i-1];
        p[i] = mod(p[i], n);

    }
    map<ll,ll> m;
    ll ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans += m[p[i]];
        m[p[i]]++;
    }
    cout << ans<<'\n';
    
    return 0;
}