#include <bits/stdc++.h>

using namespace std;

int n, a;
vector<bool> sol;

void perm(int len, int con, int m) {
    if (len < n) {
        perm(len + 1, 0, m);
        sol[len] = true;
        perm(len + 1, con + 1, max(m, con + 1));
        sol[len] = false;
    } else {
        if (m < a) return;
        for (auto e : sol) cout << e;
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> a;
    
    sol = vector<bool>(n, false);
    perm(0, 0, 0);
  
    return 0;
}