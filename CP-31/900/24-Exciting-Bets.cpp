#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  ll a, b;
  cin >> a >> b;

  if (a == b) {
    cout << 0 << " " << 0 << endl;
  } else {
    ll g = abs(a - b);
    ll m = min(a % g, g - (a % g));
    cout << g << " " << m << endl;
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
