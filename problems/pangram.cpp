//https://codeforces.com/group/u3Ii79X3NY/contest/270254/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int freq[26]={};
    int n;cin >>n;
    while (n--)
    {
        char c;cin>>c;
        if (c < 'a')
        {
            c += ('a' - 'A');
        }
        
        int x = c - 'a';
        freq[x] ++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0){
            cout << "NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}



