#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m;
vector<int> ci, co, from;
vector<vector<int>> path;
vector<bool> visited;

void dfs(int from) {
    // TODO
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    ci = vector<int>(n, -1);
    co = vector<int>(n, -1);
    from = vector<int>(n, -1);
    visited = vector<bool>(n, false);
    //       
    // path = from:  2 3 6 -1
    //          to:  3 1 2 -1
    //
    path = vector<vector<int>>(2, vector<int>(m, -1));

    int tmp;
    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        path[i][0] = tmp;
    }

    for (int i = 0; i < m; ++i) {
        cin >> tmp;
        path[i][1] = tmp;
    }

    


    return 0;
}