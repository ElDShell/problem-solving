#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    deque<ll> a(n);
    for (int i=0;i < n;i++){
        int x;
        cin >> x;
        a[i] = x;
    }
    
    ll total_goals = 0;
    sort(a.begin(),a.end());

    while (a.size() > 1)
    {
        deque<ll> next_round;
        while(a.size() > 1){
            total_goals += abs(a.front() - a.back());
            next_round.push_back(max(a.front(), a.back()));
            a.pop_front();
            a.pop_back();
        }
        a = move(next_round);
    }
    cout << total_goals << '\n';
    return 0;
}

