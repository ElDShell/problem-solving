//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
//note: only 4 mb allowed
#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    int freq[26]={};
    while(n--)
    {
        char c;cin>>c;
        int idx = c - 'a';
        freq[idx] ++;
    }
    for (int i=0;i<26;i++)
    {
        for (int j=0;j<freq[i];j++)
        {
            cout << char('a' + i);
        }
    }
    return 0;
}
