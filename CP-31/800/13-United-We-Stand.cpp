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
  vector<int> a(n), b, c;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int max = *max_element(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    if (a[i] != max)
      b.push_back(a[i]);
    else
      c.push_back(a[i]);
  }

  if (b.size() == 0) {
    cout << -1 << endl;
  } else {
    cout << b.size() << " " << c.size() << endl;
    for (auto it : b)
      cout << it << " ";
    cout << endl;
    for (auto it : c)
      cout << it << " ";
    cout << endl;
  }
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
