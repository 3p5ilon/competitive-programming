#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  ll a, b, n;
  cin >> a >> b >> n;

  ll t = 0;
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    t += min(a - 1, x);
  }

  cout << t + b << endl;
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
