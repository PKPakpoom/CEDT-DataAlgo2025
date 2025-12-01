#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<vector<int>> dp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    dp = vector<vector<int>>(n, vector<int>(n));

    int tmp;
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            cin >> tmp;
            if (i > 0 && j > 0) {
                dp[i][j] = dp[i - 1][j - 1] + tmp;
            } else {
                dp[i][j] = tmp;
            }
            // cout << dp[i][j] << '\n';
        }        
    }

    int maximum = INT_MIN;

    for (size_t i = 0; i < n; ++i) {
        maximum = max(maximum, dp[n-1][i]);
        int j = 0;
        maximum = max(maximum, dp[n-1][n-i-1]);
        while (i + j < n) {
            if (
                n-1 == i + j &&
                n-i-1 == j
            ) {
                ++j;
                continue;
            }
            int mx = dp[n-1][n-i-1] - dp[i + j][j];
            maximum = max(maximum, mx);
            ++j;
        }
    }

    for (size_t i = 1; i < n; ++i) {
        maximum = max(maximum, dp[i][n-1]);
        int j = 0;
        maximum = max(maximum, dp[n-i-1][n-1]);
        while (i + j < n) {
            if (
                n-i-1 == j &&
                n-1 == i + j
            ) {
                ++j;
                continue;
            }
            // cout << j << ' ' << j + i << '\n';
            // cout << dp[n-i-1][n-1] << ' ' << dp[j][j + i] << '\n';
            int mx = dp[n-i-1][n-1] - dp[j][i + j];
            // cout << mx << '\n';

            maximum = max(maximum, mx);
            ++j;

        }
        // cout << maximum << '\n';
        // cout << "------\n";
    }

    cout << maximum << '\n';


    return 0;
}