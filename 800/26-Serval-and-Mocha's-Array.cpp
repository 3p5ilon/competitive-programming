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
  vector<int> a(n);

  for (int &x : a)
    cin >> x;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (gcd(a[i], a[j]) <= 2) {
        cout << "Yes" << endl;
        return;
      }
    }
  }
  cout << "No" << endl;
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
