#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    
    map<ll, ll> relation;
    ll f, s;
    for (int i = 0; i < n; ++i) {
        cin >> f >> s;
        relation[s] = f;
    }

    ll a, b;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;

        if (a == b) {
            cout << "NO\n";
            continue;
        }

        auto f_a = relation.find(a);
        auto f_b = relation.find(b);
        
        if (f_a == relation.end() || f_b == relation.end()) {
            cout << "NO\n";
            continue;
        }

        auto grand_a =  relation.find(f_a->second);
        auto grand_b = relation.find(f_b->second);

        if (grand_a == relation.end() || grand_b == relation.end()) {
            cout << "NO\n";
            continue;
        }



        if (grand_a->second == grand_b->second) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
    
    return 0;
}