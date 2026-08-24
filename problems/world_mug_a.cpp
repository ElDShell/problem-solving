#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; if (!(cin >> n)) return 0;
    vector<ll> a(n);
    for (int i=0;i < n;i++){
        cin >> a[i];
    }
    
    ll total_goals = 0;
    
    while (a.size() > 1)
    {
        vector<ll> next_round;
        next_round.reserve(a.size()/2);
        for (ll i=0;i<a.size();i=i+2){
            total_goals += abs(a[i] - a[i+2]);
            next_round.push_back(max(a[i], a[i+1]));
        }
        a = move(next_round);
    }
    cout << total_goals << '\n';
    return 0;
}

