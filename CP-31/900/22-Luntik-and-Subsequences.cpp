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

  int zeros = 0, onces = 0;
  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    if (a == 0)
      zeros++;
    if (a == 1)
      onces++;
  }

  ll x = 1;
  for (int i = 0; i < zeros; i++)
    x *= 2;

  cout << x * onces << endl;
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
