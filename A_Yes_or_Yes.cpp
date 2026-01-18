#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        bool possible = true;
        for(int i = 0; i + 1 < s.size(); i++) {
            if(s[i] == 'Y' && s[i+1] == 'Y') {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}
