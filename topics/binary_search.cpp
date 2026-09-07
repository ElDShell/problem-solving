#include <bits/stdc++.h>
#define ll  long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int arr[8] = {1, 15, 3, 4 ,5, 0, 6, 7};
    sort(arr, arr + 8);
    int test_numbers[4] = {5, 12, 7, 8};
    for (int i = 0; i < 4; i++)
    {
        int l=0, r=7;
        bool ans = 0;
        while (l <= r)
        {
            int mid= (l+r)/2;
            if (arr[mid] == test_numbers[i])
            {
                ans = 1;
                break;
            }
            if (arr[mid] < test_numbers[i])
            {
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        if (ans)
        {
            cout << "Found\n";
        }else{
            cout << "Not Found\n";
        }
    }

}