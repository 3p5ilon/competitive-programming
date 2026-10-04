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
  unordered_map<int, int> mp;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    mp[a]++;
  }
  if (mp.size() > 2) {
    cout << "NO" << endl;
    return;
  }

  int a = 0, b = 0;
  for (auto it : mp) {
    if (a == 0)
      a = it.second;
    else
      b = it.second;
  }

  if (mp.size() == 1 || abs(a - b) <= 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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
