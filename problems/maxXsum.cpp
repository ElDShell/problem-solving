#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;

        vector<pair<int,int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }
        sort(v.begin(), v.end());
        priority_queue<int> pq;
        ll sum = 0;
        ll mn = 1e18;
        for (int i = 0; i < n; i++)
        {
            sum += v[i].second;
            pq.push(v[i].second);
            if (pq.size() > k)
            {
                sum -= pq.top();
                pq.pop();
            }
            if (pq.size() == k)
            {
                mn = min(mn, 1LL * sum * v[i].first);
            }
        }
        cout << mn << '\n';
    }
    return 0;
}