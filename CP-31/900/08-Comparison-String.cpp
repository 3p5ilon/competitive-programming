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
  string s;
  cin >> s;

  int cnt = 1, ans = 1;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1])
      cnt++;
    else
      cnt = 1;
    ans = max(ans, cnt);
  }
  cout << ans + 1 << endl;
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
