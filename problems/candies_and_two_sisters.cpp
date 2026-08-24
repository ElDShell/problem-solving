#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while (t--){
        int n;cin>>n;
        if (n < 3){
            cout << 0 << '\n';
        }
        else{
            int a = (n / 2) + 1;
            int res = n - a;
            cout << res << '\n';
        }
    }
    return 0;
}
