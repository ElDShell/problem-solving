#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map <int,int>m;
    m.insert({5,-1});
    cout << m[5] << '\n';
    cout << m[-5] << '\n'; //doesn't exists but still return 0, the default value in maps for int
    cout << m.size() << '\n';
    m[4] = 3;
    m[-10] = 12;
    m[-2] = -7;
    for (auto [i, j]: m){
        cout << i << ' ' << j << '\n';
    }
    for (auto it = m.begin();it!=m.end();it++){
        cout << it->first << ' ' << it->second << '\n';

    }

    return 0;
}