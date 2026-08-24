#include <bits/stdc++.h>
#include <array>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    array<int, 5> v = {1, 2, 3, 4, 5};
    array<int,5> a = {6, 7, 8};
    a = v;
    for (auto i:a){
        cout<<i<<'\n';
    }
    return 0;
}