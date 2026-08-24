#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;cin>>n;
    int k;cin>>k;

    cout << min(n%k,(k-(n%k)));
    return 0;
}