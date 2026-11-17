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

  ll freq = 0;
  unordered_map<ll, ll> mp;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    freq = max(freq, ++mp[x]);
  }

  int clones = 0;
  ll m = freq;
  while (2 * m <= n) {
    m *= 2;
    clones++;
  }

  if (m < n)
    clones++;

  cout << (n - freq) + clones << endl;
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
