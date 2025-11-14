#include <vector>
#include <set>

using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v = A;
    set<T> seen;

    for (auto e : A) {
        seen.insert(e);
    }

    for (auto e : B) {
        if (seen.find(e) == seen.end()) {
            v.push_back(e);
        }
    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> set_a, set_b;

    for (auto e : A) {
        set_a.insert(e);
    }
    for (auto e : B) {
        set_b.insert(e);
    }

    for (auto e : A) {
        if (set_b.find(e) != set_b.end()) {
            v.push_back(e);
        }
    }

    return v;
}
