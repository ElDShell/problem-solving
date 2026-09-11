//https://codeforces.com/group/9QrbarK7qH/contest/438487/problem/G
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int ask(int i, int j){
    cout << "? " << i << " " << j << "\n";
    cout.flush();
    int res;cin >> res;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int arr[n];
    int x = ask(1,2);
    int y = ask(1,3);
    int z = ask(2,3);
    arr[0] = (x + y - z)/2;
    arr[1] = (x + z - y)/2;
    arr[2] = (y + z - x)/2;

    for (int i = 3; i < n; i++)
    {
        arr[i] = ask(1, i + 1) - arr[0];
    }
    cout << "! ";
    for (auto it: arr)
    {
        cout << it <<' ';
    }
    return 0;
}