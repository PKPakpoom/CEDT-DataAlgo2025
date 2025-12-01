#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> nums;

int bin_sch(int num, int b, int e) {
    int ans = -1;

    while (b <= e) {
        // cout << b << ' ' << e << '\n';
        int mid = b + ((e - b) / 2);
        if (nums[mid] <= num) {
            ans = mid;
            b = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m;
    cin >> n >> m;

    nums.resize(n);

    int tmp;
    for (size_t i = 0; i < n; ++i) {
        cin >> tmp;
        nums[i] = tmp;
    }

    for (size_t i = 0; i < m; ++i) {
        cin >> tmp;
        cout << bin_sch(tmp, 0, n - 1) << '\n';
    }
    
  
    return 0;
}