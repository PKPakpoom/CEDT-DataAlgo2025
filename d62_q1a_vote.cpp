#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    map<string, int> names;
    string temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        ++names[temp];
    }

    int counter = 0;
    if (names.size() < k) {
        int len = names.size();
        for (int i = 0; i < len; ++i) {
            auto it = max_element(names.begin(), names.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
                return a.second < b.second;
            });

            if (it != names.end()) {
                // cout << "name is: " << it->first << '\n';
                counter = it->second;
                names.erase(it);
            } else {
                break;
            }


        }
    } else {
        for (int i = 0; i < k; ++i) {
            auto it = max_element(names.begin(), names.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
                return a.second < b.second;
            });
            if (it != names.end()) {
                counter = it->second;
                names.erase(it);
            }
        }
    }


    cout << counter << '\n';


    
    
    return 0;
}