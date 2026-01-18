#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test=0; test<t; test++) {
        int n;
        cin >> n;
        if(n <= 3) {
            cout << n << "\n";
        } else if(n%2 == 0) {
            n = n / 2;

        } else {
            cout << 1 << "\n";
        }
    }
    return 0;
}


//https://codeforces.com/contest/2184/problem/A
//submit kora hoy nai code bul ace

