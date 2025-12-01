#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, k;
vector<ll> c;
vector<ll> a;

vector<vector<ll>> dp;


ll rec(ll x) {
    // cout << x << ' ' << k << '\n';
    if (x < k) {
        return a[x];
    }

    ll sum = 0;

    for (ll i = 1; i <= k; ++i) {
        if (dp[x][i] == 32718) {
            // cout << 'g';
            auto v = (c[i] * rec(x - i)) % 32717;
            dp[x][i] = v;
            sum += v;
        } else {
            sum += dp[x][i];
        }
    }

    return sum % 32717;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> k >> n;
    c.resize(k + 1);
    a.resize(k);

    dp = vector<vector<ll>>(n+1, vector<ll>(k+1, 32718));

    ll tmp;
    for (int i = 1; i <= k; ++i) {
        cin >> tmp;
        c[i] = tmp;
    }
    for (int i = 0; i < k; ++i) {
        cin >> tmp;
        a[i] = tmp;
    }

    cout << rec(n) << '\n';
    
  
    return 0;
}