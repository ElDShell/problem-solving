#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    deque <int> dq;
    ll sum = 0;
    ll sum_a =0;
    ll sum_c =0;
    while (n--)
    {
        int x;cin>>x;
        dq.push_back(x);   
    }
    while (!dq.empty())
    {
        if (!dq.empty()&&sum_a <= sum_c)
        {
            sum_a += dq.front();
            dq.pop_front();
        }
        if (!dq.empty()&&sum_a > sum_c){
            sum_c += dq.back();
            dq.pop_back();
        }
        if (sum_a == sum_c)
        {
            sum = sum_a;
        }   
    }
    cout << sum << '\n';
    

    return 0;
}