#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<vector<ll>> dp;

ll cal(ll n, ll k) {
    if (n == k || k == 0) {
        return 1;
    }
    
    // cout << n << ' ' << k << '\n';

    ll l, r;
    if (dp[n][k] == -1) {
        l = cal(n - 1, k - 1);
        r = cal(n - 1, k);
    } else {
        l = dp[n - 1][k - 1];
        r = dp[n - 1][k];
    }
    return l + r;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, k; cin >> n >> k;
    dp = vector<vector<ll>>(n + 1, vector<ll>(k + 1, -1));

    cout << cal(n, k) << '\n';

  
    return 0;
}