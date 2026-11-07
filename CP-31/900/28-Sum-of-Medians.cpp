#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n * k);
  for (auto &x : a)
    cin >> x;

  int t = n / 2 + 1;
  int i = n * k - t;

  ll sum = 0;
  for (int j = 0; j < k; j++) {
    sum += a[i];
    i -= t;
  }
  cout << sum << endl;
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
