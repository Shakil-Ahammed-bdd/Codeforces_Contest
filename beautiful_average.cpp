#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  int maxx = *max_element(a,a+n);
  cout<<maxx<<endl;

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int t; cin>>t;

  while(t--){
    solve();
  }
}
