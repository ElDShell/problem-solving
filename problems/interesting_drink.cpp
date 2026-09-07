//https://codeforces.com/group/9QrbarK7qH/contest/443000/problem/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int q;cin>>q;
    while (q--)
    {
        int price;cin>>price;
        if (price < arr[0])
        {
            cout << 0 << '\n';
            continue;
        }
        
        int l =0,r=n-1;
        int ans = 0;
        while (l <= r)
        {
            int mid = (l + r) /2;
            if (arr[mid] <= price)
            {
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout << ans + 1<<'\n';
    }
    return 0;
}