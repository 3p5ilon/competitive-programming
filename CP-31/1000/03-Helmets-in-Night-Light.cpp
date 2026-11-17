#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int n, p;
  cin >> n >> p;

  vector<pair<ll, ll>> v(n);
  vector<ll> a(n), b(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  for (int i = 0; i < n; i++)
    v[i] = {b[i], a[i]};

  sort(v.begin(), v.end());

  ll share = 1, cost = p;
  for (auto it : v) {
    if (share >= n)
      break;

    if (it.first <= p) {
      ll can_share = min(it.second, n - share);
      share += can_share;
      cost += it.first * can_share;
    } else {
      cost += (n - share) * p;
      break;
    }
  }

  cout << cost << endl;
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
