#include <bits/stdc++.h>

using namespace std;


void recur(vector<vector<int>> &mat, int a, int b, int start_i, int stop_i, int start_j, int stop_j) {
    if (a == 0) {
        mat[start_i][start_j] = b;
        return;
    }

    int mi = start_i + ((stop_i - start_i) / 2);
    int mj = start_j + ((stop_j - start_j) / 2);

    recur(mat, a - 1, b, start_i, mi, start_j, mj);
    recur(mat, a - 1, b - 1, start_i, mi, mj, stop_j);
    recur(mat, a - 1, b + 1, mi, stop_i, start_j, mj);
    recur(mat, a - 1, b, mi, stop_i, mj, stop_j);

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b; cin >> a >> b;

    int n = pow(2, a);
    vector<vector<int>> mat(n, vector<int>(n, 0));

    recur(mat, a, b, 0, n, 0, n);

    for (auto v : mat) {
        for (auto e : v) {
            cout << e << ' ';
        }
        cout << '\n';
    }
    
  
    return 0;
}