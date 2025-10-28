#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b && b==c && c==d && d==a){
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
