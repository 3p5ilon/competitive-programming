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
  int neg = 0, pos = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a == -1)
      neg++;
    else
      pos++;
  }

  int ans = 0;
  while (pos < neg) {
    pos++;
    neg--;
    ans++;
  }
  if (neg % 2 != 0) {
    ans++;
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
