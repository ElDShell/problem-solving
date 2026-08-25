#include <bits\stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin >> n;
    set<string> s;
    while (n--)
    {
        string str;cin>>str;
        sort(str.begin(),str.end());
        str.erase(unique(str.begin(),str.end()),str.end());
        s.insert(str);
    }
    cout << s.size();
    return 0;
    
}