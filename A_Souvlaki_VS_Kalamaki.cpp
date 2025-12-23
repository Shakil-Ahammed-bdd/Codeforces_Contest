#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int max_count = 1;
        int count = 1;
        sort(a.begin(), a.end());
        for(int i=1; i<n; i++){
            if(a[i] == a[i-1]){
                count ++;
                max_count = max(max_count,count);
            }else{
                count = 1;
            }
        }
        if(n%2 == 0){
            if(max_count %2 == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
           if(max_count > 1){
             if(max_count %2 == 0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
           }else{
            cout<<"NO"<<endl;
           }
        }
    }
    return 0;
}
