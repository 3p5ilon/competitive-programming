#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  ll n;
  cin >> n;

  // LCM grows pretty quickly, which tells us that x cannot become very
  // large when n ≤ 10¹⁸.

  int x = 1;
  while (n % x == 0)
    x++;
  cout << x - 1 << endl;
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
