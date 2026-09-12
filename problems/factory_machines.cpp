/**
A factory has n machines which can be used to make products. Your goal is to make a total of t products.

For each machine, you know the number of seconds it needs to make a single product. The machines can work simultaneously, 
and you can freely decide their schedule.

What is the shortest time needed to make t products?

Input:
The first input line has two integers n and t: the number of machines and the number of products to make.
next line has n integers k1,k2,…,kn: the number of seconds each machine needs to make a single product.
Output: 

 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;ll t;
vector<ll> machines;

ll it_works(ll mid){
    ll products = 0;
    for (int i = 0; i < n; i++)
    {
        products += mid/machines[i];
        if (products >= t)
        {
            return true;
        }
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>t;
    machines.resize(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>machines[i];
    }
    ll l=0;
    ll r = *min_element(machines.begin(), machines.end()) * t;   
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l+r)/2;
        if (it_works(mid))
        {
            ans = mid;
            r = mid -1;
        }else{
            l = mid +1;
        }
    }
    cout << ans << '\n';
    
    
    return 0;
}