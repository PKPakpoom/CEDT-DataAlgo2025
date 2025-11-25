#include <bits/stdc++.h>

using namespace std;

map<int, int> cache;


int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (cache.find(n) == cache.end()) {
        cache[n] = fib(n - 1) + fib(n - 2);
    }

    return cache[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    cout << fib(n);
    
  
    return 0;
}