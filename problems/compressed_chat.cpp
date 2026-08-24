#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);    
    string str;cin>>str;
    string str1;cin>>str1;

    str.erase(unique(str.begin(),str.end()), str.end());
    str1.erase(unique(str1.begin(),str1.end()), str1.end());
    if (str == str1){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}