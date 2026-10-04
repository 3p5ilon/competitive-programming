#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  // int n;
  // cin >> n;
  // vector<int> b;
  // for (int i = n; i > 0; i--) {
  //   b.push_back(i);
  // }
  // for (int i = 0; i < n; i++) {
  //   int a;
  //   cin >> a;
  //   cout << b[a - 1] << " ";
  // }
  // cout << endl;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    cout << (n + 1) - a << " ";
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
