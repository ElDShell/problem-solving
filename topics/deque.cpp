#include <bits/stdc++.h>
#include <array>
#define ll long long
using namespace std;
#define all(v) v.begin(), v.end()
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    deque<int> dq ={5, 3, 1, 2, 2, 3, 4, 5, 1, 4, 2 , 3, 4};
    // dq.push_back(6);
    // dq.push_front(0);
    // dq.pop_back();
    // dq.pop_front();
    // dq.erase(dq.begin()+1);
    sort(dq.begin(),dq.end());
    dq.erase(unique(dq.begin(),dq.end()),dq.end());
    for (auto it: dq){
        cout << it <<'\n';
    }
    return 0;
}