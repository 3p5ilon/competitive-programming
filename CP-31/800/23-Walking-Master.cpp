#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int cnt = 0;

  if (d < b) {
    cout << -1 << endl;
    return;
  }
  cnt += d - b;
  a += d - b;

  if (a < c) {
    cout << -1 << endl;
    return;
  }
  cnt += abs(c - a);
  cout << cnt << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
