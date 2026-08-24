#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;
#define ll long long

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string num_str;
ll dp[20][165][165]; 

ll solve_dp(int idx, int sum, int rem, bool is_tight, int target_sum) {
    if (sum > target_sum) return 0;
    
    if (idx == num_str.length()) {
        return (sum == target_sum && rem == 0) ? 1 : 0;
    }

    // Return memoized result if not restricted by tight bound
    if (!is_tight && dp[idx][sum][rem] != -1) {
        return dp[idx][sum][rem];
    }

    int limit = is_tight ? (num_str[idx] - '0') : 9;
    ll ans = 0;

    for (int d = 0; d <= limit; d++) {
        ans += solve_dp(
            idx + 1,
            sum + d,
            (rem * 10 + d) % target_sum,
            is_tight && (d == limit),
            target_sum
        );
    }

    if (!is_tight) {
        dp[idx][sum][rem] = ans;
    }
    
    return ans;
}

ll count_valid(ll n) {
    if (n <= 0) return 0;
    num_str = to_string(n);
    ll total_valid = 0;

    // Check all possible prime sums <= 162
    for (int s = 2; s <= 162; s++) {
        if (is_prime(s)) {
            memset(dp, -1, sizeof(dp));
            total_valid += solve_dp(0, 0, 0, true, s);
        }
    }

    return total_valid;
}

void solve() {
    ll l, r;
    cin >> l >> r;
    cout << count_valid(r) - count_valid(l - 1) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}