#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<int> mat(4);
int k;
// map<ll, ll> dp;

vector<int> matmul(vector<int> &a, vector<int> &b) {
    vector<int> tmp(4);
    tmp[0] = (a[0] * b[0]) % k + (a[1] * b[2]) % k;
    tmp[1] = (a[0] * b[1]) % k + (a[1] * b[3]) % k;
    tmp[2] = (a[2] * b[0]) % k + (a[3] * b[2]) % k;
    tmp[3] = (a[2] * b[1]) % k + (a[3] * b[3]) % k;
    return tmp;
}


vector<int> mod(vector<int> &base, ll ex) {
    if (ex == 1) {
        return base;
    }

    if (ex % 2 != 0) {
        auto mat = mod(base, ex - 1);
        auto matt = mod(base, 1);
        return matmul(mat, matt);
    }

    auto mat = mod(base, ex / 2);
    return matmul(mat, mat);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    int a, b, c, d;

    cin >> n >> k >> a >> b >> c >> d;
    mat[0] = a;
    mat[1] = b;
    mat[2] = c;
    mat[3] = d;

    auto res = mod(mat, n);
    for (auto e : res) {
        cout << e % k << ' ';
    }
    cout << '\n';

    return 0;
}