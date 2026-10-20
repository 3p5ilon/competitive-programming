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
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int cnt = 0;
  for (int i = n - 2; i >= 0; i--) {
    while (a[i] >= a[i + 1] && a[i] > 0) {
      a[i] /= 2;
      cnt++;
    }
    if (a[i] == a[i + 1]) {
      cout << -1 << endl;
      return;
    }
  }
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
