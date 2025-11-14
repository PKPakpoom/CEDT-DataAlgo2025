#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n; cin >> m >> n;

    vector<pair<int, int>> seen;

    int year, month;
    for (int i = 0; i < m; ++i) {
        cin >> year >> month;
        seen.push_back({year, month});
    }

    auto comp = [](const pair<int, int> a, const pair<int, int> b) {
        if (a.first != b.first) {
            return a.first < b.first;
        }
        return a.second < b.second;
    };

    sort(seen.begin(), seen.end(), comp);

    for (int i = 0; i < n; ++i) {
        cin >> year >> month;
        auto lower = lower_bound(seen.begin(), seen.end(), make_pair(year, month), comp);
        if (lower->first == year && lower->second == month) {
            cout << "0 0 ";
        } else if (lower != seen.begin()) {
            --lower;
            cout << lower->first << ' ' << lower->second << ' ';
        } else {
            cout << "-1 -1 ";
        }
    }
  
    return 0;
}