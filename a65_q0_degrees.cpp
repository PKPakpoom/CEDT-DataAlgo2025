#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    int count[n] = {0};
    int most = 0;
    int tmp;
    for (int i = 0; i < n; ++i) {
        int c = 0;
        for (int j = 0; j < n; ++j) {
            cin >> tmp;
            if (tmp == 1) {
                ++c;
            }
        }
        ++count[c];
        most = max(most, c);
    }

    for (int i = 0; i <= most; ++i) {
        cout << count[i] << ' ';
    }
    cout << '\n';
    
  
    return 0;
}