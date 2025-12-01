#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> arr;
// int maximum = 0;

int recur(int i, int j, int val) {
    if (i == 0 && j == 0) {
        return val;
    }

    if (i < 0 || j > i || j < 0) {
        return INT_MIN;
    }

    int l = INT_MIN;
    if (j > 0) {
        l = recur(i - 1, j - 1, val + arr[i - 1][j - 1]);
    }
    
    int r = INT_MIN;
    if (j <= i - 1) { 
        r = recur(i - 1, j, val + arr[i - 1][j]);
    }

    return max(l, r);
}


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

    // cout << recur(n-1, 0, 0) << '\n';
    // cout << maximum << '\n';

    int maximum = 0;
    for (int i = 0; i < n; ++i) {
        maximum = max(maximum, recur(n-1, i, arr[n-1][i]));
        // cout << maximum << '\n';
    }

    cout << maximum << '\n';

  
    return 0;
}