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
  for (auto &x : a)
    cin >> x;

  int cnt = 0;
  for (int i = 0; i < n; i++)
    if (a[i] != 0 && (i == 0 || a[i - 1] == 0))
      cnt++;

  cout << min(cnt, 2) << endl;
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
