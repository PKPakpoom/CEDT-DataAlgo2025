#include <bits/stdc++.h>

using namespace std;

vector<string> perm;
vector<pair<int, int>> rule;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    int a, b;
    rule.resize(m);
    for (size_t i = 0; i < m; ++i) {
        cin >> a >> b;
        rule[i] = make_pair(a, b);
    }

    vector<int> v;
    for (size_t i = 0; i < n; ++i) {
        v.push_back(i);
    }
    
    do {
        bool skip = false;
        for (auto r : rule) {
            if (find(v.begin(), v.end(), r.first) > find(v.begin(), v.end(), r.second)) {
                skip = true;
            }
        }
        if (skip) continue;
        for (auto e : v) cout << e << ' ';
        cout << '\n';
    } while (next_permutation(v.begin(), v.end()));
  
    return 0;
}