#include <bits/stdc++.h>

using namespace std;

#define ll long long

int n, i, j, k;
vector<string> out;

void combi_kn(int n, string &sol, int len, vector<int> k, vector<int> &chosen) {
    if (len < n) {
        for (int i = 0; i < k.size(); ++i) {
            if (chosen[i] < k[i]) {
                sol[len] = i;
                ++chosen[i];
                combi_kn(n, sol, len + 1, k, chosen);
                --chosen[i];
            }
        }
    } else {
        out.push_back(sol);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> i >> j >> k;

    string sol;
    sol.resize(n);

    vector<int> chosen = {0, 0, 0};
    combi_kn(n, sol, 0, {i, j, k}, chosen);

    cout << out.size() << '\n';
    for (auto s : out) {
        for (auto e : s) {
            if (e == 0) cout << "A";
            if (e == 1) cout << "B";
            if (e == 2) cout << "C";
        }
        cout << '\n';
    }
    return 0;
}