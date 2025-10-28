#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
  int n;
  cin >> n;
  vector<long int> v;
  for (int i = 0; i < n; i++)
  {
    long int x;
    cin >> x;
    v.push_back(x);
  }
  int o = 0, e = 0;
  for (int i = 0; i < n; i++)
  {
    if (o == 1 && e == 1)
      break;
    if (v[i] % 2 == 1)
      o = 1;
    else
      e = 1;
  }
  if (o == 1 && e == 1)
  {
    sort(v.begin(), v.end());
  }
  for (auto u : v)
    cout << u << " ";
  cout << endl;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t; cin>>t;

  while(t--){
  solve();
  }
}
