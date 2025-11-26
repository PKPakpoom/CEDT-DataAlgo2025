#include <bits/stdc++.h>

using namespace std;


int n;
vector<int> rule;
vector<bool> used;
vector<int> sol;

void perm(int len) {
    if (len < n) {
        for (int i = 0; i < n; ++i) {
            // if (rule[i] != -1 && used[rule[i]]) continue;
            if (used[i] != true && (rule[i] == -1 || used[rule[i]])) {
                used[i] = true;
                sol[len] = i;
                perm(len + 1);
                used[i] = false;
            }
        }
    } else {
        for (auto &e : sol) cout << e << ' ';
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m; cin >> n >> m;
    int a, b;
    rule = vector<int>(n, -1);
    for (size_t i = 0; i < m; ++i) {
        cin >> a >> b;
        rule[b] = a;
    }

    used.resize(n);
    sol.resize(n);

    perm(0);
  
    return 0;
}