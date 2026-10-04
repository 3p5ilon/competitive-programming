#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int n;
  cin >> n;
  int a[n];

  int cnt = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 0)
      cnt++;
    else {
      ans = max(cnt, ans);
      cnt = 0;
    }
  }
  cout << max(cnt, ans) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
