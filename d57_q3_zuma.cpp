#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, c;
    cin >> n >> k >> c;

    list<int> l;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        l.push_back(temp);
    }

    auto it = l.begin();
    advance(it, k);
    it = l.insert(it, c);

    while (1) {
        int counter = 1;

        auto left = it;
        while (left != l.begin()) {
            auto p = prev(left);
            if (*p == c) {
                left = prev(left);
                ++counter;
            } else {
                break;
            }
        }

        auto right = it;
        while (next(right) != l.end()) {
            auto n = next(right);
            if (*n == c) {
                right = next(right);
                ++counter;
            } else {
                break;
            }
        }

        if (counter >= 3) {
            it = l.erase(left, next(right));
            c = *--it;
            if (it == l.begin()) break;
            if (it == l.end()) break;
        } else {
            break;
        }
    }

    for (auto x : l) cout << x << ' ';
    cout << '\n';
}
