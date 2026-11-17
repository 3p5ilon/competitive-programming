#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  ll n, k;
  cin >> n >> k;

  vector<pair<ll, ll>> v;
  for (int i = 1; i <= n; i++) {
    ll a;
    cin >> a;
    int b = a % k;
    if (b == 0)
      b = k;
    v.push_back({b, i});
  }

  sort(v.begin(), v.end(), [](auto x, auto y) {
    if (x.first != y.first)
      return x.first > y.first;
    return x.second < y.second;
  });

  for (auto it : v)
    cout << it.second << " ";
  cout << endl;
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
