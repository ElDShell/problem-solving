#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;cin>>n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        dq.push_back(x);   
    }

    
    int sum_a = 0;
    int sum_b = 0;
    bool turn_a = 1;
    while (!dq.empty())
    {
        int val;
        if (dq.front() > dq.back())
        {
            val = dq.front();
            dq.pop_front();
        }else{
            val = dq.back();
            dq.pop_back();
        }
        if (turn_a)
        {
            turn_a = 0;
            sum_a += val;
        }else{
            turn_a = 1;
            sum_b += val;
        }
    }
    cout << sum_a << ' ' << sum_b;
    return 0;
}