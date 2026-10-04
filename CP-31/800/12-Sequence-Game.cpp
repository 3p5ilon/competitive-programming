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
  vector<int> v(n), a;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (i >= 1 && v[i] < v[i - 1]) {
      a.push_back(v[i]);
    }
    a.push_back(v[i]);
  }
  cout << a.size() << endl;
  for (auto it : a) {
    cout << it << " ";
  }
  cout << endl;
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
