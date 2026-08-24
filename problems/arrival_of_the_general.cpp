#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >>v[i];
    }
    int max_idx = 0;
    int min_idx = 0;
    
    for (int i = 0; i < n; i++) {
        if (v[i] > v[max_idx]) {
            max_idx = i;
        }
        if (v[i] <= v[min_idx]) { 
            min_idx = i;
        }
    }
    int secs = max_idx + (n - 1 - min_idx);
    if (min_idx < max_idx)
    {
        secs -=1;
    }
    cout << secs;
}


