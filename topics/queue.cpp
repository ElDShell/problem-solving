#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    queue<int> q;
    q.push(5);
    q.push(2);
    q.push(3);
    cout << q.front()<<'\n';
    q.pop();
    cout << q.front()<<'\n';
    return 0;
}