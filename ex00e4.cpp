#include <bits/stdc++.h>

using namespace std;

int n, a;
vector<bool> sol;

void perm(int len, int count) {
    if (len < n && count != a) {
        perm(len + 1, count);
        sol[len] = true;
        perm(len + 1, count + 1);
        sol[len] = false;
    } else {
        if (count != a) return;
        for (auto e : sol) cout << e;
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> a >> n;
    
    sol = vector<bool>(n, false);


    perm(0, 0);
  
    return 0;
}