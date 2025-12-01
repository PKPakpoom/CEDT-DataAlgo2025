#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, k; cin >> n >> k;
    set<int> s;
    int tmp;
    for (size_t i = 0; i < k; ++i) {
        cin >> tmp;
        s.insert(tmp);
    }

    ll arr[n + 1];
    arr[0] = 1;   

    for (int i = 1; i < n + 1; ++i) {
        ll sum = 0;
        for (auto e : s) {
            if (i - e < 0) break;

            sum = (sum + arr[i - e]) % 1000003;                

        }
        arr[i] = sum;
    }

    cout << arr[n] << '\n';
  
    return 0;
}