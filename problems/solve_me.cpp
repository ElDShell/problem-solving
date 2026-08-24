#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string a,b;
    cin >> a >>b;

    if (b.rfind(a, 0) == 0){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }

    return 0;
}