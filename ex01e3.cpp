#include <bits/stdc++.h>

using namespace std;

vector<int> nums;

int bin_sch(int num, int b, int e) {
    int mid = b + ((e - b) / 2);

    if (num < nums[b]) {
        return -1;
    }

    if (nums[mid] == num) {
        return nums[mid];
    } else if (nums[mid] > num) {
        return bin_sch(num, b, mid);
    } else if (nums[mid] < num) {
        if (e - b == 1) {
            return nums[mid];
        }
        return bin_sch(num, mid, e);
    }
    return -1;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m; 
    nums.resize(n);

    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        nums[i] = temp;
    }

    for (int i = 0; i < m; i++) {
        cin >> temp;
        cout << bin_sch(temp, 0, n) << '\n';
    }
    
  
    return 0;
}