//https://codeforces.com/group/9QrbarK7qH/contest/443000/problem/J
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m; cin>>n>>m;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for (int i = 0; i < m; i++)
    {
        ll x; cin>>x;
        cout<< upper_bound(a, a+n, x) - a << ' ';
    }
    cout << '\n';
    return 0;
}