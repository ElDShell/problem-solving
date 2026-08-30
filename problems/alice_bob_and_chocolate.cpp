//https://codeforces.com/problemset/problem/6/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    deque<int> dq;
    for (int i=0;i<n;i++)
    {
        int v;cin >>v;
        dq.push_back(v);
    }
    int l = 0;
    int r = 0;
    int time_a = 0;
    int time_b = 0;
    while (!dq.empty())
    {

        if (time_a <= time_b&& !dq.empty())
        {
            time_a += dq.front();
            dq.pop_front();
            l++;
        }
        if (time_b < time_a && !dq.empty())
        {
            time_b += dq.back();
            dq.pop_back();
            r++;
        }
    }
    cout << l << ' ' << r;
    
    
    
}