#include <bits/stdc++.h>

using namespace std;

bool check(vector<bool> &dna, size_t b, size_t e, bool rev) {
    int len = e - b;
    int mid = b + (len / 2);

    if (len == 2) {
        if (rev) {
            if (dna[b] == 1 && dna[e - 1] == 0) {
                return true;
            }
        } else {
            if (dna[b] == 0 && dna[e - 1] == 1) {
                return true;
            }
        }
        return false;
    }
    if (rev) {
        return (check(dna, mid, e, rev) || check(dna, mid, e, !rev)) && check(dna, b, mid, rev);
    } else {
        return (check(dna, b, mid, rev) || check(dna, b, mid, !rev)) && check(dna, mid, e, rev);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k; cin >> n >> k;
    int len = pow(2, k);
    vector<vector<bool>> dnas(n, vector<bool>(len));
    bool tmp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < len; ++j) {
            cin >> tmp;
            dnas[i][j] = tmp;
        }
    }

    for (auto &dna : dnas) {
        if (check(dna, 0, len, false)) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    
    return 0;
}