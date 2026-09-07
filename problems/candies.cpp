//https://codeforces.com/group/3jD9SzY31n/contest/247464/problem/E
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
bool it_works(ll mid){
    return (mid * (mid+1))/2<= n;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    ll l = 1,r = 2e9,ans=0;
    while (l <= r)
    {
        ll mid = (l + r) /2;
        if (it_works(mid)){
            l = mid +1;
            ans  = mid;
        }else{
            r = mid -1;
        }
    }
    cout << ans << '\n';
}
