#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  ll n, q;
  cin >> n >> q;

  vector<ll> a(n + 1);
  vector<ll> pref(n + 1, 0);

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    pref[i] = pref[i - 1] + a[i];
  }

  ll sum = pref[n];

  while (q--) {
    ll l, r, k;
    cin >> l >> r >> k;

    ll ans = (sum - (pref[r] - pref[l - 1])) + ((r - l + 1) * k);

    if (ans % 2 != 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
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
