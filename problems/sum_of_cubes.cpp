//https://codeforces.com/problemset/problem/1490/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool it_works(ll first, ll x){
    int l =1,r=10000;
    while (l <= r)
    {
        int mid = (l + r)/2;
        ll sec = 1LL * mid * mid * mid;
        if (first + sec == x)
        {
            return true;
        }
        if (first + sec > x)
        {
            r = mid -1;
        }else{
            l = mid + 1;
        }
    }
    return false;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin >>n;
    while (n--)
    {
        ll x;cin>>x;
        ll a=0,b=0;
        bool found=false;
        for (int i = 1; i <= 10000; i++)
        {
            ll first= 1LL* i*i*i;
            if (first >= x)
            {
                break;
            }
            
            if (it_works(first,x))
            {
                found = true;
                break;   
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }
    
    return 0;
}