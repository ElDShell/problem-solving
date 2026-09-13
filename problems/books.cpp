//https://codeforces.com/problemset/problem/279/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll t;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> t;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];  
    }
    ll sum =0;
    int l = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > t)
        {
            sum -= arr[l];
            l++;
        }
        ans = max(ans, i - l + 1);
    }

    cout << ans << endl;
    return 0;
}