//https://codeforces.com/problemset/problem/313/B
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;
    int n = s.size();
    s = '!' + s;
    int f[n+1]={};
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == s[i+1])
        {
            f[i] = 1;
        }
    }
    int prefix[n+1]={};
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i-1] + f[i];
    }
    int m;cin>>m;
    while (m--)
    {
        int l,r;cin>>l>>r;
        cout << prefix[r] - prefix[l-1] - f[r] << '\n';    
    } 

    return 0;
}