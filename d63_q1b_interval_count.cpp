#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int64_t n, m, k;
    cin >> n >> m >> k;

    vector<int64_t> vec;
    int64_t tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        vec.push_back(tmp);
    }

    vector<int64_t> p_vec;
    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        p_vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end());

    for (auto p : p_vec) {
        auto lower = lower_bound(vec.begin(), vec.end(), p - k);
        auto upper = upper_bound(vec.begin(), vec.end(), p + k);

        cout << (upper - lower) << ' ';
    }
    cout << '\n';

    return 0;
}