#include <bits/stdc++.h>
#include <cmath>
#define ll long long
using namespace std;

bool prime(ll x){
    if (x <= 1)return 0;
    if (x <= 3)return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (ll i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}
int getSumDigits(ll n){
    int sum =0;
    while (n > 0)
    {
        sum += n%10;
        n/=10;
    }
    return sum;
}

void solve(){
    int l,r; cin>>l>>r;
    int count=0;
    for(ll i=l; i<=r; i++){
        if (prime(getSumDigits(i))){
            if(i%getSumDigits(i)==0){
                count += 1;
            }
        }
    }
    cout << count<<'\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);    
    int n;cin>>n;
    while (n--)
    {
        solve();
    }
    return 0;
}