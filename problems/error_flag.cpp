#include <iostream>
#include <algorithm>

using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t;

    while (t--) {
        ll r, w, b; 
        cin >> r >> w >> b;

        ll m = max({r, w, b});
        ll sum = r + w + b - m;

        if (m <= sum + 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}