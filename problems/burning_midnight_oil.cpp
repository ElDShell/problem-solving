#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
int k;
bool it_works(ll x){
    ll sum = x;
    while (x > 0)
    {
        sum += x/k;
        x /= k;
    }
    return sum >= n;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >>n>>k;
    ll l=1,r=n, ans = n;
    while (l <= r)
    {
        ll mid = (l + r) /2;
        if (it_works(mid)){
            ans = mid;
            r = mid -1;
        }else{
            l = mid +1;
        }
    }
    cout << ans << '\n';
    
    return 0;
}