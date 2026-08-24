#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve(){
    int points=0;
    for(int i=1; i<=10;i++){
        for (int j=1; j<=10;j++){
            char c;
            cin >>c;
            if (c == 'X'){
                int point = min({i, 11-i, j, 11-j});
                points += point;
            }
        }
    }
    cout << points << '\n';
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin >> t;
    while (t--){
        solve();
    }
    return 0;
}