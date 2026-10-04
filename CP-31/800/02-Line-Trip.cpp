#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int n, x, curr, dist = 0, prev = 0;
  cin >> n >> x;
  for (int i = 0; i < n; i++) {
    cin >> curr;
    dist = max(dist, curr - prev);
    prev = curr;
  }
  cout << max(dist, 2 * (x - curr)) << endl;
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
