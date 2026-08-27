//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Y
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string str;cin>>str;
    int costs[26]={};
    for(int i=0;i<26;i++)
    {
        cin>>costs[i];
    }
    int n = str.size();
    for (int i=0;i<n;i++)
    {
        
        if (str[i] == '?')
        {
            int j = i;
            while (j < n && str[j] == '?')
            {
                j++;
            }
            char best_char = 'a';
            int best_cost = 1e8;
            for (char c='a';c<='z';c++)
            {
                int new_cost = 0;
                if (i > 0)
                {
                    new_cost += abs(costs[str[i-1] - 'a'] - costs[c-'a']);
                }
                if (j < n)
                {
                    new_cost += abs(costs[str[j] - 'a'] - costs[c-'a']);
                }
                if (new_cost < best_cost)
                {
                    best_cost = new_cost;
                    best_char = c;
                }
            }
            
            for (int x =i; x < j; x++)
            {
                str[x] = best_char;
            }
            i = j - 1;
        }
        
    }
    ll cost =0;

    for (int i = 0; i < n-1; i++)
    {
        cost += abs(costs[str[i]-'a'] - costs[str[i+1]-'a']);
    }
    
    cout << cost << '\n';
    cout << str << '\n';
    return 0;
}