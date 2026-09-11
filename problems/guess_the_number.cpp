//https://codeforces.com/group/9QrbarK7qH/contest/438487/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

string ask(int n){
    cout << n << "\n";
    cout.flush();
    string res;cin >> res;
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int l=1,r=1e6,ans=-1;
    while (l <= r)
    {
        int mid = (l+r)/2;
        if (ask(mid)==">=")
        {
           ans=mid;
           l=mid +1;
        }else{
            r=mid-1;
        }
        
    }cout << "! "<<ans;
    
    return 0;
}