#include <bits\stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int q;cin >> q;
    map<string, string> m;
    while (q--)
    {   
        string a, b;
        cin>>a >>b;
        if (m.find(a) != m.end())
        {
            m[b] = m[a];
        }else{
            m[b] = a;
        }
        m.erase(a);
    }
    cout << m.size() << '\n';
    for (auto [a, b]: m){
        cout << b << ' ' << a << '\n';
    }
    return 0;
}