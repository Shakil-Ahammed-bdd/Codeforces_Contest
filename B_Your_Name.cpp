#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s == t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t; cin>>t;

  while(t--){
    solve();
  }
}
