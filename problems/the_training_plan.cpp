#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    if (n <4)cout << n;
    else{
        cout << n - (n/4);
    }
    return 0;
}