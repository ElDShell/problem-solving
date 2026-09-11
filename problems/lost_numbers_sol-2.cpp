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
    int a = ask(1, 2);
    int b = ask(1, 3);
    int c = ask(1, 4);
    int d = ask(1, 5);
    int p[6] = {4,8,15,16,23,42};
    do{
        if(p[0] * p[1] == a && p[0] * p[2] == b && p[0] * p[3] == c && p[0] * p[4] == d)
        {
            cout << "! ";
            for (auto it:p)cout<<it<<" ";
            cout << "\n";
            return 0;
        }
    }while(next_permutation(p, p + 6));
    return 0;
}