#include <bits/stdc++.h>

using namespace std;

#define ll long long

int k = 100000007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;

    vector<vector<ll>> dp(n, vector<ll>(3, 0));

    // dp[i][0] => 0
    //             0

    // dp[i][1] => 1
    //             0

    // dp[i][2] => 0
    //             1



    dp[0][0] = 1;
    dp[0][1] = 1;
    dp[0][2] = 1;

    for (size_t i = 1; i < n; ++i) {
        dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % k;
        dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % k;
        dp[i][2] = (dp[i-1][0] + dp[i-1][1]) % k;
    }

    cout << (dp[n-1][0] + dp[n-1][1] + dp[n-1][2]) % k << '\n';
    
  
    return 0;
}