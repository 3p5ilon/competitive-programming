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
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int diff = INT_MAX;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] <= a[i + 1]) {
      diff = min(a[i + 1] - a[i], diff);
    } else {
      cout << 0 << endl;
      return;
    }
  }
  cout << diff / 2 + 1 << endl;
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
