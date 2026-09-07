//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int n,k;
ld ropes[10005],ans=0;

bool it_works(ld mid){
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += floor(ropes[i]/mid);
    }
    return sum >= k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (int i = 0; i < n; i++)cin>>ropes[i];
    ld l=0,r=1e7;
    int iter = 300;
    while (iter--&&l <= r)
    {
        ld mid= (l + r) /2;
        if (it_works(mid))
        {
            ans = mid;
            l = mid;
        }else{
            r = mid;
        }
    }
    cout << fixed<<setprecision(6) << ans << '\n';
    return 0;
}