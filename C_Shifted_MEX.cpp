#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        long long best = 1, cur = 1;

        for (int i = 1; i < (int)v.size(); i++) {
            if (v[i] == v[i - 1] + 1) {
                cur++;
            } else {
                cur = 1;
            }
            best = max(best, cur);
        }

        cout << best << "\n";
    }
    return 0;
}
