#include <bits/stdc++.h>

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m; cin >> n >> m;
    int tmp, tmpp;
    vector<vector<bool>> ava(m, vector<bool>(n, false));
    for (size_t i = 0; i < m; ++i) {
        cin >> tmp;
        for (size_t j = 0; j < tmp; ++j) {
            cin >> tmpp;
            ava[i][tmpp - 1] = true;
        }
    }

    int best = m;

    vector<bool> check(n, false);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            check[j] = check[j] || ava[i][j];
        }
        bool done = true;
        for (bool c : check) {
            if (!c) {
                done = false;
                break;
            }
        };
        if (done) {
            cout << i << '\n';
            return 0;
        };
        check = vector<bool>(n, false);
    }

    cout << "0\n";

  
    return 0;
}