#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll n, m, k;
vector<ll> dp;

ll get_grass(ll l, ll r) {
    if (r < l) return 0;
    ll len = r - l + 1;
    return l != 0 ? dp[r] - dp[l - 1] : dp[r];
}

ll get_cost(ll l, ll r) {
    ll len = r - l + 1;
    ll grass = l != 0 ? dp[r] - dp[l - 1] : dp[r];
    ll price = l != 0 ? grass + (len * k) : grass + (len * k);
    return price;
}

ll cal(ll l, ll budget) {
    ll low = l;
    ll high = n - 1;
    ll max_r = -1;
    while (low <= high) {
        // if (high - low == 0) {
        //     break;
        // }
        
        ll mid = low + ((high - low) / 2);
        if (get_cost(l, mid) <= budget) {
            max_r = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        
    }
    return get_grass(l, max_r);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> m >> k;
    dp.resize(n);

    ll tmp, tmpp;
    for(size_t i = 0; i < n; ++i) {
        cin >> tmp;
        if (i == 0) {
            dp[0] = tmp;
        } else {
            dp[i] = dp[i - 1] + tmp;
        }
        // cout << dp[i] << '\n';
    }

    for(size_t i = 0; i < m; ++i) {
        cin >> tmp >> tmpp;
        cout << cal(tmp, tmpp) << '\n';
    }

    return 0;
}