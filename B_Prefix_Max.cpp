#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int count = 0;
        for(int i=0; i<n; i++){
            cin>> v[i];
        }
        int a = *max_element(v.begin(),v.end());
        if(v[0] != a){
            swap (v[0],a);
            for(int i=0; i<n; i++){
                count = count + *max_element(v.begin(),v.end());
            }
        }else{
            for(int i=0; i<n; i++){
                count = count + *max_element(v.begin(),v.end());
            }
        }
        cout<<count<<endl;
    }
}