#include <bits/stdc++.h>
#define ll long long
using namespace std;

int calc(int begin, int end){
    if (begin>end) return 0;
    if (begin==end) return 1;

    int a = calc(begin+1,end);
    int b = calc(begin+2,end);
    int c = calc(begin+3,end);

    return a + b + c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<calc(1,7)<<'\n';
    return 0;
}