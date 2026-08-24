#include <iostream>
#include <cmath>
#include <algorithm>
#include <functional>

using namespace std;
#define ll long long

int main (){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n, k, h;
    cin >> n >> k >> h;

    ll arr[n];
    for (int i=0; i < n; i++){
        ll x;
        cin >> x;
        arr[i] = abs(x-h);
    }
    sort(arr, arr+n);
    
    ll sum = 0;
    for (int i=0;i<k; ++i){
        sum += arr[i];
    }
    cout << sum;
}