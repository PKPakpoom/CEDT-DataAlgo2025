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


    // for (auto s : perm) {
    //     cout << s << '\n';
    // }
    
  
    return 0;
}