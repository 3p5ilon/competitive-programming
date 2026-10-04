#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  ll n, k, x;
  cin >> n >> k >> x;

  ll max_sum = (n * (n + 1)) / 2 - ((n - k) * ((n - k) + 1)) / 2;
  ll min_sum = (k * (k + 1)) / 2;

  if (min_sum <= x && max_sum >= x)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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
