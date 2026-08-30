//https://codeforces.com/problemset/problem/1944/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    while (n--)
    {
        int x;cin>>x;
        vector<int> v(x);
        vector<int> freq(x+1);
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i <= x; i++)
        {
            if (freq[i] == 0)
            {
                ans = i;
                break;
            }
            if (freq[i] == 1)
            {
                cnt ++;
                if (cnt == 2)
                {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}