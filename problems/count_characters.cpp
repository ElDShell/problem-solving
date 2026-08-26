//https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int freq[52]={};
    string str;cin>>str;

    for(int i=0; i< str.size();i++){
        int num = str[i];
        if (num < 'a')
        {
            num -= 'A';
            freq[num]++;
        }else{
            num = (num-'a') + 26;
            freq[num]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)continue;
        cout << char(i + 'A') << " " << freq[i] << '\n'; 
    }
    for (int i = 26; i < 52; i++)
    {
        if (freq[i] == 0)continue;
        cout << char(i - 26 + 'a') << " " << freq[i]<< '\n'; 
    }
    
}