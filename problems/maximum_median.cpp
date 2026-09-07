//https://codeforces.com/group/9QrbarK7qH/contest/443000/problem/N
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, arr[200005];
bool it_works(ll mid){
    ll ans = 0;
    for (int i = n/2; i < n; i++)
    {
        if(arr[i] < mid) ans += mid - arr[i];
    }
    return ans<=k;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k;
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    ll l = arr[n/2], r = arr[n/2] + k, ans = arr[n/2];
    while (l <= r)
    {
        ll mid = (l + r)/2;
        if (it_works(mid))
        {
            ans = mid;
            l = mid + 1;
        }else
        {
            r = mid-1;
        }
    }
    cout << ans;
    return 0;
}