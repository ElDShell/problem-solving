//Group: https://codeforces.com/group/ks1uD1SlsL 
//Problem: https://codeforces.com/group/ks1uD1SlsL/contest/351625/problem/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
char arr[10][10];int xb,xe,yb,ye;
bool visited[10][10];

int get_answer(int i, int j){
    //base case
    if(i<1 || i>n || j<1 || j>n || arr[i][j]=='#' || visited[i][j])return 1e5;
    if(i==xe && j==ye)return 0;
    //recursive case
    visited[i][j]=1;
    int a = get_answer(i+1,j) + 1;
    int c = get_answer(i-1,j) + 1;
    int b =get_answer(i,j+1) + 1;
    int d = get_answer(i,j-1) + 1;
    visited[i][j]=0;
    return min({a, b, c, d});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cin>>xb>>yb>>xe>>ye;
    int num = get_answer(xb,yb);
    if(num>=1e5)cout<<"-1";
    else cout<<num;
    return 0;
}