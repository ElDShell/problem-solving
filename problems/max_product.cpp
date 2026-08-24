#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k;
    cin >>n>>k;
    ll product = 1;
    bool has_zero = 0;
    const ll MOD = 1e9 + 7;
    for (int i = 0; i < n; i++)
    {
        int x; cin >>x;
        if (x == 0)
        {
            has_zero = 1;
        }
        product = (product * (abs(x) % MOD)) % MOD;
    }
    if (has_zero)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << product % MOD << "\n";
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t; cin >>t;
    while (t--)
    {
        solve();
    }
    return 0;
}