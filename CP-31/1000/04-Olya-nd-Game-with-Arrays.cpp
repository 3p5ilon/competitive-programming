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

  vector<pair<ll, ll>> least;
  while (n--) {

    int m;
    cin >> m;
    vector<int> v(m);

    for (auto &x : v)
      cin >> x;

    sort(v.begin(), v.end());
    least.push_back({v[0], v[1]});
  }

  ll mn_second = INFLL;
  ll global_mn = INFLL;
  ll sum_second = 0;

  for (auto it : least) {
    global_mn = min(global_mn, it.first);
    mn_second = min(mn_second, it.second);
    sum_second += it.second;
  }
  cout << sum_second - mn_second + global_mn << endl;
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
