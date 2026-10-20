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
  for (auto &x : a)
    cin >> x;

  int ans = a[n - 1] - a[0];

  for (int i = 1; i < n; i++)
    ans = max(ans, a[i] - a[0]);

  for (int i = 0; i < n - 1; i++)
    ans = max(ans, a[n - 1] - a[i]);

  for (int i = 0; i < n - 1; i++)
    ans = max(ans, a[i] - a[i + 1]);

  cout << ans << endl;
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
