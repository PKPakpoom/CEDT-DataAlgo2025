#include <bits/stdc++.h>

using namespace std;

vector<int> descendants;

void find_descendant(int idx, int max_size) {
    if (idx >= max_size) {
        return;
    }

    descendants.push_back(idx);

    find_descendant((idx * 2) + 1, max_size);
    find_descendant((idx * 2) + 2, max_size);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, a; cin >> n >> a;

    find_descendant(a, n);
    sort(descendants.begin(), descendants.end(), less<int>());

    cout << descendants.size() << '\n';
    for (int e : descendants) {
        cout << e << ' ';
    }
    cout << '\n';

  
    return 0;
}