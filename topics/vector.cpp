#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int> v1(15,4); //size of 15 inital value of 4
    vector<int>v = {1, 2, 3, 4, 5};
    // for (auto &it: v1){
    //     cin >> it;
    // } 
    cout << v.size() <<'\n';
    v.push_back(6);
    cout << v.size() <<'\n';
    cout << v.front() << '\n';
    cout << v.back() << '\n';
    //v.clear() // clean it all.
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<int>()); // descending order
    sort(v.rbegin(), v.rend()); //descending order
    bool b = binary_search(v.begin(), v.end(), 5);
    int u = upper_bound(v.begin(), v.end(), 5) - v.begin();
    int l = lower_bound(v.begin(), v.end(), 5) - v.begin();
    int mx = *max_element(v.begin(), v.end());
    int mi = *min_element(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout<<v[5]<<"\n";
    return 0;
}