#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> arr;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    arr = vector<vector<int>>(n, vector<int>(n, 0));
    int tmp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            cin >> tmp;
            arr[i][j] = tmp;
        }
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            int l = 0;
            int r = 0;
            if (j - 1 >= 0) {
                l = arr[i-1][j-1];
            }
            if (i != j) {
                r = arr[i-1][j];
            }
            int cur = arr[i][j];
            arr[i][j] = max(cur + l, cur + r);
            // cout << i << ' ' << j << '\n';
            // cout << arr[i][j] << '\n';
        }
    }



    int maximum = 0;
    // for (auto e : arr) {
    //     for (auto f : e) {
    //         cout << f << ' ';
    //     }
    //     cout << '\n';
    // }
    for (auto e : arr[n-1]) {
        maximum = max(maximum, e);
    }
    cout << maximum << '\n';

    return 0;
}