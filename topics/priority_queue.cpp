#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    priority_queue<int,vector<int>, greater<int>> pq;
    pq.push(2);
    pq.push(1);
    pq.push(3);
    pq.push(5);
    while (!pq.empty())
    {
        cout <<pq.top()<<'\n';
        pq.pop();
    }
    
    return 0;
}