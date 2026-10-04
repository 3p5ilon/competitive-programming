#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int a[26] = {};
  for (char c : s) {
    a[c - 'a']++;
  }

  int cnt = 0;
  for (auto it : a)
    if (it % 2 == 1)
      cnt++;

  if (cnt > k + 1)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
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
