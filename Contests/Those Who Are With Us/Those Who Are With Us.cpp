#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
  int n, m;
  cin >> n >> m;
 
  int mx = 0;
  vector<vector<int>> a(n + 1, vector<int> (m + 1));
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      cin >> a[i][j]; 
      mx = max(mx, a[i][j]);
    }
  }
  
  int total = 0;
  vector<int> cntR(n + 1), cntC(m + 1);
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      if (a[i][j] == mx) {
        cntR[i]++;
        cntC[j]++;
        total++;
      }
    }
  }
 
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      int k = cntR[i] + cntC[j];
      if (a[i][j] == mx) k--;
      if (k == total) {
        cout << mx - 1 << "\n";
        return;
      }
    }
  }
  cout << mx << "\n";
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t = 1;
  cin >> t;
  
  while (t--) {
    solve();
  }
 
  return 0;
}