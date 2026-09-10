//https://codeforces.com/problemset/problem/474/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int p[n+1]={};
    
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        p[i] += p[i-1];
    }
    
    int m;cin>>m;
    
    while (m--)
    {
        int q;cin>>q;
        auto it = lower_bound(p ,p + n,q);
        cout << (it - p)<<'\n';
    }
    
    return 0;
}