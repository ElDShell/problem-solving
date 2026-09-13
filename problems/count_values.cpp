//Group: https://codeforces.com/group/ks1uD1SlsL 
//Problem: https://codeforces.com/group/ks1uD1SlsL/contest/351625/problem/D
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
ll arr[20];set<ll> st;

void get_answer(int i,ll sum)
{
    if (i==n)
    {
        st.insert(sum);
        return;
    }

    get_answer(i+1,sum);
    get_answer(i+1, sum+arr[i]);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    get_answer(0,0);
    cout << st.size()-1;
    return 0;
}