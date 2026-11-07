#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

int operations(string &n, string &t) {
  int target = t.size() - 1;
  int opp = 0;

  for (int i = n.size() - 1; i >= 0; i--) {
    if (n[i] == t[target]) {
      target--;
      if (target < 0)
        break;
    } else {
      opp++;
    }
  }

  if (target >= 0)
    opp = INT_MAX;
  return opp;
}

void solve() {
  string n;
  cin >> n;

  vector<string> possible = {"00", "25", "50", "75"};
  int ans = INT_MAX;

  for (auto t : possible)
    ans = min(ans, operations(n, t));

  cout << ans << endl;
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
