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
  int p[n];
  for (int i = 0; i < n; i++)
    cin >> p[i];

  for (int i = 1; i < n - 1; i++)
    if (p[i - 1] < p[i] && p[i] > p[i + 1]) {
      cout << "YES" << endl;
      cout << i << " " << i + 1 << " " << i + 2 << endl;
      return;
    }
  cout << "NO" << endl;
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
