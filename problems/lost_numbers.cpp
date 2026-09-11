//https://codeforces.com/group/9QrbarK7qH/contest/438487/problem/F
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ask(int i, int j){
    cout << "? " << i << " " << j << "\n";
    cout.flush();
    int res;cin >> res;
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int s[6];
    s[0] = 0;
    s[1] = ask(1, 2);
    s[2] = ask(1, 3);
    s[3] = ask(1, 4);
    s[4] = ask(1, 5);
    int gc=0;
    for (int i = 1; i < 5; i++)gc=__gcd(gc, s[i]);
    int first=0;
    for (auto it: {4,8,15,16,23,42})
    {
        if (gc%it==0)
        {
            first=it;
        }
    }
    
    s[0] = first;
    s[1] /= first;
    s[2] /= first;
    s[3] /= first;
    s[4] /= first;
    set <int>st = {4,8,15,16,23,42};
    for (int i =0; i < 5; i++)
    {
        st.erase(s[i]);
    }
    s[5]= *st.begin();
    cout << "! ";
    for (auto it: s)cout<<it<< ' ';
    return 0;
}