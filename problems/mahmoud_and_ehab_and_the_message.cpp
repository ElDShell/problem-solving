#include <bits/stdc++.h>
#define ll long long
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,m;cin>>n>>k>>m;
    vector<string> vw (n+1);
    unordered_map<string,int> mw;
    vector<ll>vc (n+1);
    for (int i = 1; i < n+1; i++)
    {
        cin>>vw[i];
        mw[vw[i]] = i;
    }

    for (int i = 1; i < n+1; i++)
    {
        cin>>vc[i];
    }

    while (k--)
    {
        ll min_cost = 2e18;
        int x;cin>>x;
        vector<int> v(x);
        for (int i = 0; i < x; i++)
        {
            cin>>v[i];
            min_cost = min(min_cost, vc[v[i]]);
        }
        for (int idx: v)
        {
            vc[idx] = min_cost;
        }
    }
    ll cost = 0;
    for (int i = 0; i < m; i++)
    {
        string w;cin>>w;
        int x = mw[w];
        cost += vc[x];
    }
    cout<<cost << '\n';
    return 0;
}