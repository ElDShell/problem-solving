#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main (){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int arr[5];
    for(auto &i:arr){
        cin >> i;
    }
    for(int i=0;i < size(arr); i++){
        cout << arr[i];
    }

    size = size(arr);
    sort(arr, arr+size);
    sort(arr, arr+size, greater<int>)
    reverse(arr, arr+size);
    binary_search(arr, arr+size, 5);
    upper_bound(arr, arr+size, 4);
    lower_bound(arr, arr+size, 4);
    max_element(arr, arr+size);
    min_element(arr, arr+size);
    return 0;
}