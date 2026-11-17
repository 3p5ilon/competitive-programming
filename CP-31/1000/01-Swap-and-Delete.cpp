#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  string s;
  cin >> s;

  int zeros = 0, ones = 0, n = s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] == '0')
      zeros++;
    else
      ones++;
  }

  int t = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0' && ones > 0) {
      ones--;
      t++;
    } else if (s[i] == '1' && zeros > 0) {
      zeros--;
      t++;
    } else
      break;
  }

  cout << n - t << endl;
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
