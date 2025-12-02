#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k = 100000007;
    int n; cin >> n;

    int dp[n+1][3];
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 1;
    dp[2][0] = 3;
    dp[2][1] = 2;
    dp[2][2] = 2;

    for (int i = 3; i <= n; ++i) {
        dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % k;
        dp[i][1] = (dp[i-2][0] + dp[i-1][1] + dp[i-2][2]) % k;
        dp[i][2] = (dp[i-2][0] + dp[i-2][1] + dp[i-1][2]) % k;
    }

    cout << (dp[n][0] + dp[n][1] + dp[n][2]) % k << '\n';
    
    return 0;
}