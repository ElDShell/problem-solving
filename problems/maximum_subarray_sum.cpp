//https://cses.fi/problemset/task/1643/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    ll sum=0;
    ll mn = 0;
    ll ans = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        ll x;cin>>x;
        sum += x;
        ans = max(ans, sum-mn);
        mn = min(sum, mn);
    }
    
    cout << ans << '\n';
    
    return 0;
}