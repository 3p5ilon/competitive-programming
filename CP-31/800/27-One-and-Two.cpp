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
  vector<int> pos;
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if (a == 2)
      pos.push_back(i);
  }

  if (pos.size() == 0) {
    cout << 1 << endl;
    return;
  }
  if (pos.size() % 2 != 0) {
    cout << -1 << endl;
    return;
  }
  cout << pos[pos.size() / 2 - 1] << endl;
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
